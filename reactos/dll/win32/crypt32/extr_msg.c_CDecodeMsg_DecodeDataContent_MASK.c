
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int properties; } ;
struct TYPE_9__ {int cbData; int pbData; } ;
struct TYPE_8__ {int cbData; int pbData; } ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DER_BLOB ;
typedef TYPE_2__ CRYPT_DATA_BLOB ;
typedef TYPE_3__ CDecodeMsg ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,TYPE_2__**,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3(CDecodeMsg *VAR_4, const CRYPT_DER_BLOB *VAR_5)
{
    BOOL VAR_6;
    CRYPT_DATA_BLOB *VAR_7;
    DWORD VAR_8;

    VAR_6 = FUNC_1(VAR_2, VAR_3,
     VAR_5->pbData, VAR_5->cbData, VAR_1, ((void*)0), &VAR_7, &VAR_8);
    if (VAR_6)
    {
        VAR_6 = FUNC_0(VAR_4->properties,
         VAR_0, VAR_7->pbData, VAR_7->cbData);
        FUNC_2(VAR_7);
    }
    return VAR_6;
}
