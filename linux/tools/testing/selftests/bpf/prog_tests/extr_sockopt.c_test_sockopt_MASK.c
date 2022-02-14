
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int descr; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_6(void)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_4("/sockopt");
 if (FUNC_1(VAR_1 < 0))
  return;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  FUNC_5(VAR_0[VAR_2].descr);
  FUNC_1(FUNC_3(VAR_1, &VAR_0[VAR_2]));
 }

 FUNC_2(VAR_1);
}
