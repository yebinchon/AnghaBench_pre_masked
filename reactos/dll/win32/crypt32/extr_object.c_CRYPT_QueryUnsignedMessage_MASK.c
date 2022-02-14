
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int type ;
struct TYPE_3__ {int cbData; int pbData; } ;
typedef int * HCRYPTMSG ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,scalar_t__*,scalar_t__*) ;
 int * FUNC_2 (scalar_t__,int ,scalar_t__,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static BOOL FUNC_5(const CRYPT_DATA_BLOB *VAR_8,
 DWORD *VAR_9, DWORD *VAR_10, HCRYPTMSG *VAR_11)
{
    DWORD VAR_12 = VAR_7 | VAR_5;
    BOOL VAR_13 = VAR_4;
    HCRYPTMSG VAR_14;

    if ((VAR_14 = FUNC_2(VAR_12, 0, 0, 0, ((void*)0), ((void*)0))))
    {
        VAR_13 = FUNC_3(VAR_14, VAR_8->pbData, VAR_8->cbData, VAR_6);
        if (VAR_13)
        {
            DWORD VAR_15, VAR_16 = sizeof(VAR_15);

            VAR_13 = FUNC_1(VAR_14, VAR_2, 0, &VAR_15, &VAR_16);
            if (VAR_13)
            {
                if (VAR_15 != VAR_1)
                {
                    FUNC_4(VAR_3);
                    VAR_13 = VAR_4;
                }
            }
        }
        if (!VAR_13)
        {
            FUNC_0(VAR_14);
            VAR_14 = FUNC_2(VAR_12, 0, VAR_1, 0,
             ((void*)0), ((void*)0));
            if (VAR_14)
            {
                VAR_13 = FUNC_3(VAR_14, VAR_8->pbData, VAR_8->cbData, VAR_6);
                if (!VAR_13)
                {
                    FUNC_0(VAR_14);
                    VAR_14 = ((void*)0);
                }
            }
        }
    }
    if (VAR_13)
    {
        if (VAR_9)
            *VAR_9 = VAR_12;
        if (VAR_10)
            *VAR_10 = VAR_0;
        if (VAR_11)
            *VAR_11 = VAR_14;
    }
    return VAR_13;
}
