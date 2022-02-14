
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int is_cli; scalar_t__ stop_play; int quit_custom_rc; scalar_t__ has_quit_custom_rc; scalar_t__ files_errored; scalar_t__ files_broken; scalar_t__ files_played; } ;


 int FUNC_0 (struct MPContext*,char*,char const*) ;
 scalar_t__ VAR_0 ;
 struct MPContext* FUNC_1 () ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*,char**) ;
 int FUNC_4 (struct MPContext*) ;

int FUNC_5(int VAR_1, char *VAR_2[])
{
    struct MPContext *VAR_3 = FUNC_1();
    if (!VAR_3)
        return 1;

    VAR_3->is_cli = 1;

    char **VAR_4 = VAR_2 && VAR_2[0] ? VAR_2 + 1 : ((void*)0);
    int VAR_5 = FUNC_3(VAR_3, VAR_4);
    if (VAR_5 == 0)
        FUNC_4(VAR_3);

    int VAR_6 = 0;
    const char *VAR_7 = ((void*)0);
    if (VAR_5 < 0) {
        VAR_7 = "Fatal error";
        VAR_6 = 1;
    } else if (VAR_5 > 0) {

    } else if (VAR_3->stop_play == VAR_0) {
        VAR_7 = "Quit";
    } else if (VAR_3->files_played) {
        if (VAR_3->files_errored || VAR_3->files_broken) {
            VAR_7 = "Some errors happened";
            VAR_6 = 3;
        } else {
            VAR_7 = "End of file";
        }
    } else if (VAR_3->files_broken && !VAR_3->files_errored) {
        VAR_7 = "Errors when loading file";
        VAR_6 = 2;
    } else if (VAR_3->files_errored) {
        VAR_7 = "Interrupted by error";
        VAR_6 = 2;
    } else {
        VAR_7 = "No files played";
    }

    if (VAR_7)
        FUNC_0(VAR_3, "\nExiting... (%s)\n", VAR_7);
    if (VAR_3->has_quit_custom_rc)
        VAR_6 = VAR_3->quit_custom_rc;

    FUNC_2(VAR_3);
    return VAR_6;
}
