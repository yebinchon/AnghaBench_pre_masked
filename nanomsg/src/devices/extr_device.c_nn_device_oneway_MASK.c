
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_device_recipe {int dummy; } ;


 int FUNC_0 (struct nn_device_recipe*,int,int,int ) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2 (struct nn_device_recipe *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;

    while (1) {
        VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2, 0);
        if (FUNC_1 (VAR_3 < 0))
            return -1;
    }
}
