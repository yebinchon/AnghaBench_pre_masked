
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_cmd_ctx {int success; scalar_t__ seek_msg_osd; scalar_t__ seek_bar_osd; TYPE_3__* args; TYPE_1__* cmd; struct MPContext* mpctx; } ;
struct MPContext {int add_osd_seek_info; int playback_initialized; } ;
typedef enum seek_precision { ____Placeholder_seek_precision } seek_precision ;
struct TYPE_5__ {double d; int i; } ;
struct TYPE_6__ {TYPE_2__ v; } ;
struct TYPE_4__ {double scale; } ;


 double FUNC_0 (int ,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 double FUNC_1 (struct MPContext*,int) ;
 double FUNC_2 (struct MPContext*) ;
 double FUNC_3 (struct MPContext*) ;
 int FUNC_4 (struct MPContext*) ;
 int FUNC_5 (struct MPContext*,int ,double,int,int ) ;
 int FUNC_6 (struct MPContext*,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_11)
{
    struct mp_cmd_ctx *VAR_12 = VAR_11;
    struct MPContext *VAR_13 = VAR_12->mpctx;

    double VAR_14 = VAR_12->args[0].v.d * VAR_12->cmd->scale;
    int VAR_15 = VAR_12->args[1].v.i & 3;
    enum seek_precision VAR_16 = VAR_1;
    switch (((VAR_12->args[2].v.i | VAR_12->args[1].v.i) >> 3) & 3) {
    case 1: VAR_16 = VAR_5; break;
    case 2: VAR_16 = VAR_2; break;
    }
    if (!VAR_13->playback_initialized) {
        VAR_12->success = 0;
        return;
    }

    FUNC_4(VAR_13);
    switch (VAR_15) {
    case 0: {
        FUNC_5(VAR_13, VAR_6, VAR_14, VAR_16, VAR_4);
        FUNC_6(VAR_13, (VAR_14 > 0) ? VAR_7 : VAR_8);
        break;
    }
    case 1: {
        double VAR_17 = VAR_14 / 100.0;
        double VAR_18 = FUNC_1(VAR_13, 0);
        FUNC_5(VAR_13, VAR_3, VAR_17, VAR_16, VAR_4);
        FUNC_6(VAR_13, VAR_18 < VAR_17 ? VAR_7 : VAR_8);
        break;
    }
    case 2: {
        if (VAR_14 < 0) {

            double VAR_19 = FUNC_3(VAR_13);
            if (VAR_19 < 0) {
                VAR_12->success = 0;
                return;
            }
            VAR_14 = FUNC_0(0, VAR_19 + VAR_14);
        }
        FUNC_5(VAR_13, VAR_0, VAR_14, VAR_16, VAR_4);
        FUNC_6(VAR_13,
                         VAR_14 > FUNC_2(VAR_13) ? VAR_7 : VAR_8);
        break;
    }
    case 3: {
        FUNC_5(VAR_13, VAR_3,
                   FUNC_1(VAR_13, 0) + VAR_14 / 100.0,
                   VAR_16, VAR_4);
        FUNC_6(VAR_13, VAR_14 > 0 ? VAR_7 : VAR_8);
        break;
    }}
    if (VAR_12->seek_bar_osd)
        VAR_13->add_osd_seek_info |= VAR_9;
    if (VAR_12->seek_msg_osd)
        VAR_13->add_osd_seek_info |= VAR_10;
}
