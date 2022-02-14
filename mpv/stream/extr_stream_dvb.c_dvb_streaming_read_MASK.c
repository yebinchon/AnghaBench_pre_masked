
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pollfd {int fd; int events; } ;
struct TYPE_8__ {scalar_t__ priv; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {int retry; int dvr_fd; } ;
typedef TYPE_2__ dvb_state_t ;
struct TYPE_10__ {TYPE_2__* state; } ;
typedef TYPE_3__ dvb_priv_t ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct pollfd*,int,int) ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static int FUNC_5(stream_t *VAR_3, void *VAR_4, int VAR_5)
{
    struct pollfd VAR_6[1];
    int VAR_7 = 0, VAR_8, VAR_9, VAR_10;
    dvb_priv_t *VAR_11 = (dvb_priv_t *) VAR_3->priv;
    dvb_state_t *VAR_12 = VAR_11->state;

    FUNC_1(VAR_3, "dvb_streaming_read(%d)\n", VAR_5);

    VAR_8 = VAR_12->retry;
    VAR_10 = VAR_12->dvr_fd;
    while (VAR_7 < VAR_5) {
        VAR_9 = FUNC_4(VAR_10, (char *)VAR_4 + VAR_7, (VAR_5 - VAR_7));
        if (VAR_9 <= 0) {
            if (VAR_7 || VAR_8 == 0)
                break;
            VAR_8 --;
            VAR_6[0].fd = VAR_10;
            VAR_6[0].events = VAR_0 | VAR_1;
            if (FUNC_3(VAR_6, 1, 2000) <= 0) {
                FUNC_0(VAR_3, "dvb_streaming_read, failed with "
                        "errno %d when reading %d bytes\n", VAR_2, VAR_5 - VAR_7);
                VAR_2 = 0;
                break;
            }
            continue;
        }
        VAR_7 += VAR_9;
        FUNC_1(VAR_3, "ret (%d) bytes\n", VAR_7);
    }

    if (!VAR_7)
        FUNC_0(VAR_3, "dvb_streaming_read, return 0 bytes\n");


    FUNC_2(VAR_3);

    return VAR_7;
}
