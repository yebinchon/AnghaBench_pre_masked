
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pbData; int cbData; } ;
typedef int HCRYPTMSG ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (char*,scalar_t__,...) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_5(const CRYPT_DATA_BLOB *VAR_4,
 DWORD *VAR_5, DWORD *VAR_6,
 HCERTSTORE *VAR_7, HCRYPTMSG *VAR_8)
{
    HCERTSTORE VAR_9 = FUNC_3(VAR_2, 0, 0,
     VAR_1, ((void*)0));
    BOOL VAR_10;

    FUNC_4("(%d, %p)\n", VAR_4->cbData, VAR_4->pbData);

    VAR_10 = FUNC_0(VAR_4, VAR_9);
    if (VAR_10)
    {
        if (VAR_5)
            *VAR_5 = VAR_3;
        if (VAR_6)
            *VAR_6 = VAR_0;
        if (VAR_7)
            *VAR_7 = FUNC_2(VAR_9);
    }
    FUNC_1(VAR_9, 0);
    FUNC_4("returning %d\n", VAR_10);
    return VAR_10;
}
