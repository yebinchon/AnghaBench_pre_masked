
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fs; scalar_t__ lockid; } ;
struct TYPE_4__ {TYPE_2__ obj; } ;
typedef scalar_t__ FRESULT ;
typedef int FATFS ;
typedef TYPE_1__ DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int **) ;

FRESULT FUNC_3 (
    DIR *VAR_1
)
{
    FRESULT VAR_2;
    FATFS *VAR_3;


    VAR_2 = FUNC_2(&VAR_1->obj, &VAR_3);
    if (VAR_2 == VAR_0) {




        VAR_1->obj.fs = 0;




    }
    return VAR_2;
}
