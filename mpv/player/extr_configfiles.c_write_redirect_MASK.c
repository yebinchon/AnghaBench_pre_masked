
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (struct MPContext*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct MPContext*,int *,char*) ;

__attribute__((used)) static void FUNC_6(struct MPContext *VAR_0, char *VAR_1)
{
    char *VAR_2 = FUNC_3(VAR_0, VAR_1);
    if (VAR_2) {
        FILE *VAR_3 = FUNC_1(VAR_2, "wb");
        if (VAR_3) {
            FUNC_2(VAR_3, "# redirect entry\n");
            FUNC_5(VAR_0, VAR_3, VAR_1);
            FUNC_0(VAR_3);
        }
        FUNC_4(VAR_2);
    }
}
