
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_5__ {scalar_t__ pos; void* size; int * dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {scalar_t__ pos; void* size; int * src; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_DStream ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 size_t FUNC_2 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t) ;
 size_t FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (size_t) ;
 int VAR_2 ;

NTSTATUS FUNC_7(uint8_t* VAR_3, uint32_t VAR_4, uint8_t* VAR_5, uint32_t VAR_6) {
    NTSTATUS VAR_7;
    ZSTD_DStream* VAR_8;
    size_t VAR_9, VAR_10;
    ZSTD_inBuffer VAR_11;
    ZSTD_outBuffer VAR_12;

    VAR_8 = FUNC_1(VAR_2);

    if (!VAR_8) {
        FUNC_0("ZSTD_createDStream failed.\n");
        return VAR_0;
    }

    VAR_9 = FUNC_5(VAR_8);

    if (FUNC_6(VAR_9)) {
        FUNC_0("ZSTD_initDStream failed: %s\n", FUNC_4(VAR_9));
        VAR_7 = VAR_0;
        goto end;
    }

    VAR_11.src = VAR_3;
    VAR_11.size = VAR_4;
    VAR_11.pos = 0;

    VAR_12.dst = VAR_5;
    VAR_12.size = VAR_6;
    VAR_12.pos = 0;

    VAR_10 = FUNC_2(VAR_8, &VAR_12, &VAR_11);

    if (FUNC_6(VAR_10)) {
        FUNC_0("ZSTD_decompressStream failed: %s\n", FUNC_4(VAR_10));
        VAR_7 = VAR_0;
        goto end;
    }

    VAR_7 = VAR_1;

end:
    FUNC_3(VAR_8);

    return VAR_7;
}
