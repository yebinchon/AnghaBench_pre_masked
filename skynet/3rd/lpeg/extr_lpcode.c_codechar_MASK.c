
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ code; int aux; } ;
struct TYPE_4__ {TYPE_1__ i; } ;
typedef int CompileState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_2__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2 (CompileState *VAR_3, int VAR_4, int VAR_5) {
  if (VAR_5 >= 0 && FUNC_1(VAR_3, VAR_5).i.code == VAR_2 &&
                 FUNC_1(VAR_3, VAR_5).i.aux == VAR_4)
    FUNC_0(VAR_3, VAR_0, 0);
  else
    FUNC_0(VAR_3, VAR_1, VAR_4);
}
