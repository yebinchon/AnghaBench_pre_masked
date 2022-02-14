
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subfn {int dummy; } ;
struct mpv_global {int dummy; } ;
struct MPOpts {int dummy; } ;


 int FUNC_0 (struct mpv_global*,struct MPOpts*,struct subfn**,int*,int ,char const*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int *,struct mpv_global*,char*) ;
 char* FUNC_4 (int *,struct mpv_global*,char*) ;
 char* FUNC_5 (struct subfn*,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct mpv_global *VAR_0, struct MPOpts *VAR_1,
                       struct subfn **VAR_2, int *VAR_3, const char *VAR_4,
                       char **VAR_5, char *VAR_6, int VAR_7)
{
    for (int VAR_8 = 0; VAR_5 && VAR_5[VAR_8]; VAR_8++) {
        char *VAR_9 = FUNC_4(((void*)0), VAR_0, VAR_5[VAR_8]);
        char *VAR_10 = FUNC_5(
            *VAR_2, FUNC_2(VAR_4),
            FUNC_1(VAR_9 ? VAR_9 : VAR_5[VAR_8]));
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, FUNC_1(VAR_10),
                             VAR_4, 0, VAR_7);
        FUNC_6(VAR_9);
    }


    char *VAR_11 = FUNC_3(((void*)0), VAR_0, VAR_6);
    if (VAR_11) {
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, FUNC_1(VAR_11),
                             VAR_4, 1, VAR_7);
    }
    FUNC_6(VAR_11);
}
