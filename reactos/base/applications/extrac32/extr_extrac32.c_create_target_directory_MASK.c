
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(LPWSTR VAR_3)
{
    WCHAR VAR_4[VAR_2];
    int VAR_5;

    FUNC_4(VAR_4, VAR_3);
    *FUNC_0(VAR_4) = 0;
    if(!FUNC_1(VAR_4))
    {
        VAR_5 = FUNC_2(((void*)0), VAR_4, ((void*)0));
        if(VAR_5 != VAR_1 && VAR_5 != VAR_0)
            FUNC_3("Can't create directory: %s\n", FUNC_5(VAR_4));
    }
}
