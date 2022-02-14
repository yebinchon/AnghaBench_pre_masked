
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sobj; scalar_t__ fs_type; } ;
typedef int FRESULT ;
typedef TYPE_1__ FATFS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

FRESULT FUNC_3 (
    FATFS* VAR_1
)
{
    FRESULT VAR_2;

    VAR_1->fs_type = 0;




    VAR_2 = FUNC_2(VAR_1, 0);
    FUNC_0(VAR_1, VAR_2);
}
