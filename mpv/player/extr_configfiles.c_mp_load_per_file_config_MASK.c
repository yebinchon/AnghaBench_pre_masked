
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {scalar_t__ use_filedir_conf; } ;
struct MPContext {char* filename; int global; struct MPOpts* opts; } ;
typedef int cfg ;
typedef int bstr ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *,int ,char*) ;
 char* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct MPContext*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct MPContext *VAR_2)
{
    struct MPOpts *VAR_3 = VAR_2->opts;
    char *VAR_4;
    char VAR_5[512];
    const char *VAR_6 = VAR_2->filename;

    if (VAR_3->use_filedir_conf) {
        if (FUNC_6(VAR_5, sizeof(VAR_5), "%s.conf", VAR_6) >= sizeof(VAR_5)) {
            FUNC_0(VAR_2, "Filename is too long, can not load file or "
                              "directory specific config files\n");
            return;
        }

        char *VAR_7 = FUNC_2(VAR_5);

        bstr VAR_8 = FUNC_3(VAR_5);
        char *VAR_9 = FUNC_5(((void*)0), VAR_8, FUNC_1("mpv.conf"));
        FUNC_8(VAR_2, VAR_9, VAR_0, VAR_1);
        FUNC_7(VAR_9);

        if (FUNC_8(VAR_2, VAR_5, VAR_0, VAR_1))
            return;

        if ((VAR_4 = FUNC_4(((void*)0), VAR_2->global, VAR_7))) {
            FUNC_8(VAR_2, VAR_4, VAR_0, VAR_1);

            FUNC_7(VAR_4);
        }
    }
}
