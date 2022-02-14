
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ avail_out; int * next_out; void* avail_in; int * next_in; scalar_t__ opaque; int zfree; int zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef scalar_t__ voidpf ;
typedef int uint8_t ;
typedef void* uint32_t ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

NTSTATUS FUNC_4(uint8_t* VAR_7, uint32_t VAR_8, uint8_t* VAR_9, uint32_t VAR_10) {
    z_stream VAR_11;
    int VAR_12;

    VAR_11.zalloc = VAR_5;
    VAR_11.zfree = VAR_6;
    VAR_11.opaque = (voidpf)0;

    VAR_12 = FUNC_3(&VAR_11);

    if (VAR_12 != VAR_3) {
        FUNC_0("inflateInit returned %08x\n", VAR_12);
        return VAR_0;
    }

    VAR_11.next_in = VAR_7;
    VAR_11.avail_in = VAR_8;

    VAR_11.next_out = VAR_9;
    VAR_11.avail_out = VAR_10;

    do {
        VAR_12 = FUNC_1(&VAR_11, VAR_2);

        if (VAR_12 != VAR_3 && VAR_12 != VAR_4) {
            FUNC_0("inflate returned %08x\n", VAR_12);
            FUNC_2(&VAR_11);
            return VAR_0;
        }

        if (VAR_11.avail_out == 0)
            break;
    } while (VAR_12 != VAR_4);

    VAR_12 = FUNC_2(&VAR_11);

    if (VAR_12 != VAR_3) {
        FUNC_0("inflateEnd returned %08x\n", VAR_12);
        return VAR_0;
    }



    return VAR_1;
}
