
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Valid; int Event; int ListHead; int Lock; } ;
typedef TYPE_1__ sys_mbox_t ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

err_t
FUNC_3(sys_mbox_t *VAR_3, int VAR_4)
{
    FUNC_2(&VAR_3->Lock);

    FUNC_0(&VAR_3->ListHead);

    FUNC_1(&VAR_3->Event, VAR_2, VAR_1);

    VAR_3->Valid = 1;

    return VAR_0;
}
