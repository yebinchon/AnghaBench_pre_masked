
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ctl_t ;
struct TYPE_3__ {void* member_1; int member_0; } ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;
typedef int ALG_ID ;


 scalar_t__ FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int const*,int ,void*,int *) ;

__attribute__((used)) static BOOL FUNC_2(ctl_t *VAR_0, DWORD VAR_1,
 ALG_ID VAR_2, const BYTE *VAR_3, DWORD VAR_4, void *VAR_5,
 DWORD *VAR_6)
{
    BOOL VAR_7 = FUNC_1(0, VAR_2, 0, VAR_3, VAR_4, VAR_5,
     VAR_6);
    if (VAR_7 && VAR_5)
    {
        CRYPT_DATA_BLOB VAR_8 = { *VAR_6, VAR_5 };

        VAR_7 = FUNC_0(VAR_0, VAR_1, 0, &VAR_8);
    }
    return VAR_7;
}
