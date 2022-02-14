
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int in_buffers; int in_size; int ib; int out_buffers; int out_size; int ob; } ;
struct TYPE_7__ {int obqueue; int ibqueue; int state; int event; int * vmt; } ;
typedef TYPE_1__ QMKUSBDriver ;
typedef TYPE_2__ QMKUSBConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int ,int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;

void FUNC_3(QMKUSBDriver *VAR_4, const QMKUSBConfig *VAR_5) {
    VAR_4->vmt = &VAR_3;
    FUNC_2(&VAR_4->event);
    VAR_4->state = VAR_0;

    FUNC_0(&VAR_4->ibqueue, 1, VAR_5->ob, VAR_5->out_size, VAR_5->out_buffers, VAR_1, VAR_4);
    FUNC_1(&VAR_4->obqueue, 1, VAR_5->ib, VAR_5->in_size, VAR_5->in_buffers, VAR_2, VAR_4);
}
