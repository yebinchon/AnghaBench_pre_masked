
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int wYear; } ;
struct encodedFiletime {int * encodedTime; TYPE_3__ sysTime; } ;
struct TYPE_5__ {int member_0; } ;
typedef scalar_t__ LPCSTR ;
typedef TYPE_1__ FILETIME ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (scalar_t__,scalar_t__,TYPE_1__*,int ,int *,int **,scalar_t__*) ;

__attribute__((used)) static void FUNC_7(DWORD VAR_4, LPCSTR VAR_5,
 const struct encodedFiletime *VAR_6)
{
    FILETIME VAR_7 = { 0 };
    BYTE *VAR_8 = ((void*)0);
    DWORD VAR_9 = 0;
    BOOL VAR_10;

    VAR_10 = FUNC_2(&VAR_6->sysTime, &VAR_7);
    FUNC_5(VAR_10, "SystemTimeToFileTime failed: %d\n", FUNC_0());
    VAR_10 = FUNC_6(VAR_4, VAR_5, &VAR_7,
     VAR_0, ((void*)0), &VAR_8, &VAR_9);



    if (VAR_5 == VAR_3 ||
     (VAR_6->sysTime.wYear >= 1950 && VAR_6->sysTime.wYear <= 2050))
    {
        FUNC_5(VAR_10, "CryptEncodeObjectEx failed: %d (0x%08x)\n", FUNC_0(),
         FUNC_0());
        FUNC_5(VAR_8 != ((void*)0), "Expected an allocated buffer\n");
        if (VAR_10)
        {
            FUNC_5(VAR_8[0] == VAR_6->encodedTime[0],
             "Expected type 0x%02x, got 0x%02x\n", VAR_6->encodedTime[0],
             VAR_8[0]);
            FUNC_5(VAR_8[1] == VAR_6->encodedTime[1], "Expected %d bytes, got %d\n",
             VAR_6->encodedTime[1], VAR_9);
            FUNC_5(!FUNC_4(VAR_6->encodedTime + 2, VAR_8 + 2, VAR_6->encodedTime[1]),
             "Got unexpected value for time encoding\n");
            FUNC_1(VAR_8);
        }
    }
    else
        FUNC_5((!VAR_10 && FUNC_0() == VAR_1) ||
         FUNC_3(FUNC_0() == VAR_2),
         "Expected CRYPT_E_BAD_ENCODE, got 0x%08x\n", FUNC_0());
}
