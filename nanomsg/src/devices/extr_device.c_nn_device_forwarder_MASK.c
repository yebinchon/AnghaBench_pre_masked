
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_device_forwarder_args {scalar_t__ rc; int err; int s2; int s1; int device; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (void *VAR_0)
{
    struct nn_device_forwarder_args *VAR_1 = VAR_0;
    for (;;) {
        VAR_1->rc = FUNC_0 (VAR_1->device, VAR_1->s1, VAR_1->s2, 0);
        if (FUNC_2 (VAR_1->rc < 0)) {
            VAR_1->err = FUNC_1 ();
            return;
        }
    }
}
