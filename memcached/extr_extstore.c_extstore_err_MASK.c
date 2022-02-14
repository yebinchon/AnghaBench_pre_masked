
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum extstore_res { ____Placeholder_extstore_res } extstore_res ;
const char *FUNC_0(enum extstore_res VAR_0) {
    char *VAR_1 = "unknown error";
    switch (VAR_0) {
        case 135:
            VAR_1 = "page_size must be divisible by wbuf_size";
            break;
        case 133:
            VAR_1 = "wbuf_count must be >= page_buckets";
            break;
        case 134:
            VAR_1 = "page_buckets must be > 0";
            break;
        case 130:
            VAR_1 = "page_size and wbuf_size must be divisible by 1024*1024*2";
            break;
        case 128:
            VAR_1 = "page_count must total to < 65536. Increase page_size or lower path sizes";
            break;
        case 132:
            VAR_1 = "failed calloc for engine";
            break;
        case 131:
            VAR_1 = "failed to open file";
            break;
        case 129:
            break;
    }
    return VAR_1;
}
