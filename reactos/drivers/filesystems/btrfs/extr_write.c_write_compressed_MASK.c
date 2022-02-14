
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_11__ {int flags; } ;
struct TYPE_12__ {int inode_item_changed; TYPE_3__ inode_item; TYPE_2__* Vcb; } ;
typedef TYPE_4__ fcb ;
struct TYPE_9__ {int compress_force; } ;
struct TYPE_10__ {TYPE_1__ options; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int,int,int *,int ,int,int ,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_4__*,int,int,int *,int*,int ,int *) ;

NTSTATUS FUNC_7(fcb* VAR_3, uint64_t VAR_4, uint64_t VAR_5, void* VAR_6, PIRP VAR_7, LIST_ENTRY* VAR_8) {
    NTSTATUS VAR_9;
    uint64_t VAR_10;

    for (VAR_10 = 0; VAR_10 < FUNC_5(VAR_5 - VAR_4, VAR_1) / VAR_1; VAR_10++) {
        uint64_t VAR_11, VAR_12;
        bool VAR_13;

        VAR_11 = VAR_4 + (VAR_10 * VAR_1);
        VAR_12 = FUNC_4(VAR_11 + VAR_1, VAR_5);

        VAR_9 = FUNC_6(VAR_3, VAR_11, VAR_12, (uint8_t*)VAR_6 + (VAR_10 * VAR_1), &VAR_13, VAR_7, VAR_8);

        if (!FUNC_1(VAR_9)) {
            FUNC_0("write_compressed_bit returned %08x\n", VAR_9);
            return VAR_9;
        }



        if (VAR_11 == 0 && VAR_12 == VAR_1 && !VAR_13 && !VAR_3->Vcb->options.compress_force) {
            VAR_3->inode_item.flags |= VAR_0;
            VAR_3->inode_item_changed = 1;
            FUNC_3(VAR_3);


            if (VAR_12 < VAR_5) {
                VAR_9 = FUNC_2(VAR_3, VAR_12, VAR_5, (uint8_t*)VAR_6 + VAR_12, VAR_7, 0, 0, VAR_8);

                if (!FUNC_1(VAR_9)) {
                    FUNC_0("do_write_file returned %08x\n", VAR_9);
                    return VAR_9;
                }
            }

            return VAR_2;
        }
    }

    return VAR_2;
}
