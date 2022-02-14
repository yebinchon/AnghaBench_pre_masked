
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int type ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_2__ {int cbData; int pbData; } ;
typedef int HCRYPTPROV ;
typedef int HCRYPTMSG ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*,int*) ;
 int FUNC_3 (int ,int,int,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int *,...) ;
 int VAR_7 ;

__attribute__((used)) static WINECRYPT_CERTSTORE *FUNC_7(HCRYPTPROV VAR_8,
 DWORD VAR_9, const void *VAR_10)
{
    HCRYPTMSG VAR_11;
    WINECRYPT_CERTSTORE *VAR_12 = ((void*)0);
    const CRYPT_DATA_BLOB *VAR_13 = VAR_10;
    BOOL VAR_14;
    DWORD VAR_15 = VAR_9 & VAR_0 ? 0 :
     VAR_1;

    FUNC_6("(%ld, %08x, %p)\n", &VAR_8, VAR_9, VAR_10);

    VAR_11 = FUNC_3(VAR_6, VAR_15, VAR_2,
     VAR_8, ((void*)0), ((void*)0));
    VAR_14 = FUNC_4(VAR_11, VAR_13->pbData, VAR_13->cbData, VAR_7);
    if (!VAR_14)
    {
        FUNC_1(VAR_11);
        VAR_11 = FUNC_3(VAR_6, VAR_15, 0,
         VAR_8, ((void*)0), ((void*)0));
        VAR_14 = FUNC_4(VAR_11, VAR_13->pbData, VAR_13->cbData, VAR_7);
        if (VAR_14)
        {
            DWORD VAR_16, VAR_17 = sizeof(VAR_16);


            VAR_14 = FUNC_2(VAR_11, VAR_3, 0, &VAR_16, &VAR_17);
            if (VAR_14 && VAR_16 != VAR_2)
            {
                FUNC_5(VAR_4);
                VAR_14 = VAR_5;
            }
        }
    }
    if (VAR_14)
        VAR_12 = FUNC_0(0, VAR_9, VAR_11);
    FUNC_1(VAR_11);
    FUNC_6("returning %p\n", VAR_12);
    return VAR_12;
}
