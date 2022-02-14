
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {char* term_osd_subs; char* term_osd_text; char* term_osd_status; char* term_osd_contents; int statusline; int global; TYPE_1__* opts; } ;
struct TYPE_2__ {int use_terminal; } ;


 int VAR_0 ;
 char* FUNC_0 (struct MPContext*,char**,int) ;
 int FUNC_1 (int ,int ,char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_1)
{
    int VAR_2 = 0;
    char *VAR_3[3] = {0};

    if (!VAR_1->opts->use_terminal)
        return;

    if (VAR_1->term_osd_subs && VAR_1->term_osd_subs[0])
        VAR_3[VAR_2++] = VAR_1->term_osd_subs;
    if (VAR_1->term_osd_text && VAR_1->term_osd_text[0])
        VAR_3[VAR_2++] = VAR_1->term_osd_text;
    if (VAR_1->term_osd_status && VAR_1->term_osd_status[0])
        VAR_3[VAR_2++] = VAR_1->term_osd_status;

    char *VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);

    if (FUNC_3(VAR_1->term_osd_contents, VAR_4) == 0 &&
        FUNC_2(VAR_1->global))
    {
        FUNC_4(VAR_4);
    } else {
        FUNC_4(VAR_1->term_osd_contents);
        VAR_1->term_osd_contents = VAR_4;
        FUNC_1(VAR_1->statusline, VAR_0, "%s", VAR_4);
    }
}
