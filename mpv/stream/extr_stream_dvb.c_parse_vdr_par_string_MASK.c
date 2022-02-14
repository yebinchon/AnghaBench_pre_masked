
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char pol; int is_dvb_x2; int stream_id; int mod; int inv; } ;
typedef TYPE_1__ dvb_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3, dvb_channel_t *VAR_4)
{


    if (VAR_3[0]) {
        const char *VAR_5 = &VAR_3[0];
        while (VAR_5 && *VAR_5) {
            switch (FUNC_0(*VAR_5)) {
            case 'H':
                VAR_4->pol = 'H';
                VAR_5++;
                break;
            case 'V':
                VAR_4->pol = 'V';
                VAR_5++;
                break;
            case 'S':
                VAR_5++;
                if (*VAR_5 == '1') {
                    VAR_4->is_dvb_x2 = 1;
                } else {
                    VAR_4->is_dvb_x2 = 0;
                }
                VAR_5++;
                break;
            case 'P':
                VAR_5++;
                char *VAR_6 = ((void*)0);
                VAR_2 = 0;
                int VAR_7 = FUNC_2(VAR_5, &VAR_6, 10);
                if (!VAR_2 && VAR_6 != VAR_5) {
                    VAR_4->stream_id = VAR_7;
                    VAR_5 = VAR_6;
                }
                break;
            case 'I':
                VAR_5++;
                if (*VAR_5 == '1') {
                    VAR_4->inv = VAR_1;
                } else {
                    VAR_4->inv = VAR_0;
                }
                VAR_5++;
                break;
            case 'M':
                VAR_5++;
                VAR_4->mod = FUNC_1(&VAR_5);
                break;
            default:
                VAR_5++;
            }
        }
    }
}
