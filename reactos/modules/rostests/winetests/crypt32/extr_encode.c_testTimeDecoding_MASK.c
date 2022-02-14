
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int wYear; } ;
struct encodedFiletime {TYPE_3__ sysTime; scalar_t__* encodedTime; } ;
typedef int ft ;
struct TYPE_5__ {int member_0; } ;
typedef scalar_t__ LPCSTR ;
typedef TYPE_1__ FILETIME ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (int,scalar_t__,scalar_t__*,scalar_t__,int ,int *,TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_5(DWORD VAR_4, LPCSTR VAR_5,
 const struct encodedFiletime *VAR_6)
{
    FILETIME VAR_7 = { 0 };
    DWORD VAR_8 = sizeof(VAR_7);
    BOOL VAR_9;

    VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6->encodedTime,
     VAR_6->encodedTime[1] + 2, 0, ((void*)0), &VAR_7, &VAR_8);



    if (VAR_5 == VAR_3 ||
     (VAR_6->sysTime.wYear >= 1950 && VAR_6->sysTime.wYear <= 2050))
    {
        FUNC_3(VAR_9 || FUNC_1(FUNC_0() == VAR_1),
         "CryptDecodeObjectEx failed: %d (0x%08x)\n", FUNC_0(),
         FUNC_0());
        if (VAR_9)
            FUNC_2(&VAR_6->sysTime, &VAR_7);
    }
    else
        FUNC_3(!VAR_9 && (FUNC_0() == VAR_0 ||
         FUNC_0() == VAR_2 ),
         "Expected CRYPT_E_ASN1_BADTAG or OSS_PDU_MISMATCH, got %08x\n",
         FUNC_0());
}
