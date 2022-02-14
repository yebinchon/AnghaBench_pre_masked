
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int DWORD ;
typedef char BYTE ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,char*,int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_0 ;
 int FUNC_8 (char*,char**,int) ;

__attribute__((used)) static BYTE* FUNC_9(WCHAR *VAR_1, DWORD *VAR_2)
{
    WCHAR *VAR_3;
    BYTE *VAR_4, *VAR_5;


    *VAR_2=(FUNC_7(VAR_1)+1)/2;
    VAR_5=FUNC_3(FUNC_2(), 0, *VAR_2);
    FUNC_0(VAR_5);

    VAR_3 = VAR_1;
    VAR_4 = VAR_5;
    *VAR_2=0;
    while (*VAR_3 != '\0') {
        UINT VAR_6;
        WCHAR *VAR_7;

        VAR_6 = FUNC_8(VAR_3,&VAR_7,16);
        if (VAR_7 == VAR_3 || VAR_6 > 0xff || (*VAR_7 && *VAR_7 != ',')) {
            char* VAR_8 = FUNC_1(VAR_3);
            FUNC_5(VAR_0,"%d: ERROR converting CSV hex stream. Invalid value at '%s'\n",
                    FUNC_6(), VAR_8);
            FUNC_4(FUNC_2(), 0, VAR_5);
            FUNC_4(FUNC_2(), 0, VAR_8);
            return ((void*)0);
        }
        *VAR_4++ =(BYTE)VAR_6;
        (*VAR_2)++;
        if (*VAR_7) VAR_7++;
        VAR_3 = VAR_7;
    }

    return VAR_5;
}
