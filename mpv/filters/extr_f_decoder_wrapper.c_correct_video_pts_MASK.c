
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {double play_dir; int fps; } ;
struct priv {int has_broken_decoded_pts; double first_packet_pdts; double pts; TYPE_2__ public; TYPE_1__* opt_cache; } ;
struct mp_image {double pts; } ;
struct MPOpts {scalar_t__ correct_pts; } ;
struct TYPE_3__ {struct MPOpts* opts; } ;


 double VAR_0 ;
 int FUNC_0 (struct priv*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_1, struct mp_image *VAR_2)
{
    struct MPOpts *VAR_3 = VAR_1->opt_cache->opts;

    VAR_2->pts *= VAR_1->public.play_dir;

    if (!VAR_3->correct_pts || VAR_2->pts == VAR_0) {
        double VAR_4 = VAR_1->public.fps > 0 ? VAR_1->public.fps : 25;

        if (VAR_3->correct_pts) {
            if (VAR_1->has_broken_decoded_pts <= 1) {
                FUNC_0(VAR_1, "No video PTS! Making something up. Using "
                        "%f FPS.\n", VAR_4);
                if (VAR_1->has_broken_decoded_pts == 1)
                    FUNC_0(VAR_1, "Ignoring further missing PTS warnings.\n");
                VAR_1->has_broken_decoded_pts++;
            }
        }

        double VAR_5 = 1.0f / VAR_4;
        double VAR_6 = VAR_1->first_packet_pdts;
        VAR_2->pts = VAR_1->pts;
        if (VAR_2->pts == VAR_0) {
            VAR_2->pts = VAR_6 == VAR_0 ? 0 : VAR_6;
        } else {
            VAR_2->pts += VAR_5;
        }
    }

    VAR_1->pts = VAR_2->pts;
}
