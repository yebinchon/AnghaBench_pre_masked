
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_3__ {int duration; int size; int delay; scalar_t__ key; } ;
typedef TYPE_1__ ngx_rtmp_mp4_sample_t ;
typedef int ngx_int_t ;
typedef int ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_buf_t *VAR_5, uint32_t VAR_6,
    ngx_rtmp_mp4_sample_t *VAR_7, ngx_uint_t VAR_8, u_char *VAR_9)
{
    u_char *VAR_10;
    uint32_t VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_10 = FUNC_1(VAR_5, "trun");

    VAR_13 = 0;


    VAR_14 = 0x01;

    if (VAR_8 & VAR_2) {
        VAR_13++;
        VAR_14 |= 0x000100;
    }

    if (VAR_8 & VAR_4) {
        VAR_13++;
        VAR_14 |= 0x000200;
    }

    if (VAR_8 & VAR_3) {
        VAR_13++;
        VAR_14 |= 0x000400;
    }

    if (VAR_8 & VAR_1) {
        VAR_13++;
        VAR_14 |= 0x000800;
    }

    VAR_12 = (VAR_10 - VAR_9) + 20 + (VAR_6 * VAR_13 * 4) + 8;

    FUNC_0(VAR_5, VAR_14);
    FUNC_0(VAR_5, VAR_6);
    FUNC_0(VAR_5, VAR_12);

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++, VAR_7++) {

        if (VAR_8 & VAR_2) {
            FUNC_0(VAR_5, VAR_7->duration);
        }

        if (VAR_8 & VAR_4) {
            FUNC_0(VAR_5, VAR_7->size);
        }

        if (VAR_8 & VAR_3) {
            FUNC_0(VAR_5, VAR_7->key ? 0x00000000 : 0x00010000);
        }

        if (VAR_8 & VAR_1) {
            FUNC_0(VAR_5, VAR_7->delay);
        }
    }

    FUNC_2(VAR_5, VAR_10);

    return VAR_0;
}
