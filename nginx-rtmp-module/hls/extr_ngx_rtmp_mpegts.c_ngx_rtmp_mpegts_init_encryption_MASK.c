
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* u_char ;
struct TYPE_3__ {int encrypt; void** iv; int key; } ;
typedef TYPE_1__ ngx_rtmp_mpegts_file_t ;
typedef int ngx_int_t ;


 scalar_t__ FUNC_0 (void**,size_t,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void**,int) ;

ngx_int_t
FUNC_2(ngx_rtmp_mpegts_file_t *VAR_2,
    u_char *VAR_3, size_t VAR_4, uint64_t VAR_5)
{
    if (FUNC_0(VAR_3, VAR_4 * 8, &VAR_2->key)) {
        return VAR_0;
    }

    FUNC_1(VAR_2->iv, 8);

    VAR_2->iv[8] = (u_char) (VAR_5 >> 56);
    VAR_2->iv[9] = (u_char) (VAR_5 >> 48);
    VAR_2->iv[10] = (u_char) (VAR_5 >> 40);
    VAR_2->iv[11] = (u_char) (VAR_5 >> 32);
    VAR_2->iv[12] = (u_char) (VAR_5 >> 24);
    VAR_2->iv[13] = (u_char) (VAR_5 >> 16);
    VAR_2->iv[14] = (u_char) (VAR_5 >> 8);
    VAR_2->iv[15] = (u_char) (VAR_5);

    VAR_2->encrypt = 1;

    return VAR_1;
}
