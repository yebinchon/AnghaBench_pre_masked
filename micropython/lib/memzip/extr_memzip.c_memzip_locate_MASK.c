
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ compression_method; size_t uncompressed_size; int extra_len; int filename_len; } ;
typedef int MEMZIP_RESULT ;
typedef TYPE_1__ MEMZIP_FILE_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (char const*) ;

MEMZIP_RESULT FUNC_1(const char *VAR_3, void **VAR_4, size_t *VAR_5)
{
    const MEMZIP_FILE_HDR *VAR_6 = FUNC_0(VAR_3);
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }
    if (VAR_6->compression_method != 0) {
        return VAR_0;
    }

    uint8_t *VAR_7;
    VAR_7 = (uint8_t *)&VAR_6[1];
    VAR_7 += VAR_6->filename_len;
    VAR_7 += VAR_6->extra_len;

    *VAR_4 = VAR_7;
    *VAR_5 = VAR_6->uncompressed_size;
    return VAR_2;
}
