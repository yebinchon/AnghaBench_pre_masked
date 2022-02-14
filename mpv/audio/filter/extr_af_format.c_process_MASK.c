
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {TYPE_2__* opts; int in_pin; } ;
struct mp_frame {scalar_t__ type; struct mp_aframe* data; } ;
struct mp_filter {int * ppins; struct priv* priv; } ;
struct mp_aframe {int dummy; } ;
struct TYPE_3__ {scalar_t__ num_chmaps; int * chmaps; } ;
struct TYPE_4__ {scalar_t__ out_srate; TYPE_1__ out_channels; scalar_t__ fail; } ;


 int FUNC_0 (struct mp_filter*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mp_aframe*,int *) ;
 int FUNC_2 (struct mp_aframe*,scalar_t__) ;
 int FUNC_3 (struct mp_filter*) ;
 int FUNC_4 (struct mp_frame*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct mp_frame) ;
 struct mp_frame FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct mp_filter *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    if (!FUNC_5(VAR_2->ppins[1], VAR_3->in_pin))
        return;

    struct mp_frame VAR_4 = FUNC_7(VAR_3->in_pin);

    if (VAR_3->opts->fail) {
        FUNC_0(VAR_2, "Failing on purpose.\n");
        goto error;
    }

    if (VAR_4.type == VAR_1) {
        FUNC_6(VAR_2->ppins[1], VAR_4);
        return;
    }

    if (VAR_4.type != VAR_0) {
        FUNC_0(VAR_2, "audio frame expected\n");
        goto error;
    }

    struct mp_aframe *VAR_5 = VAR_4.data;

    if (VAR_3->opts->out_channels.num_chmaps > 0) {
        if (!FUNC_1(VAR_5, &VAR_3->opts->out_channels.chmaps[0])) {
            FUNC_0(VAR_2, "could not force output channels\n");
            goto error;
        }
    }

    if (VAR_3->opts->out_srate)
        FUNC_2(VAR_5, VAR_3->opts->out_srate);

    FUNC_6(VAR_2->ppins[1], VAR_4);
    return;

error:
    FUNC_4(&VAR_4);
    FUNC_3(VAR_2);
}
