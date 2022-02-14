
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windir ;
typedef int save_TMP ;
typedef int buf ;
typedef int WCHAR ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    char VAR_1[VAR_0];
    char VAR_2[VAR_0];
    char VAR_3[VAR_0];
    WCHAR VAR_4[VAR_0];

    if (!FUNC_1("TMP", VAR_1, sizeof(VAR_1))) VAR_1[0] = 0;


    FUNC_11("TMP=%s\n", VAR_1);
    if (VAR_1[0])
    {
        FUNC_7(VAR_3,VAR_1);
        if (VAR_3[FUNC_8(VAR_3)-1]!='\\')
            FUNC_6(VAR_3,"\\");
        FUNC_9(VAR_3);
        FUNC_10(VAR_3);
    }


    FUNC_2(VAR_2, sizeof(VAR_2));
    FUNC_5("TMP", VAR_2);
    FUNC_1("TMP", VAR_3, sizeof(VAR_3));
    FUNC_11("TMP=%s\n", VAR_3);
    FUNC_6(VAR_2,"\\");
    FUNC_9(VAR_2);
    FUNC_10(VAR_2);


    FUNC_2(VAR_2, sizeof(VAR_2));
    VAR_2[3] = 0;
    FUNC_5("TMP", VAR_2);
    FUNC_1("TMP", VAR_3, sizeof(VAR_3));
    FUNC_11("TMP=%s\n", VAR_3);
    FUNC_9(VAR_2);
    FUNC_10(VAR_2);

    FUNC_0(VAR_0, VAR_4);

    FUNC_2(VAR_2, sizeof(VAR_2));
    FUNC_3(VAR_2);
    VAR_2[2] = 0;
    FUNC_5("TMP", VAR_2);
    FUNC_1("TMP", VAR_3, sizeof(VAR_3));
    FUNC_11("TMP=%s\n", VAR_3);
    FUNC_2(VAR_2, sizeof(VAR_2));
    FUNC_6(VAR_2,"\\");
    FUNC_9(VAR_2);
    FUNC_10(VAR_2);

    FUNC_5("TMP", VAR_1);
    FUNC_4(VAR_4);
}
