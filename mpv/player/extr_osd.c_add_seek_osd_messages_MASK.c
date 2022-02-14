
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int add_osd_seek_info; int osd_show_pos; char* filename; TYPE_1__* opts; scalar_t__ video_out; } ;
struct TYPE_2__ {int term_osd; int osd_duration; int video_osd; } ;


 int FUNC_0 (double,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (struct MPContext*,int ) ;
 int FUNC_2 (struct MPContext*) ;
 double FUNC_3 (struct MPContext*,int) ;
 int FUNC_4 (struct MPContext*,int ,int ,int,int ,int ) ;
 int FUNC_5 (struct MPContext*,int ) ;
 scalar_t__ FUNC_6 (struct MPContext*,int,int ,char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct MPContext *VAR_5)
{
    if (VAR_5->add_osd_seek_info & VAR_1) {
        double VAR_6 = FUNC_3(VAR_5, 0);
        FUNC_4(VAR_5, VAR_0, 0, 1, 0, FUNC_0(VAR_6, 0, 1));
        FUNC_5(VAR_5, VAR_0);
    }
    if (VAR_5->add_osd_seek_info & VAR_4) {

        bool VAR_7 = VAR_5->video_out && VAR_5->opts->video_osd;
        if (VAR_7 && VAR_5->opts->term_osd != 1) {
            if (FUNC_6(VAR_5, 1, VAR_5->opts->osd_duration, ""))
                VAR_5->osd_show_pos = 1;
        }
    }
    if (VAR_5->add_osd_seek_info & VAR_2) {
        char *VAR_8 = FUNC_1(VAR_5, FUNC_2(VAR_5));
        FUNC_6(VAR_5, 1, VAR_5->opts->osd_duration,
                     "Chapter: %s", VAR_8);
        FUNC_7(VAR_8);
    }
    if (VAR_5->add_osd_seek_info & VAR_3) {
        if (VAR_5->filename) {
            FUNC_6(VAR_5, 1, VAR_5->opts->osd_duration, "%s",
                        VAR_5->filename);
        }
    }
    VAR_5->add_osd_seek_info = 0;
}
