
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct TYPE_3__ {int thread_count; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mp_log*,char*,int) ;
 int FUNC_3 (struct mp_log*,char*) ;

void FUNC_4(struct mp_log *VAR_0, AVCodecContext *VAR_1, int VAR_2)
{
    if (VAR_2 == 0) {
        VAR_2 = FUNC_1();
        if (VAR_2 < 1) {
            FUNC_3(VAR_0, "Could not determine thread count to use, defaulting to 1.\n");
            VAR_2 = 1;
        } else {
            FUNC_2(VAR_0, "Detected %d logical cores.\n", VAR_2);
            if (VAR_2 > 1)
                VAR_2 += 1;
        }


        VAR_2 = FUNC_0(VAR_2, 16);
    }
    FUNC_2(VAR_0, "Requesting %d threads for decoding.\n", VAR_2);
    VAR_1->thread_count = VAR_2;
}
