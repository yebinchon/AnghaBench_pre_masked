
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo {TYPE_1__* x11; } ;
struct priv {int ** myximage; TYPE_2__* Shminfo; scalar_t__ Shmem_Flag; struct vo* vo; } ;
struct TYPE_4__ {int shmaddr; } ;
struct TYPE_3__ {int display; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct priv *VAR_0, int VAR_1)
{
    struct vo *VAR_2 = VAR_0->vo;
    if (VAR_0->Shmem_Flag) {
        FUNC_1(VAR_2->x11->display, &VAR_0->Shminfo[VAR_1]);
        FUNC_0(VAR_0->myximage[VAR_1]);
        FUNC_2(VAR_0->Shminfo[VAR_1].shmaddr);
    } else {
        if (VAR_0->myximage[VAR_1])
            FUNC_0(VAR_0->myximage[VAR_1]);
    }
    VAR_0->myximage[VAR_1] = ((void*)0);
}
