
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dialog; int * focus; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (FUNC_1(VAR_0))
 {
  if (VAR_0[0] != 0)
  {
   FUNC_0(&VAR_1, "");
   VAR_3.focus = &VAR_1;
   VAR_3.dialog = VAR_2;
  }
  else
   VAR_3.dialog = ((void*)0);
 }
}
