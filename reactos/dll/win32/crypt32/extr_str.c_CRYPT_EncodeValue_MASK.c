
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct X500TokenW {int dummy; } ;
typedef int PCERT_NAME_BLOB ;
typedef int LPCWSTR ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (size_t,struct X500TokenW const*,int ,size_t const,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static BOOL FUNC_1(DWORD VAR_1,
 const struct X500TokenW *VAR_2, PCERT_NAME_BLOB VAR_3, const DWORD *VAR_4,
 LPCWSTR *VAR_5)
{
    DWORD VAR_6;
    BOOL VAR_7;

    VAR_7 = VAR_0;
    for (VAR_6 = 0; !VAR_7 && VAR_4[VAR_6]; VAR_6++)
        VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_4[VAR_6], VAR_5);
    return VAR_7;
}
