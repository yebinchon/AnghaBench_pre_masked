
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dmx_pes_filter_params {int flags; int pes_type; int output; int input; int pid; } ;
typedef int dvb_priv_t ;
typedef int dmx_pes_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ,int,scalar_t__) ;
 int FUNC_1 (int *,char*,int ,int,int,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int,int ,...) ;

int FUNC_3(dvb_priv_t *VAR_6, int VAR_7, uint16_t VAR_8,
                    dmx_pes_type_t VAR_9)
{
    int VAR_10;
    struct dmx_pes_filter_params VAR_11;

    VAR_11.pid = VAR_8;
    VAR_11.input = VAR_1;
    VAR_11.output = VAR_2;
    VAR_11.pes_type = VAR_9;
    VAR_11.flags = VAR_0;

    {
        int VAR_12 = 256 * 1024;
        if (FUNC_2(VAR_7, VAR_3, VAR_12) < 0)
            FUNC_0(VAR_6, "ERROR IN DMX_SET_BUFFER_SIZE %i for fd %d: ERRNO: %d\n",
                   VAR_8, VAR_7, VAR_5);
    }

    VAR_5 = 0;
    if ((VAR_10 = FUNC_2(VAR_7, VAR_4, &VAR_11)) < 0) {
        FUNC_0(VAR_6, "ERROR IN SETTING DMX_FILTER %i for fd %d: ERRNO: %d\n",
               VAR_8, VAR_7, VAR_5);
        return 0;
    }

    FUNC_1(VAR_6, "SET PES FILTER ON PID %d to fd %d, RESULT: %d, ERRNO: %d\n",
               VAR_8, VAR_7, VAR_10, VAR_5);
    return 1;
}
