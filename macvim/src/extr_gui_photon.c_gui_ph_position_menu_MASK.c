
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priority; } ;
typedef TYPE_1__ vimmenu_T ;
typedef int PtWidget_t ;


 int FUNC_0 (int *,int ,TYPE_1__**,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(PtWidget_t *VAR_1, int VAR_2)
{
    PtWidget_t *VAR_3;
    vimmenu_T *VAR_4;

    VAR_3 = FUNC_2(FUNC_4(VAR_1));




    while (VAR_3 != ((void*)0))
    {
 FUNC_0(VAR_3, VAR_0, &VAR_4, 0);

 if (VAR_4 != ((void*)0) &&
  VAR_2 < VAR_4->priority &&
  VAR_1 != VAR_3)
 {

     FUNC_3(VAR_1, VAR_3, 1);
     return;
 }

 VAR_3 = FUNC_1(VAR_3);
    }
}
