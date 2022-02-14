
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ signature; int uncompressed_size; int filename_len; int extra_len; } ;
typedef TYPE_1__ MEMZIP_FILE_HDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char const*,int ) ;

const MEMZIP_FILE_HDR *FUNC_1(const char *VAR_2) {

    const MEMZIP_FILE_HDR *VAR_3 = (const MEMZIP_FILE_HDR *)VAR_1;
    uint8_t *VAR_4;



    if (*VAR_2 == '/') {
        VAR_2++;
    }
    while (VAR_3->signature == VAR_0) {
        const char *VAR_5 = (const char *)&VAR_3[1];
        VAR_4 = (uint8_t *)VAR_5;
        VAR_4 += VAR_3->filename_len;
        VAR_4 += VAR_3->extra_len;
        if (!FUNC_0(VAR_5, VAR_2, VAR_3->filename_len)) {

            return VAR_3;
        }
        VAR_4 += VAR_3->uncompressed_size;
        VAR_3 = (const MEMZIP_FILE_HDR *)VAR_4;
    }
    return ((void*)0);
}
