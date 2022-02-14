
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct TYPE_3__ {int Valid; int Event; } ;
typedef TYPE_1__ sys_sem_t ;
typedef int err_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_1 ;

err_t
FUNC_2(sys_sem_t *VAR_2, u8_t VAR_3)
{
    FUNC_0(VAR_3 == 0 || VAR_3 == 1);





    FUNC_1(&VAR_2->Event, VAR_1, VAR_3);

    VAR_2->Valid = 1;

    return VAR_0;
}
