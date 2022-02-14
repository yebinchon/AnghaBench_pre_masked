
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* L; } ;
struct TYPE_5__ {scalar_t__ nCcalls; } ;
typedef TYPE_2__ LexState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void FUNC_1 (LexState *VAR_1) {
  if (++VAR_1->L->nCcalls > VAR_0)
 FUNC_0(VAR_1, "chunk has too many syntax levels", 0);
}
