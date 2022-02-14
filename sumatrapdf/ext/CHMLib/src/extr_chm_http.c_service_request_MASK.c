
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmFile {int dummy; } ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,struct chmFile*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int * FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (int,int ,int ) ;

__attribute__((used)) static void FUNC_11(int VAR_2, struct chmFile *VAR_3)
{
    char VAR_4[4096];
    char VAR_5[4096];
    char *VAR_6;
    FILE *VAR_7 = FUNC_3(VAR_2, "w+b");
    if (VAR_7 == ((void*)0))
    {
        FUNC_6("chm_http: failed to fdopen client stream");
        FUNC_10(VAR_2, VAR_1, FUNC_7(VAR_1));
        FUNC_0(VAR_2);
        return;
    }

    FUNC_4(VAR_4, 4096, VAR_7);
    while (1)
    {
        if (FUNC_4(VAR_5, 4096, VAR_7) == ((void*)0))
            break;
        if (VAR_5[0] == '\r' || VAR_5[0] == '\n' || VAR_5[0] == '\0')
            break;
    }
    VAR_6 = FUNC_9(VAR_4, ' ');
    if (FUNC_8(VAR_6+1, "HTTP", 4) == 0)
        *VAR_6 = '\0';
    if (FUNC_8(VAR_4, "GET ", 4) == 0)
        FUNC_1(VAR_7, VAR_4+4, VAR_3);
    else
    {
        FUNC_5(VAR_7, VAR_0);
        FUNC_2(VAR_7);
        return;
    }
}
