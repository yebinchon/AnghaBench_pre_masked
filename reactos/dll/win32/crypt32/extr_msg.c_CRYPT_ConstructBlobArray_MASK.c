
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PCRYPT_DATA_BLOB ;
typedef int DWORD ;
typedef int CRYPT_DATA_BLOB ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int const*) ;
 int * FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static BOOL FUNC_3(DWORD *VAR_2,
 PCRYPT_DATA_BLOB *VAR_3, DWORD VAR_4, const CRYPT_DATA_BLOB *VAR_5)
{
    BOOL VAR_6 = VAR_1;

    *VAR_2 = VAR_4;
    if (VAR_4)
    {
        *VAR_3 = FUNC_1(VAR_4 * sizeof(CRYPT_DATA_BLOB));
        if (*VAR_3)
        {
            DWORD VAR_7;

            FUNC_2(*VAR_3, 0, VAR_4 * sizeof(CRYPT_DATA_BLOB));
            for (VAR_7 = 0; VAR_6 && VAR_7 < VAR_4; VAR_7++)
                VAR_6 = FUNC_0(&(*VAR_3)[VAR_7], &VAR_5[VAR_7]);
        }
        else
            VAR_6 = VAR_0;
    }
    return VAR_6;
}
