
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sTempVerb ;
typedef int WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int *,scalar_t__,int *) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int * VAR_5 ;
 int VAR_6 ;

BOOL FUNC_8( HKEY VAR_7, LPCWSTR VAR_8, LPCWSTR VAR_9, LPWSTR VAR_10, DWORD VAR_11 )
{
 WCHAR VAR_12[VAR_4];
 BOOL VAR_13;

 FUNC_4("%p %s %s %p\n", VAR_7, FUNC_5(VAR_8), FUNC_5(VAR_9), VAR_10);

 if (VAR_8)
            FUNC_2(VAR_2, VAR_8, 0, VAR_3, &VAR_7);
        if (!VAR_7)
            return VAR_1;
        VAR_13 = VAR_1;

        if (FUNC_0(VAR_7, VAR_9, VAR_12, sizeof(VAR_12)/sizeof(VAR_12[0])))
        {
            WCHAR VAR_14[VAR_4];
            FUNC_7(VAR_14, VAR_6);
            FUNC_6(VAR_14, VAR_12);
            FUNC_6(VAR_14, VAR_5);
            VAR_13 = (VAR_0 == FUNC_3(VAR_7, VAR_14, ((void*)0), ((void*)0), VAR_10, &VAR_11));
        }
        if (VAR_8)
            FUNC_1(VAR_7);

 FUNC_4("-- %s\n", FUNC_5(VAR_10) );
 return VAR_13;
}
