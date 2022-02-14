
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int mconfig; TYPE_1__* opts; } ;
struct TYPE_2__ {int position_resume; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (struct MPContext*,char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct MPContext*,char*,int ,int ) ;
 int FUNC_6 (char*) ;

void FUNC_7(struct MPContext *VAR_2, const char *VAR_3)
{
    if (!VAR_2->opts->position_resume)
        return;
    char *VAR_4 = FUNC_2(VAR_2, VAR_3);
    if (VAR_4 && FUNC_3(VAR_4)) {

        FUNC_1(VAR_2->mconfig, "start");
        FUNC_0(VAR_2, "Resuming playback. This behavior can "
               "be disabled with --no-resume-playback.\n");
        FUNC_5(VAR_2, VAR_4, VAR_1, VAR_0);
        FUNC_6(VAR_4);
    }
    FUNC_4(VAR_4);
}
