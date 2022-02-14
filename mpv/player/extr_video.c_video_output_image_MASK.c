
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vo_chain {scalar_t__ is_coverart; TYPE_2__* filter; } ;
struct mp_image {double pts; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct MPContext {scalar_t__ video_status; double play_dir; scalar_t__ max_frames; double hrseek_pts; int hrseek_backstep; double playback_pts; struct mp_image* saved_frame; scalar_t__ hrseek_lastframe; int video_out; scalar_t__ hrseek_active; struct vo_chain* vo_chain; } ;
struct TYPE_4__ {TYPE_1__* f; scalar_t__ got_output_eof; } ;
struct TYPE_3__ {int * pins; } ;


 int FUNC_0 (struct MPContext*,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 int FUNC_1 (struct MPContext*,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct MPContext*,struct mp_image*) ;
 double FUNC_3 (struct MPContext*) ;
 scalar_t__ FUNC_4 (struct MPContext*,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct mp_frame*) ;
 int FUNC_7 (struct mp_image**,struct mp_image*) ;
 struct mp_frame FUNC_8 (int ) ;
 int FUNC_9 (int ,struct mp_frame) ;
 scalar_t__ FUNC_10 (struct MPContext*) ;
 int FUNC_11 (struct mp_image*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct MPContext *VAR_10)
{
    struct vo_chain *VAR_11 = VAR_10->vo_chain;
    bool VAR_12 = VAR_10->hrseek_active && VAR_10->video_status == VAR_4;

    if (VAR_11->is_coverart) {
        if (FUNC_12(VAR_10->video_out))
            return VAR_5;
        VAR_12 = 0;
    }

    if (FUNC_4(VAR_10, 0))
        return VAR_7;


    int VAR_13 = VAR_8;
    if (FUNC_10(VAR_10)) {

        struct mp_image *VAR_14 = ((void*)0);
        struct mp_frame VAR_15 = FUNC_8(VAR_11->filter->f->pins[1]);
        if (VAR_15.type == VAR_1) {
            VAR_13 = VAR_11->filter->got_output_eof ? VAR_5 : VAR_9;
        } else if (VAR_15.type == VAR_0) {
            VAR_13 = VAR_5;
        } else if (VAR_15.type == VAR_2) {
            VAR_14 = VAR_15.data;
        } else {
            FUNC_0(VAR_10, "unexpected frame type %s\n",
                   FUNC_5(VAR_15.type));
            FUNC_6(&VAR_15);
            return VAR_6;
        }
        if (VAR_14) {
            double VAR_16 = FUNC_3(VAR_10);
            if (VAR_16 != VAR_3)
                VAR_16 *= VAR_10->play_dir;
            if ((VAR_16 != VAR_3 && VAR_14->pts >= VAR_16) ||
                VAR_10->max_frames == 0)
            {
                FUNC_9(VAR_11->filter->f->pins[1], VAR_15);
                VAR_14 = ((void*)0);
                VAR_13 = VAR_5;
            } else if (VAR_12 && VAR_10->hrseek_lastframe) {
                FUNC_7(&VAR_10->saved_frame, VAR_14);
            } else if (VAR_12 && VAR_14->pts < VAR_10->hrseek_pts - .005) {

                if (VAR_10->hrseek_backstep)
                    FUNC_7(&VAR_10->saved_frame, VAR_14);
            } else if (VAR_10->video_status == VAR_4 &&
                       VAR_10->playback_pts != VAR_3 &&
                       VAR_14->pts < VAR_10->playback_pts && !VAR_11->is_coverart)
            {

            } else {
                if (VAR_12 && VAR_10->hrseek_backstep) {
                    if (VAR_10->saved_frame) {
                        FUNC_2(VAR_10, VAR_10->saved_frame);
                        VAR_10->saved_frame = ((void*)0);
                    } else {
                        FUNC_1(VAR_10, "Backstep failed.\n");
                    }
                    VAR_10->hrseek_backstep = 0;
                }
                FUNC_2(VAR_10, VAR_14);
                VAR_14 = ((void*)0);
            }
            FUNC_11(VAR_14);
        }
    }


    if (VAR_13 <= 0 && VAR_12 && VAR_10->hrseek_lastframe && VAR_10->saved_frame) {
        FUNC_2(VAR_10, VAR_10->saved_frame);
        VAR_10->saved_frame = ((void*)0);
        VAR_13 = VAR_8;
    }

    return FUNC_4(VAR_10, VAR_13 <= 0) ? VAR_7 : VAR_13;
}
