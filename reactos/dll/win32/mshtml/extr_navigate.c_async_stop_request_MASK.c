
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int header; TYPE_4__* bsc; } ;
typedef TYPE_3__ stop_request_task_t ;
struct TYPE_8__ {TYPE_2__* window; int IBindStatusCallback_iface; int readed; } ;
struct TYPE_11__ {TYPE_1__ bsc; } ;
typedef TYPE_4__ nsChannelBSC ;
struct TYPE_9__ {int task_magic; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_5(nsChannelBSC *VAR_3)
{
    stop_request_task_t *VAR_4;

    if(!VAR_3->bsc.readed) {
        FUNC_1("No data read, calling OnStartRequest\n");
        FUNC_3(VAR_3);
    }

    VAR_4 = FUNC_2(sizeof(*VAR_4));
    if(!VAR_4)
        return VAR_0;

    FUNC_0(&VAR_3->bsc.IBindStatusCallback_iface);
    VAR_4->bsc = VAR_3;

    return FUNC_4(&VAR_4->header, VAR_1, VAR_2, VAR_3->bsc.window->task_magic);
}
