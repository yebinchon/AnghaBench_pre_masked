
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HANDLE ;
typedef int ENCODING ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ,char*,int,char*,int,int *,int *) ;
 int FUNC_7 (int ,char*,int,int *,int *) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static void FUNC_9( HANDLE VAR_2, WCHAR * VAR_3, int VAR_4, ENCODING VAR_5)
{
    char * VAR_6;
    int VAR_7;
    DWORD VAR_8;

    FUNC_5("writing: %s\n", FUNC_8(VAR_3, VAR_4));

    switch (VAR_5)
    {
    case 131:
        VAR_7 = FUNC_6(VAR_0, 0, VAR_3, VAR_4, ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_6 = FUNC_2(FUNC_1(), 0, VAR_7);
        if (!VAR_6) return;
        VAR_4 = FUNC_6(VAR_0, 0, VAR_3, VAR_4, VAR_6, VAR_7, ((void*)0), ((void*)0));
        FUNC_7(VAR_2, VAR_6, VAR_4, &VAR_8, ((void*)0));
        FUNC_3(FUNC_1(), 0, VAR_6);
        break;
    case 128:
        VAR_7 = FUNC_6(VAR_1, 0, VAR_3, VAR_4, ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_6 = FUNC_2(FUNC_1(), 0, VAR_7);
        if (!VAR_6) return;
        VAR_4 = FUNC_6(VAR_1, 0, VAR_3, VAR_4, VAR_6, VAR_7, ((void*)0), ((void*)0));
        FUNC_7(VAR_2, VAR_6, VAR_4, &VAR_8, ((void*)0));
        FUNC_3(FUNC_1(), 0, VAR_6);
        break;
    case 129:
        FUNC_7(VAR_2, VAR_3, VAR_4 * sizeof(WCHAR), &VAR_8, ((void*)0));
        break;
    case 130:
        FUNC_4(VAR_3, VAR_4);
        FUNC_7(VAR_2, VAR_3, VAR_4 * sizeof(WCHAR), &VAR_8, ((void*)0));
        break;
    default:
        FUNC_0("encoding type %d not implemented\n", VAR_5);
    }
}
