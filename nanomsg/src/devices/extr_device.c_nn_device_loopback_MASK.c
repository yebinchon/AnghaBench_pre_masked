
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_device_recipe {int dummy; } ;
typedef int op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nn_device_recipe*,int,int,int ) ;
 int FUNC_2 (int,int ,int ,int*,size_t*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (struct nn_device_recipe *VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8;
    size_t VAR_9;


    VAR_9 = sizeof (VAR_8);
    VAR_7 = FUNC_2 (VAR_6, VAR_3, VAR_2, &VAR_8, &VAR_9);
    if (FUNC_3 (VAR_7 != 0))
        return -1;
    FUNC_0 (VAR_9 == sizeof (VAR_8));
    if (VAR_8 != VAR_0) {
        VAR_4 = VAR_1;
        return -1;
    }

    for (;;) {
        VAR_7 = FUNC_1 (VAR_5, VAR_6, VAR_6, 0);
        if (FUNC_3 (VAR_7 < 0))
            return -1;
    }
}
