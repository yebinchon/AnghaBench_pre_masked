
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int osd; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int*,int*) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*,int,...) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *,char*) ;

__attribute__((used)) static char *FUNC_8(struct MPContext *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;
    FUNC_2(VAR_0->osd, &VAR_3, &VAR_4);
    int VAR_5 = VAR_3 / FUNC_0(VAR_4, 1) - 1;

    if (!VAR_1 || VAR_5 < 5)
        return VAR_1;

    int VAR_6 = FUNC_1(VAR_1);
    if (VAR_6 <= VAR_5)
        return VAR_1;

    char *VAR_7 = FUNC_7(((void*)0), "");

    int VAR_8 = FUNC_0(VAR_2 - VAR_5 / 2, 0);
    if (VAR_8 == 1)
        VAR_8 = 0;
    int VAR_9 = VAR_8 > 0;

    int VAR_10 = VAR_5 - VAR_9 - 1;
    int VAR_11 = VAR_6 - VAR_8 > VAR_10;
    if (!VAR_11)
        VAR_8 = VAR_6 - VAR_10;

    if (VAR_9) {
        VAR_7 = FUNC_5(VAR_7, "\342\206\221 (%d hidden items)\n",
                                            VAR_8);
    }

    char *VAR_12 = FUNC_3(VAR_1, VAR_8);
    if (!VAR_12) {
        FUNC_6(VAR_7);
        return VAR_1;
    }

    int VAR_13 = VAR_5 - VAR_9 - VAR_11;
    char *VAR_14 = FUNC_3(VAR_12, VAR_13);
    VAR_7 = FUNC_5(VAR_7, "%.*s",
                            (int)(VAR_14 ? VAR_14 - VAR_12 : FUNC_4(VAR_12)), VAR_12);
    if (VAR_11) {
        VAR_7 = FUNC_5(VAR_7, "\342\206\223 (%d hidden items)\n",
                                            VAR_6 - VAR_8 - VAR_13 + 1);
    }

    FUNC_6(VAR_1);
    return VAR_7;
}
