
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {char* term_osd_status; } ;


 int FUNC_0 (char*,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct MPContext*,char const*) ;
 int FUNC_4 (int*,int*) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_0, const char *VAR_1)
{
    FUNC_2(VAR_0->term_osd_status);
    VAR_0->term_osd_status = FUNC_3(VAR_0, VAR_1);

    int VAR_2 = 80, VAR_3 = 24;
    FUNC_4(&VAR_2, &VAR_3);
    if (FUNC_1(VAR_0->term_osd_status) > VAR_2 && !FUNC_0(VAR_0->term_osd_status, '\n'))
        VAR_0->term_osd_status[VAR_2] = '\0';
}
