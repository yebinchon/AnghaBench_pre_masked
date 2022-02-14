
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int packet ;
typedef int ngx_uint_t ;
struct TYPE_8__ {int pid; scalar_t__ pts; scalar_t__ dts; int cc; scalar_t__ sid; scalar_t__ key; } ;
typedef TYPE_1__ ngx_rtmp_mpegts_frame_t ;
struct TYPE_9__ {int log; } ;
typedef TYPE_2__ ngx_rtmp_mpegts_file_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int last; int pos; } ;
typedef TYPE_3__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int,scalar_t__,scalar_t__,scalar_t__,int,size_t) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int*,int,int) ;
 int* FUNC_3 (int*,int*,int) ;
 int FUNC_4 (TYPE_2__*,int*,int) ;
 int* FUNC_5 (int*,scalar_t__) ;
 int* FUNC_6 (int*,int,scalar_t__) ;

ngx_int_t
FUNC_7(ngx_rtmp_mpegts_file_t *VAR_3,
    ngx_rtmp_mpegts_frame_t *VAR_4, ngx_buf_t *VAR_5)
{
    ngx_uint_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    u_char VAR_12[188], *VAR_13, *VAR_14;
    ngx_int_t VAR_15, VAR_16;

    FUNC_0(VAR_0, VAR_3->log, 0,
                   "mpegts: pid=%ui, sid=%ui, pts=%uL, "
                   "dts=%uL, key=%ui, size=%ui",
                   VAR_4->pid, VAR_4->sid, VAR_4->pts, VAR_4->dts,
                   (ngx_uint_t) VAR_4->key, (size_t) (VAR_5->last - VAR_5->pos));

    VAR_15 = 1;

    while (VAR_5->pos < VAR_5->last) {
        VAR_13 = VAR_12;

        VAR_4->cc++;

        *VAR_13++ = 0x47;
        *VAR_13++ = (u_char) (VAR_4->pid >> 8);

        if (VAR_15) {
            VAR_13[-1] |= 0x40;
        }

        *VAR_13++ = (u_char) VAR_4->pid;
        *VAR_13++ = 0x10 | (VAR_4->cc & 0x0f);

        if (VAR_15) {

            if (VAR_4->key) {
                VAR_12[3] |= 0x20;

                *VAR_13++ = 7;
                *VAR_13++ = 0x50;

                VAR_13 = FUNC_5(VAR_13, VAR_4->dts - VAR_2);
            }



            *VAR_13++ = 0x00;
            *VAR_13++ = 0x00;
            *VAR_13++ = 0x01;
            *VAR_13++ = (u_char) VAR_4->sid;

            VAR_7 = 5;
            VAR_11 = 0x80;

            if (VAR_4->dts != VAR_4->pts) {
                VAR_7 += 5;
                VAR_11 |= 0x40;
            }

            VAR_6 = (VAR_5->last - VAR_5->pos) + VAR_7 + 3;
            if (VAR_6 > 0xffff) {
                VAR_6 = 0;
            }

            *VAR_13++ = (u_char) (VAR_6 >> 8);
            *VAR_13++ = (u_char) VAR_6;
            *VAR_13++ = 0x80;
            *VAR_13++ = (u_char) VAR_11;
            *VAR_13++ = (u_char) VAR_7;

            VAR_13 = FUNC_6(VAR_13, VAR_11 >> 6, VAR_4->pts +
                                                         VAR_2);

            if (VAR_4->dts != VAR_4->pts) {
                VAR_13 = FUNC_6(VAR_13, 1, VAR_4->dts +
                                                    VAR_2);
            }

            VAR_15 = 0;
        }

        VAR_8 = (ngx_uint_t) (VAR_12 + sizeof(VAR_12) - VAR_13);
        VAR_9 = (ngx_uint_t) (VAR_5->last - VAR_5->pos);

        if (VAR_8 <= VAR_9) {
            FUNC_1(VAR_13, VAR_5->pos, VAR_8);
            VAR_5->pos += VAR_8;

        } else {
            VAR_10 = (VAR_8 - VAR_9);

            if (VAR_12[3] & 0x20) {



                VAR_14 = &VAR_12[5] + VAR_12[4];
                VAR_13 = FUNC_3(VAR_14 + VAR_10, VAR_14, VAR_13 - VAR_14);
                FUNC_2(VAR_14, 0xff, VAR_10);
                VAR_12[4] += (u_char) VAR_10;

            } else {



                VAR_12[3] |= 0x20;
                VAR_13 = FUNC_3(&VAR_12[4] + VAR_10, &VAR_12[4],
                                VAR_13 - &VAR_12[4]);

                VAR_12[4] = (u_char) (VAR_10 - 1);
                if (VAR_10 >= 2) {
                    VAR_12[5] = 0;
                    FUNC_2(&VAR_12[6], 0xff, VAR_10 - 2);
                }
            }

            FUNC_1(VAR_13, VAR_5->pos, VAR_9);
            VAR_5->pos = VAR_5->last;
        }

        VAR_16 = FUNC_4(VAR_3, VAR_12, sizeof(VAR_12));
        if (VAR_16 != VAR_1) {
            return VAR_16;
        }
    }

    return VAR_1;
}
