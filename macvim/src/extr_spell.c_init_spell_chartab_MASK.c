
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* st_isw; int* st_fold; int* st_upper; void** st_isu; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 void* VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int) ;

void
FUNC_10()
{
    int VAR_6;

    VAR_2 = VAR_0;
    FUNC_5(&VAR_5);
    {

 for (VAR_6 = 128; VAR_6 < 256; ++VAR_6)
 {
     if (FUNC_2(VAR_6))
     {
  VAR_5.st_isw[VAR_6] = VAR_1;
  VAR_5.st_isu[VAR_6] = VAR_1;
  VAR_5.st_fold[VAR_6] = FUNC_3(VAR_6);
     }
     else if (FUNC_1(VAR_6))
     {
  VAR_5.st_isw[VAR_6] = VAR_1;
  VAR_5.st_upper[VAR_6] = FUNC_4(VAR_6);
     }
 }
    }
}
