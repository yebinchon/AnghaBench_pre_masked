
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ k; } ;
typedef TYPE_1__ expdesc ;
struct TYPE_9__ {scalar_t__ freereg; } ;
typedef TYPE_2__ FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2 (FuncState *VAR_1, expdesc *VAR_2) {
  if (VAR_2->k != VAR_0) {
    FUNC_1(VAR_1, 1);
    FUNC_0(VAR_1, VAR_2, VAR_1->freereg-1);
  }
}
