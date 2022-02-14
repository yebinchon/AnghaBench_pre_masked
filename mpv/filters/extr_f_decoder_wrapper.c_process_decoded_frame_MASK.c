
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {scalar_t__ start_pts; double end; double start; int header; scalar_t__ new_segment; } ;
struct mp_image {double pts; int dts; int a53_cc; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct mp_aframe {double pts; int dts; int a53_cc; } ;
struct demux_packet {double pts; int dts; } ;


 int FUNC_0 (struct priv*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct priv*,struct mp_image*) ;
 int FUNC_3 (int ,struct demux_packet*) ;
 int FUNC_4 (struct mp_image*,scalar_t__,scalar_t__) ;
 double FUNC_5 (struct mp_image*) ;
 scalar_t__ FUNC_6 (struct mp_image*) ;
 int FUNC_7 (struct mp_frame*) ;
 struct demux_packet* FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(struct priv *VAR_4, struct mp_frame *VAR_5)
{
    if (VAR_5->type == VAR_1) {

        if (VAR_4->new_segment)
            FUNC_7(VAR_5);
        return 1;
    }

    bool VAR_6 = 0;

    if (VAR_5->type == VAR_2) {
        struct mp_image *VAR_7 = VAR_5->data;

        FUNC_2(VAR_4, VAR_7);

        struct demux_packet *VAR_8 = FUNC_8(VAR_7->a53_cc);
        if (VAR_8) {
            FUNC_1(&VAR_7->a53_cc);
            VAR_8->pts = VAR_7->pts;
            VAR_8->dts = VAR_7->dts;
            FUNC_3(VAR_4->header, VAR_8);
        }


        if (VAR_7->pts == VAR_3 || VAR_7->pts >= VAR_4->start_pts)
            VAR_4->start_pts = VAR_3;

        if (VAR_7->pts != VAR_3) {
            VAR_6 = VAR_4->end != VAR_3 && VAR_7->pts >= VAR_4->end;
            if ((VAR_4->start != VAR_3 && VAR_7->pts < VAR_4->start) ||
                VAR_6)
            {
                FUNC_7(VAR_5);
                goto done;
            }
        }
    } else if (VAR_5->type == VAR_0) {
        struct mp_aframe *VAR_9 = VAR_5->data;

        FUNC_4(VAR_9, VAR_4->start, VAR_4->end);
        double VAR_10 = FUNC_5(VAR_9);
        if (VAR_10 != VAR_3 && VAR_4->start != VAR_3)
            VAR_6 = VAR_10 >= VAR_4->end;

        if (FUNC_6(VAR_9) == 0) {
            FUNC_7(VAR_5);
            goto done;
        }
    } else {
        FUNC_0(VAR_4, "unknown frame type from decoder\n");
    }

done:
    return VAR_6;
}
