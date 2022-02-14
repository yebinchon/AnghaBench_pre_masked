
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sym ;
struct MPContext {TYPE_1__* opts; } ;
struct TYPE_2__ {char** osd_msg; int osd_fractions; char* osd_status_msg; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct MPContext*,char*,int) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (struct MPContext*) ;
 char* FUNC_5 (struct MPContext*,char*) ;
 int FUNC_6 (char**,int ,int) ;
 int FUNC_7 (char**,int ) ;
 int FUNC_8 (char**,char*,...) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;

__attribute__((used)) static void FUNC_11(char **VAR_0, struct MPContext *VAR_1, int VAR_2)
{
    FUNC_0(VAR_2 >= 0 && VAR_2 <= 3);
    if (VAR_2 == 0)
        return;
    char *VAR_3 = VAR_1->opts->osd_msg[VAR_2 - 1];

    if (VAR_3 && VAR_3[0]) {
        char *VAR_4 = FUNC_5(VAR_1, VAR_3);
        *VAR_0 = FUNC_10(*VAR_0, VAR_4);
        FUNC_9(VAR_4);
    } else if (VAR_2 >= 2) {
        bool VAR_5 = VAR_1->opts->osd_fractions;
        char VAR_6[10];
        FUNC_1(VAR_1, VAR_6, sizeof(VAR_6));
        FUNC_8(VAR_0, "%s ", VAR_6);
        char *VAR_7 = VAR_1->opts->osd_status_msg;
        if (VAR_7 && VAR_2 == 3) {
            char *VAR_8 = FUNC_5(VAR_1, VAR_7);
            *VAR_0 = FUNC_10(*VAR_0, VAR_8);
            FUNC_9(VAR_8);
        } else {
            FUNC_6(VAR_0, FUNC_3(VAR_1), VAR_5);
            if (VAR_2 == 3) {
                FUNC_8(VAR_0, " / ");
                FUNC_6(VAR_0, FUNC_4(VAR_1), VAR_5);
                FUNC_7(VAR_0, FUNC_2(VAR_1));
            }
        }
    }
}
