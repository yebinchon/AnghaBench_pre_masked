
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int dummy; } ;


 char* FUNC_0 (struct MPContext*,int) ;
 int FUNC_1 (struct MPContext*) ;
 char* FUNC_2 (int *,char*,int,...) ;
 char* FUNC_3 (int *,char*) ;

char *FUNC_4(struct MPContext *VAR_0, int VAR_1)
{
    char *VAR_2 = FUNC_0(VAR_0, VAR_1);
    char *VAR_3 = ((void*)0);
    if (VAR_2) {
        VAR_3 = FUNC_2(((void*)0), "(%d) %s", VAR_1 + 1, VAR_2);
    } else if (VAR_1 < -1) {
        VAR_3 = FUNC_3(((void*)0), "(unavailable)");
    } else {
        int VAR_4 = FUNC_1(VAR_0);
        if (VAR_4 <= 0)
            VAR_3 = FUNC_2(((void*)0), "(%d)", VAR_1 + 1);
        else
            VAR_3 = FUNC_2(((void*)0), "(%d) of %d", VAR_1 + 1,
                                    VAR_4);
    }
    return VAR_3;
}
