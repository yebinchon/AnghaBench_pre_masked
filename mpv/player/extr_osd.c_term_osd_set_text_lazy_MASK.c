
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int term_osd_text; TYPE_1__* opts; scalar_t__ video_out; } ;
struct TYPE_2__ {int term_osd; int video_osd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct MPContext*,char const*) ;

__attribute__((used)) static void FUNC_2(struct MPContext *VAR_0, const char *VAR_1)
{
    bool VAR_2 = VAR_0->video_out && VAR_0->opts->video_osd;
    if ((VAR_2 && VAR_0->opts->term_osd != 1) || !VAR_1)
        VAR_1 = "";
    FUNC_0(VAR_0->term_osd_text);
    VAR_0->term_osd_text = FUNC_1(VAR_0, VAR_1);
}
