
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {scalar_t__ pts; scalar_t__ pkt_duration; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct mp_filter {int * ppins; struct frame_duration_priv* priv; } ;
struct frame_duration_priv {struct mp_image* buffered; } ;


 struct mp_frame FUNC_0 (scalar_t__,struct mp_image*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct mp_frame) ;
 struct mp_frame FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mp_filter *VAR_3)
{
    struct frame_duration_priv *VAR_4 = VAR_3->priv;

    if (!FUNC_1(VAR_3->ppins[1], VAR_3->ppins[0]))
        return;

    struct mp_frame VAR_5 = FUNC_3(VAR_3->ppins[0]);

    if (VAR_5.type == VAR_0 && VAR_4->buffered) {
        FUNC_2(VAR_3->ppins[1], FUNC_0(VAR_1, VAR_4->buffered));
        VAR_4->buffered = ((void*)0);

        FUNC_4(VAR_3->ppins[0]);
    } else if (VAR_5.type == VAR_1) {
        struct mp_image *VAR_6 = VAR_5.data;
        if (VAR_4->buffered) {
            if (VAR_4->buffered->pts != VAR_2 &&
                VAR_6->pts != VAR_2 &&
                VAR_6->pts >= VAR_4->buffered->pts)
            {
                VAR_4->buffered->pkt_duration = VAR_6->pts - VAR_4->buffered->pts;
            }
            FUNC_2(VAR_3->ppins[1], FUNC_0(VAR_1, VAR_4->buffered));
        } else {
            FUNC_5(VAR_3->ppins[0]);
        }
        VAR_4->buffered = VAR_6;
    } else {
        FUNC_2(VAR_3->ppins[1], VAR_5);
    }
}
