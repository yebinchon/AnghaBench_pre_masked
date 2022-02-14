
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* filter; int* mask; } ;
struct dmx_sct_filter_params {int flags; scalar_t__ timeout; TYPE_1__ filter; scalar_t__ pid; } ;
typedef int fparams ;
typedef int dvb_priv_t ;
typedef int demux_dev ;
typedef int buft ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int,int ,struct dmx_sct_filter_params*) ;
 int FUNC_3 (struct dmx_sct_filter_params*,int,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,unsigned char*,int) ;
 int FUNC_6 (char*,int,char*,int) ;

int FUNC_7(dvb_priv_t *VAR_7, int VAR_8, int VAR_9)
{


    char VAR_10[VAR_5];
    FUNC_6(VAR_10, sizeof(VAR_10), "/dev/dvb/adapter%d/demux0", VAR_8);

    struct dmx_sct_filter_params VAR_11;

    FUNC_3(&VAR_11, 0x00, sizeof(VAR_11));
    VAR_11.pid = 0;
    VAR_11.filter.filter[0] = 0x00;
    VAR_11.filter.mask[0] = 0xff;
    VAR_11.timeout = 0;
    VAR_11.flags = VAR_1 | VAR_0;

    int VAR_12;
    if ((VAR_12 = FUNC_4(VAR_10, VAR_4)) < 0) {
        FUNC_0(VAR_7, "Opening PAT DEMUX failed, error: %d", VAR_6);
        return -1;
    }

    if (FUNC_2(VAR_12, VAR_2, &VAR_11) < 0) {
        FUNC_0(VAR_7, "ioctl DMX_SET_FILTER failed, error: %d", VAR_6);
        FUNC_1(VAR_12);
        return -1;
    }

    int VAR_13;
    int VAR_14;
    unsigned char VAR_15[4096];
    unsigned char *VAR_16 = VAR_15;

    int VAR_17 = -1;

    bool VAR_18 = 0;
    while (!VAR_18) {
        if (((VAR_13 =
                  FUNC_5(VAR_12, VAR_16,
                       sizeof(VAR_15))) < 0) && VAR_6 == VAR_3)
            VAR_13 = FUNC_5(VAR_12, VAR_16, sizeof(VAR_15));
        if (VAR_13 < 0) {
            FUNC_0(VAR_7, "PAT: read_sections: read error: %d", VAR_6);
            FUNC_1(VAR_12);
            return -1;
        }

        VAR_14 = ((VAR_16[1] & 0x0f) << 8) | VAR_16[2];
        if (VAR_13 != VAR_14 + 3)
            continue;

        VAR_16 += 8;
        VAR_14 -= 8;


        VAR_18 = 1;
        while (VAR_14 > 0) {
            int VAR_19 = (VAR_16[0] << 8) | VAR_16[1];
            if (VAR_19 == VAR_9) {
                VAR_17 = ((VAR_16[2] & 0x1f) << 8) | VAR_16[3];
                VAR_14 = 0;
            }
            VAR_16 += 4;
            VAR_14 -= 4;
        }
    }
    FUNC_1(VAR_12);

    return VAR_17;
}
