
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * info; } ;
struct TYPE_8__ {TYPE_1__ signed_data; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_9__ {int cbData; int pbData; } ;
typedef int DWORD ;
typedef int CRYPT_SIGNED_INFO ;
typedef TYPE_3__ CRYPT_DER_BLOB ;
typedef TYPE_4__ CDecodeMsg ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int ,int *,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_1(CDecodeMsg *VAR_1,
 const CRYPT_DER_BLOB *VAR_2)
{
    BOOL VAR_3;
    CRYPT_SIGNED_INFO *VAR_4;
    DWORD VAR_5;

    VAR_3 = FUNC_0(VAR_2->pbData, VAR_2->cbData,
     VAR_0, ((void*)0), (CRYPT_SIGNED_INFO *)&VAR_4,
     &VAR_5);
    if (VAR_3)
        VAR_1->u.signed_data.info = VAR_4;
    return VAR_3;
}
