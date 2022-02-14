
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kms {int fd; scalar_t__ atomic_context; int * encoder; int * connector; int mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct kms*) ;

void FUNC_6(struct kms *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_4(VAR_0->fd, &VAR_0->mode);
    if (VAR_0->connector) {
        FUNC_1(VAR_0->connector);
        VAR_0->connector = ((void*)0);
    }
    if (VAR_0->encoder) {
        FUNC_2(VAR_0->encoder);
        VAR_0->encoder = ((void*)0);
    }
    if (VAR_0->atomic_context) {
       FUNC_3(VAR_0->atomic_context);
    }

    FUNC_0(VAR_0->fd);
    FUNC_5(VAR_0);
}
