
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dst ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*,int*,int ) ;
 int FUNC_1 (int,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    char VAR_7[] = "http://www.winehq.org/%27/ /./>/#>  ";
    char VAR_8[64];
    DWORD VAR_9;

    VAR_9 = sizeof(VAR_8);
    FUNC_0(VAR_7, VAR_8, &VAR_9, 0);
    FUNC_1(FUNC_2(VAR_8, "http://www.winehq.org/%27/%20/%3E/#>") == 0, "Got \"%s\"\n", VAR_8);


    VAR_9 = sizeof(VAR_8);
    FUNC_0(VAR_7, VAR_8, &VAR_9, VAR_0);
    FUNC_1(FUNC_2(VAR_8, "http://www.winehq.org/%27/%20/%3E/#>") == 0, "Got \"%s\"\n", VAR_8);


    VAR_9 = sizeof(VAR_8);
    FUNC_0(VAR_7, VAR_8, &VAR_9, VAR_4);
    FUNC_1(FUNC_2(VAR_8, "http://www.winehq.org/%27/%20/%3E/#>") == 0, "Got \"%s\"\n", VAR_8);

    VAR_9 = sizeof(VAR_8);
    FUNC_0(VAR_7, VAR_8, &VAR_9, VAR_1);
    FUNC_1(FUNC_2(VAR_8, "http://www.winehq.org/'/%20/%3E/#>") == 0, "Got \"%s\"\n", VAR_8);

    VAR_9 = sizeof(VAR_8);
    FUNC_0(VAR_7, VAR_8, &VAR_9, VAR_2);
    FUNC_1(FUNC_2(VAR_8, "http://www.winehq.org/%2527/%20/%3E/#>") == 0, "Got \"%s\"\n", VAR_8);

    VAR_9 = sizeof(VAR_8);
    FUNC_0(VAR_7, VAR_8, &VAR_9, VAR_3);
    FUNC_1(FUNC_2(VAR_8, "http://www.winehq.org/%27/%20/>/#>") == 0, "Got \"%s\"\n", VAR_8);

    VAR_9 = sizeof(VAR_8);
    FUNC_0(VAR_7, VAR_8, &VAR_9, VAR_5);
    FUNC_1(FUNC_2(VAR_8, "http://www.winehq.org/%27/ />/#>") == 0, "Got \"%s\"\n", VAR_8);

    VAR_9 = sizeof(VAR_8);
    FUNC_0(VAR_7, VAR_8, &VAR_9, VAR_6);
    FUNC_1(FUNC_2(VAR_8, "http://www.winehq.org/%27/%20/./%3E/#>") == 0, "Got \"%s\"\n", VAR_8);
}
