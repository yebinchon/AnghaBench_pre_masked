
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_3__ {int pids_cnt; int* pids; } ;
typedef TYPE_1__ dvb_channel_t ;


 int VAR_0 ;
 char* FUNC_0 (char*,char const*,char**) ;
 int FUNC_1 (struct mp_log*,char*) ;
 scalar_t__ FUNC_2 (char*,char*,int*,int*) ;

__attribute__((used)) static bool FUNC_3(struct mp_log *VAR_1, char *VAR_2,
                             dvb_channel_t *VAR_3)
{
    if (VAR_2[0]) {
        int VAR_4 = 0;







        const char *VAR_5 = "+,;";
        char *VAR_6;
        char *VAR_7 = ((void*)0);
        VAR_6 = FUNC_0(VAR_2, VAR_5, &VAR_7);
        while (VAR_6 != ((void*)0)) {
            if (VAR_3->pids_cnt >= VAR_0 - 1) {
                FUNC_1(VAR_1, "Maximum number of PIDs for one channel "
                                "reached, ignoring further ones!\n");
                return VAR_4 > 0;
            }
            int VAR_8 = 0;
            int VAR_9 = 0;
            VAR_4 += FUNC_2(VAR_6, "%d%n", &VAR_9, &VAR_8);
            if (VAR_8 > 0) {
                VAR_3->pids[VAR_3->pids_cnt] = VAR_9;
                VAR_3->pids_cnt++;
            }
            VAR_6 = FUNC_0(((void*)0), VAR_5, &VAR_7);
        }
        if (VAR_4 > 0)
            return 1;
    }
    return 0;
}
