
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int dummy; } ;
struct nn_device_recipe {int dummy; } ;
struct nn_device_forwarder_args {int s1; int s2; scalar_t__ rc; int err; struct nn_device_recipe* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nn_thread*,int ,struct nn_device_forwarder_args*) ;
 int FUNC_1 (struct nn_thread*) ;

int FUNC_2 (struct nn_device_recipe *VAR_2, int VAR_3, int VAR_4)
{
    struct nn_thread VAR_5;
    struct nn_thread VAR_6;
    struct nn_device_forwarder_args VAR_7;
    struct nn_device_forwarder_args VAR_8;

    VAR_7 = VAR_2;
    VAR_7 = VAR_3;
    VAR_7 = VAR_4;

    VAR_8 = VAR_2;
    VAR_8 = VAR_4;
    VAR_8 = VAR_3;

    FUNC_0 (&VAR_5, VAR_1, &VAR_7);
    FUNC_0 (&VAR_6, VAR_1, &VAR_8);

    FUNC_1 (&VAR_5);
    FUNC_1 (&VAR_6);

    if (VAR_7 != 0) {
        VAR_0 = VAR_7;
        return (VAR_7);
    }
    VAR_0 = VAR_8;
    return VAR_8;
}
