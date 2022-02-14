
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_8__ {int recovered; int is_metadata; int parity; int list_entry; int data; int metadata; void* device; void* address; } ;
typedef TYPE_2__ scrub_error ;
struct TYPE_7__ {int stats_lock; int errors; int num_errors; } ;
struct TYPE_9__ {TYPE_1__ scrub; } ;
typedef TYPE_3__ device_extension ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 TYPE_2__* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__*,void*,void*) ;

__attribute__((used)) static void FUNC_7(device_extension* VAR_2, uint64_t VAR_3, uint64_t VAR_4, bool VAR_5, bool VAR_6, bool VAR_7) {
    if (VAR_6) {
        scrub_error* VAR_8;

        if (VAR_7) {
            FUNC_0("recovering from parity error at %I64x on device %I64x\n", VAR_3, VAR_4);
        } else {
            if (VAR_5)
                FUNC_0("recovering from metadata checksum error at %I64x on device %I64x\n", VAR_3, VAR_4);
            else
                FUNC_0("recovering from data checksum error at %I64x on device %I64x\n", VAR_3, VAR_4);
        }

        VAR_8 = FUNC_2(VAR_1, sizeof(scrub_error), VAR_0);
        if (!VAR_8) {
            FUNC_0("out of memory\n");
            return;
        }

        VAR_8->address = VAR_3;
        VAR_8->device = VAR_4;
        VAR_8->recovered = 1;
        VAR_8->is_metadata = VAR_5;
        VAR_8->parity = VAR_7;

        if (VAR_5)
            FUNC_5(&VAR_8->metadata, sizeof(VAR_8->metadata));
        else
            FUNC_5(&VAR_8->data, sizeof(VAR_8->data));

        FUNC_1(&VAR_2->scrub.stats_lock, 1);

        VAR_2->scrub.num_errors++;
        FUNC_4(&VAR_2->scrub.errors, &VAR_8->list_entry);

        FUNC_3(&VAR_2->scrub.stats_lock);
    } else {
        if (VAR_5)
            FUNC_0("unrecoverable metadata checksum error at %I64x\n", VAR_3);
        else
            FUNC_0("unrecoverable data checksum error at %I64x\n", VAR_3);

        FUNC_6(VAR_2, VAR_3, VAR_4);
    }
}
