
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int browse_info ;
typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int * LPVOID ;
typedef int BOOL ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int,int *,int) ;

__attribute__((used)) static BOOL FUNC_5(browse_info *VAR_2, LPVOID VAR_3, BOOL VAR_4) {
    LPWSTR VAR_5 = ((void*)0);
    BOOL VAR_6 = VAR_1;
    int VAR_7;

    if (!VAR_4)
        return FUNC_0(VAR_2, VAR_3, VAR_4);

    if ((VAR_7 = FUNC_4(VAR_0, 0, VAR_3, -1, ((void*)0), 0)) &&
        (VAR_5 = FUNC_2(FUNC_1(), 0, VAR_7 * sizeof(WCHAR))) &&
        FUNC_4(VAR_0, 0, VAR_3, -1, VAR_5, VAR_7))
    {
        VAR_6 = FUNC_0(VAR_2, VAR_5, VAR_4);
    }

    FUNC_3(FUNC_1(), 0, VAR_5);
    return VAR_6;
}
