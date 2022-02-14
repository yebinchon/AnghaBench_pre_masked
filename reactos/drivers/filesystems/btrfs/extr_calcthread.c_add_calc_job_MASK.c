
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int lock; int event; int job_list; } ;
struct TYPE_8__ {TYPE_1__ calcthreads; } ;
typedef TYPE_2__ device_extension ;
struct TYPE_9__ {int refcount; int list_entry; int event; scalar_t__ done; scalar_t__ pos; int * csum; int sectors; int * data; } ;
typedef TYPE_3__ calc_job ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 TYPE_3__* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

NTSTATUS FUNC_8(device_extension* VAR_5, uint8_t* VAR_6, uint32_t VAR_7, uint32_t* VAR_8, calc_job** VAR_9) {
    calc_job* VAR_10;

    VAR_10 = FUNC_2(VAR_1, sizeof(calc_job), VAR_0);
    if (!VAR_10) {
        FUNC_0("out of memory\n");
        return VAR_3;
    }

    VAR_10->data = VAR_6;
    VAR_10->sectors = VAR_7;
    VAR_10->csum = VAR_8;
    VAR_10->pos = 0;
    VAR_10->done = 0;
    VAR_10->refcount = 1;
    FUNC_6(&VAR_10->event, VAR_2, 0);

    FUNC_1(&VAR_5->calcthreads.lock, 1);

    FUNC_4(&VAR_5->calcthreads.job_list, &VAR_10->list_entry);

    FUNC_7(&VAR_5->calcthreads.event, 0, 0);
    FUNC_5(&VAR_5->calcthreads.event);

    FUNC_3(&VAR_5->calcthreads.lock);

    *VAR_9 = VAR_10;

    return VAR_4;
}
