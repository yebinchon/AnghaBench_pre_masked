
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t datalen; int buffer_event; int * data; } ;
typedef TYPE_2__ send_context ;
struct TYPE_10__ {int send_load_lock; } ;
typedef TYPE_3__ device_extension ;
struct TYPE_11__ {TYPE_1__* send; int send_status; } ;
typedef TYPE_4__ ccb ;
typedef size_t ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_12__ {TYPE_4__* FsContext2; } ;
struct TYPE_8__ {int cleared_event; scalar_t__ context; } ;
typedef TYPE_5__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef int KPROCESSOR_MODE ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int ,int,int *) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int *,int ) ;
 int FUNC_8 (int *,int *,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (size_t,size_t) ;

NTSTATUS FUNC_11(device_extension* VAR_7, PFILE_OBJECT VAR_8, void* VAR_9, ULONG VAR_10, ULONG_PTR* VAR_11, KPROCESSOR_MODE VAR_12) {
    ccb* VAR_13;
    send_context* VAR_14;

    VAR_13 = VAR_8 ? VAR_8->FsContext2 : ((void*)0);
    if (!VAR_13)
        return VAR_4;

    if (!FUNC_9(FUNC_6(VAR_2), VAR_12))
        return VAR_5;

    FUNC_0(&VAR_7->send_load_lock, 1);

    if (!VAR_13->send) {
        FUNC_1(&VAR_7->send_load_lock);
        return !FUNC_5(VAR_13->send_status) ? VAR_13->send_status : VAR_3;
    }

    VAR_14 = (send_context*)VAR_13->send->context;

    FUNC_4(&VAR_14->buffer_event, VAR_0, VAR_1, 0, ((void*)0));

    if (VAR_10 == 0) {
        FUNC_1(&VAR_7->send_load_lock);
        return VAR_6;
    }

    FUNC_7(VAR_9, VAR_14->data, FUNC_10(VAR_10, VAR_14->datalen));

    if (VAR_10 < VAR_14->datalen) {
        *VAR_11 = VAR_10;
        FUNC_8(VAR_14->data, &VAR_14->data[VAR_10], VAR_14->datalen - VAR_10);
        VAR_14->datalen -= VAR_10;
        FUNC_1(&VAR_7->send_load_lock);
    } else {
        *VAR_11 = VAR_14->datalen;
        VAR_14->datalen = 0;
        FUNC_1(&VAR_7->send_load_lock);

        FUNC_2(&VAR_14->buffer_event);
        FUNC_3(&VAR_13->send->cleared_event, 0, 0);
    }

    return VAR_6;
}
