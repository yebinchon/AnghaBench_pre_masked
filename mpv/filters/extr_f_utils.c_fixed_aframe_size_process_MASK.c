
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_frame {scalar_t__ type; int * data; } ;
struct mp_filter {int * ppins; struct fixed_aframe_size_priv* priv; } ;
struct fixed_aframe_size_priv {scalar_t__ samples; scalar_t__ out_written; int * out; int pad_silence; int * in; int pool; } ;


 struct mp_frame FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct mp_filter*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,scalar_t__,int *,int ,int) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *,scalar_t__) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (struct mp_filter*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,struct mp_frame) ;
 struct mp_frame FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,struct mp_frame) ;

__attribute__((used)) static void FUNC_22(struct mp_filter *VAR_2)
{
    struct fixed_aframe_size_priv *VAR_3 = VAR_2->priv;

    if (!FUNC_16(VAR_2->ppins[1]))
        return;

    if (VAR_3->in && !FUNC_10(VAR_3->in))
        FUNC_3(&VAR_3->in);

    if (!VAR_3->in) {
        struct mp_frame VAR_4 = FUNC_18(VAR_2->ppins[0]);
        if (VAR_4.type == VAR_1) {
            if (!VAR_3->out) {
                FUNC_17(VAR_2->ppins[1], VAR_4);
                return;
            }
            FUNC_19(VAR_2->ppins[0]);
        } else if (VAR_4.type == VAR_0) {
            VAR_3->in = VAR_4.data;
            if (VAR_3->out && !FUNC_6(VAR_3->out, VAR_3->in)) {
                FUNC_21(VAR_2->ppins[0], VAR_4);
                VAR_3->in = ((void*)0);
            }
        } else if (VAR_4.type) {
            FUNC_2(VAR_2, "unsupported frame type\n");
            FUNC_15(VAR_2);
            return;
        } else {
            return;
        }
    }

    if (VAR_3->in) {
        if (!VAR_3->out) {
            VAR_3->out = FUNC_9();
            FUNC_5(VAR_3->out, VAR_3->in);
            FUNC_7(VAR_3->out, VAR_3->in);
            if (FUNC_11(VAR_3->pool, VAR_3->out, VAR_3->samples) < 0) {
                FUNC_15(VAR_2);
                return;
            }
            VAR_3->out_written = 0;
        }
        int VAR_5 = FUNC_10(VAR_3->in);
        int VAR_6 = FUNC_1(VAR_5, VAR_3->samples - VAR_3->out_written);
        if (!FUNC_8(VAR_3->out, VAR_3->out_written, VAR_3->in, 0, VAR_6))
            FUNC_4(0);
        FUNC_14(VAR_3->in, VAR_6);
        VAR_3->out_written += VAR_6;
    }


    if ((!VAR_3->in && VAR_3->out_written) || VAR_3->out_written == VAR_3->samples) {
        int VAR_7 = VAR_3->samples - VAR_3->out_written;
        FUNC_4(VAR_7 >= 0);
        if (VAR_7) {
            FUNC_12(VAR_3->out, VAR_3->out_written, VAR_7);
            if (!VAR_3->pad_silence)
                FUNC_13(VAR_3->out, VAR_3->out_written);
        }
        FUNC_17(VAR_2->ppins[1], FUNC_0(VAR_0, VAR_3->out));
        VAR_3->out = ((void*)0);
        VAR_3->out_written = 0;
    } else {
        FUNC_20(VAR_2->ppins[0]);
    }
}
