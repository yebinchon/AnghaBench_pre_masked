
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {int length; } ;
struct chmFile {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (struct chmFile*,char const*,struct chmUnitInfo*) ;
 scalar_t__ FUNC_1 (struct chmFile*,struct chmUnitInfo*,unsigned char*,int,int) ;
 int FUNC_2 (int *,struct chmFile*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (unsigned char*,int,int,int *) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static void FUNC_9(FILE *VAR_2, const char *VAR_3, struct chmFile *VAR_4)
{
    struct chmUnitInfo VAR_5;
    const char *VAR_6;
    unsigned char VAR_7[65536];
    int VAR_8, VAR_9;

    if (FUNC_7(VAR_3,"/") == 0)
    {
        FUNC_2(VAR_2,VAR_4);
        FUNC_3(VAR_2);
        return;
    }

    if (FUNC_0(VAR_4, VAR_3, &VAR_5) != VAR_0)
    {
        FUNC_4(VAR_2, VAR_1);
        FUNC_3(VAR_2);
        return;
    }


    VAR_6 = FUNC_8(VAR_3, '.');
    FUNC_4(VAR_2, "HTTP/1.1 200 OK\r\nConnection: close\r\nContent-Length: %d\r\nContent-Type: %s\r\n\r\n",
            (int)VAR_5.length,
            FUNC_6(VAR_6));


    VAR_8 = 65536;
    VAR_9 = 0;
    while (VAR_9 < VAR_5.length)
    {
        if ((VAR_5.length - VAR_9) < 65536)
            VAR_8 = VAR_5.length - VAR_9;
        else
            VAR_8 = 65536;
        VAR_8 = (int)FUNC_1(VAR_4, &VAR_5, VAR_7, VAR_9, VAR_8);
        VAR_9 += VAR_8;
        FUNC_5(VAR_7, 1, VAR_8, VAR_2);
    }
    FUNC_3(VAR_2);
}
