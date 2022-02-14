
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,char const*,char const*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,char const*,int,char*,int,int *,int *) ;
 int FUNC_5 (int ,char const*,int,int*,int *) ;
 int FUNC_6 (int ,char*,int,int*,int ) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_10(const WCHAR *VAR_4)
{
    DWORD VAR_5, VAR_6, VAR_7, VAR_8;
    char *VAR_9;

    if(VAR_3) {
        static const WCHAR VAR_10[] =
            {'W','i','n','d','o','w','s',' ','S','c','r','i','p','t',' ','H','o','s','t',0};
        FUNC_3(((void*)0), VAR_4, VAR_10, VAR_1);
        return;
    }

    VAR_7 = FUNC_9(VAR_4);
    VAR_6 = FUNC_5(FUNC_2(VAR_2), VAR_4, VAR_7, &VAR_5, ((void*)0));
    if(VAR_6) {
        static const WCHAR VAR_11[] = {'\r','\n'};
        FUNC_5(FUNC_2(VAR_2), VAR_11, FUNC_0(VAR_11), &VAR_5, ((void*)0));
        return;
    }

    VAR_8 = FUNC_4(FUNC_1(), 0, VAR_4, VAR_7, ((void*)0), 0, ((void*)0), ((void*)0));
    VAR_9 = FUNC_7(VAR_7);
    if(!VAR_9)
        return;

    FUNC_4(FUNC_1(), 0, VAR_4, VAR_7, VAR_9, VAR_8, ((void*)0), ((void*)0));
    FUNC_6(FUNC_2(VAR_2), VAR_9, VAR_8, &VAR_5, VAR_0);
    FUNC_8(VAR_9);
    FUNC_6(FUNC_2(VAR_2), "\r\n", 2, &VAR_5, VAR_0);
}
