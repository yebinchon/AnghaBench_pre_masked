
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef scalar_t__ LPCSTR ;
typedef int INT ;
typedef int DATETIME_INFO ;
typedef int BOOL ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,scalar_t__,int,int *,int) ;

__attribute__((used)) static BOOL
FUNC_4 (DATETIME_INFO *VAR_1, LPCSTR VAR_2)
{
    if (VAR_2) {
 BOOL VAR_3;
 INT VAR_4 = FUNC_3(VAR_0, 0, VAR_2, -1, ((void*)0), 0);
 LPWSTR VAR_5 = FUNC_0(VAR_4 * sizeof(WCHAR));
 if (VAR_5) FUNC_3(VAR_0, 0, VAR_2, -1, VAR_5, VAR_4);
 VAR_3 = FUNC_1 (VAR_1, VAR_5);
 FUNC_2 (VAR_5);
 return VAR_3;
    }
    else
 return FUNC_1 (VAR_1, 0);

}
