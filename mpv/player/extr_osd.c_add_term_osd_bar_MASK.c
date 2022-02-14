
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {int term_osd_bar_chars; } ;
struct MPContext {struct MPOpts* opts; } ;
typedef int bstr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct MPContext*,int) ;
 int FUNC_5 (char**,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct MPContext *VAR_0, char **VAR_1, int VAR_2)
{
    struct MPOpts *VAR_3 = VAR_0->opts;

    if (VAR_2 < 5)
        return;

    int VAR_4 = FUNC_4(VAR_0, 0) * (VAR_2 - 3);
    VAR_4 = FUNC_1(VAR_4, 0, VAR_2 - 3);

    bstr VAR_5 = FUNC_2(VAR_3->term_osd_bar_chars);
    bstr VAR_6[5];
    for (int VAR_7 = 0; VAR_7 < 5; VAR_7++)
        VAR_6[VAR_7] = FUNC_3(VAR_5, &VAR_5);

    FUNC_5(VAR_1, "\r%.*s", FUNC_0(VAR_6[0]));
    for (int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
        FUNC_5(VAR_1, "%.*s", FUNC_0(VAR_6[1]));
    FUNC_5(VAR_1, "%.*s", FUNC_0(VAR_6[2]));
    for (int VAR_9 = 0; VAR_9 < VAR_2 - 3 - VAR_4; VAR_9++)
        FUNC_5(VAR_1, "%.*s", FUNC_0(VAR_6[3]));
    FUNC_5(VAR_1, "%.*s", FUNC_0(VAR_6[4]));
}
