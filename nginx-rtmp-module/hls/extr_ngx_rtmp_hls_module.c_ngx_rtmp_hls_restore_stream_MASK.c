
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef char uint64_t ;
typedef char u_char ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;
struct TYPE_17__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_18__ {scalar_t__ fd; double duration; int discont; int active; char id; char key_id; int name; int log; } ;
typedef TYPE_4__ ngx_rtmp_hls_frag_t ;
struct TYPE_15__ {int data; } ;
struct TYPE_19__ {char frag; scalar_t__ nfrags; TYPE_1__ playlist; } ;
typedef TYPE_5__ ngx_rtmp_hls_ctx_t ;
typedef int ngx_int_t ;
typedef TYPE_4__ ngx_file_t ;
typedef int file ;
typedef int buffer ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,double) ;
 int FUNC_3 (int ,int ,int ,char*,size_t,char*,char,double,double,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_5 (char*,int ,size_t) ;
 int FUNC_6 (TYPE_4__*,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,char*,int,scalar_t__) ;
 TYPE_5__* FUNC_9 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_10 (TYPE_3__*,scalar_t__) ;
 int VAR_13 ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *,char*) ;
 char* FUNC_13 (char*,char*,char) ;
 double FUNC_14 (char const*,int *) ;

__attribute__((used)) static void
FUNC_15(ngx_rtmp_session_t *VAR_14)
{
    ngx_rtmp_hls_ctx_t *VAR_15;
    ngx_file_t VAR_16;
    ssize_t VAR_17;
    off_t VAR_18;
    u_char *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24, VAR_25;
    ngx_rtmp_hls_frag_t *VAR_26;
    double VAR_27;
    ngx_int_t VAR_28;
    uint64_t VAR_29, VAR_30, VAR_31;
    static u_char VAR_32[4096];

    VAR_15 = FUNC_9(VAR_14, VAR_13);

    FUNC_6(&VAR_16, sizeof(VAR_16));

    VAR_16.log = VAR_14->connection->log;

    FUNC_12(&VAR_16.name, "m3u8");

    VAR_16.fd = FUNC_7(VAR_15->playlist.data, VAR_1, VAR_0,
                            0);
    if (VAR_16.fd == VAR_2) {
        return;
    }

    VAR_18 = 0;
    VAR_15->nfrags = 0;
    VAR_26 = ((void*)0);
    VAR_27 = 0;
    VAR_28 = 0;
    VAR_30 = 0;

    for ( ;; ) {

        VAR_17 = FUNC_8(&VAR_16, VAR_32, sizeof(VAR_32), VAR_18);
        if (VAR_17 <= 0) {
            goto done;
        }

        VAR_19 = VAR_32;
        VAR_21 = VAR_32 + VAR_17;

        for ( ;; ) {
            VAR_20 = FUNC_13(VAR_19, VAR_21, '\n');

            if (VAR_20 == ((void*)0)) {
                if (VAR_19 == VAR_32) {
                    goto done;
                }
                break;
            }

            VAR_22 = VAR_20 + 1;
            VAR_18 += (VAR_22 - VAR_19);

            if (VAR_19 != VAR_20 && VAR_20[-1] == '\r') {
                VAR_20--;
            }






            if (FUNC_5(VAR_19, "#EXT-X-MEDIA-SEQUENCE:", (sizeof("#EXT-X-MEDIA-SEQUENCE:") - 1)) == 0) {

                VAR_15->frag = (uint64_t) FUNC_14((const char *)
                                              &VAR_19[(sizeof("#EXT-X-MEDIA-SEQUENCE:") - 1)], ((void*)0));

                FUNC_2(VAR_3, VAR_14->connection->log, 0,
                               "hls: restore sequence frag=%uL", VAR_15->frag);
            }





            if (FUNC_5(VAR_19, "#EXT-X-KEY:", (sizeof("#EXT-X-KEY:") - 1)) == 0) {



                VAR_30 = 0;
                VAR_31 = 1;
                VAR_24 = VAR_20 - 1;

                for ( ;; ) {
                    if (VAR_24 < VAR_19) {
                        FUNC_4(VAR_4, VAR_14->connection->log, 0,
                                "hls: failed to read key id");
                        break;
                    }

                    VAR_25 = *VAR_24;
                    if (VAR_25 == 'x') {
                        break;
                    }

                    if (VAR_25 >= '0' && VAR_25 <= '9') {
                        VAR_25 -= '0';
                        goto next;
                    }

                    VAR_25 |= 0x20;

                    if (VAR_25 >= 'a' && VAR_25 <= 'f') {
                        VAR_25 -= 'a' - 10;
                        goto next;
                    }

                    FUNC_4(VAR_4, VAR_14->connection->log, 0,
                                  "hls: bad character in key id");
                    break;

                next:

                    VAR_30 += VAR_31 * VAR_25;
                    VAR_31 *= 0x10;
                    VAR_24--;
                }
            }






            if (FUNC_5(VAR_19, "#EXTINF:", (sizeof("#EXTINF:") - 1)) == 0) {

                VAR_27 = FUNC_14((const char *) &VAR_19[(sizeof("#EXTINF:") - 1)], ((void*)0));

                FUNC_2(VAR_3, VAR_14->connection->log, 0,
                               "hls: restore durarion=%.3f", VAR_27);
            }






            if (FUNC_5(VAR_19, "#EXT-X-DISCONTINUITY", (sizeof("#EXT-X-DISCONTINUITY") - 1)) == 0) {

                VAR_28 = 1;

                FUNC_1(VAR_3, VAR_14->connection->log, 0,
                               "hls: discontinuity");
            }



            if (VAR_19 + 4 <= VAR_20 &&
                VAR_20[-3] == '.' && VAR_20[-2] == 't' && VAR_20[-1] == 's')
            {
                VAR_26 = FUNC_10(VAR_14, VAR_15->nfrags);

                FUNC_6(VAR_26, sizeof(*VAR_26));

                VAR_26->duration = VAR_27;
                VAR_26->discont = VAR_28;
                VAR_26->active = 1;
                VAR_26->id = 0;

                VAR_28 = 0;

                VAR_29 = 1;
                for (VAR_23 = VAR_20 - 4; VAR_23 >= VAR_19; VAR_23--) {
                    if (*VAR_23 < '0' || *VAR_23 > '9') {
                        break;
                    }
                    VAR_26->id += (*VAR_23 - '0') * VAR_29;
                    VAR_29 *= 10;
                }

                VAR_26->key_id = VAR_30;

                FUNC_11(VAR_14);

                FUNC_3(VAR_3, VAR_14->connection->log, 0,
                               "hls: restore fragment '%*s' id=%uL, "
                               "duration=%.3f, frag=%uL, nfrags=%ui",
                               (size_t) (VAR_20 - VAR_19), VAR_19, VAR_26->id, VAR_26->duration,
                               VAR_15->frag, VAR_15->nfrags);
            }

            VAR_19 = VAR_22;
        }
    }

done:
    FUNC_0(VAR_16.fd);
}
