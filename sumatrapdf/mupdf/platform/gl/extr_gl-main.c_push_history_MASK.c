
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int loc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_2 > 0 && FUNC_0(VAR_1[VAR_2-1].loc, VAR_0))
  return;
 if (VAR_2 + 1 >= (int)FUNC_2(VAR_1))
 {
  FUNC_1(VAR_1, VAR_1 + 1, sizeof *VAR_1 * (FUNC_2(VAR_1) - 1));
  VAR_1[VAR_2] = FUNC_3();
 }
 else
 {
  VAR_1[VAR_2++] = FUNC_3();
 }
}
