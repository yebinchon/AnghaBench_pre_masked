
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {int dummy; } ;
struct demux_free_async_state {int dummy; } ;
struct MPContext {TYPE_1__* opts; } ;
struct TYPE_2__ {double demux_termination_timeout; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (int *,struct demux_free_async_state**,int,struct demux_free_async_state*) ;
 int FUNC_2 (struct MPContext*,char*) ;
 int FUNC_3 (struct demuxer*) ;
 int FUNC_4 (struct demuxer*) ;
 struct demux_free_async_state* FUNC_5 (struct demuxer*) ;
 scalar_t__ FUNC_6 (struct demux_free_async_state*) ;
 int FUNC_7 (struct demux_free_async_state*) ;
 int FUNC_8 (struct demuxer*,int ,struct MPContext*) ;
 int FUNC_9 (struct MPContext*) ;
 int FUNC_10 (struct MPContext*,double) ;
 double FUNC_11 () ;
 int FUNC_12 (struct demux_free_async_state**) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_13(struct MPContext *VAR_1,
                                    struct demuxer **VAR_2, int VAR_3)
{
    struct demux_free_async_state **VAR_4 = ((void*)0);
    int VAR_5 = 0;

    for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        struct demuxer *VAR_7 = VAR_2[VAR_6];

        if (!FUNC_4(VAR_7)) {

            FUNC_8(VAR_7, VAR_0, VAR_1);

            struct demux_free_async_state *VAR_8 = FUNC_5(VAR_7);
            if (VAR_8) {
                FUNC_1(((void*)0), VAR_4, VAR_5, VAR_8);
                VAR_7 = ((void*)0);
            }
        }

        FUNC_3(VAR_7);
    }

    if (!VAR_5)
        return;

    FUNC_0(VAR_1, "Terminating demuxers...\n");

    double VAR_9 = FUNC_11() + VAR_1->opts->demux_termination_timeout;
    bool VAR_10 = 0;
    while (VAR_5) {
        double VAR_11 = VAR_9 - FUNC_11();

        for (int VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
            struct demux_free_async_state *VAR_13 = VAR_4[VAR_12];
            if (FUNC_6(VAR_13)) {
                VAR_4[VAR_12] = VAR_4[VAR_5 - 1];
                VAR_5 -= 1;
                VAR_12--;
                goto repeat;
            } else if (VAR_11 < 0) {
                FUNC_7(VAR_13);
                if (!VAR_10)
                    FUNC_2(VAR_1, "Forcefully terminating demuxers...\n");
                VAR_10 = 1;
            }
        }

        if (VAR_11 >= 0)
            FUNC_10(VAR_1, VAR_11);
        FUNC_9(VAR_1);
    repeat:;
    }

    FUNC_12(VAR_4);

    FUNC_0(VAR_1, "Done terminating demuxers.\n");
}
