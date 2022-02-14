
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int hashInfo ;
struct TYPE_6__ {int pszObjId; } ;
struct TYPE_8__ {int cbSize; TYPE_1__ HashAlgorithm; int member_0; } ;
struct TYPE_7__ {int * member_2; int member_1; int member_0; } ;
typedef int * HCRYPTMSG ;
typedef TYPE_2__ CMSG_STREAM_INFO ;
typedef TYPE_3__ CMSG_HASHED_ENCODE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,TYPE_3__*,int *,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    HCRYPTMSG VAR_7;
    CMSG_HASHED_ENCODE_INFO VAR_8 = { 0 };
    CMSG_STREAM_INFO VAR_9 = { 0, VAR_5, ((void*)0) };

    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_1(VAR_4, 0, VAR_1, &VAR_8,
     ((void*)0), ((void*)0));
    FUNC_4(!VAR_7 && FUNC_2() == VAR_3,
     "Expected E_INVALIDARG, got %x\n", FUNC_2());
    VAR_8.cbSize = sizeof(VAR_8);
    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_1(VAR_4, 0, VAR_1, &VAR_8,
     ((void*)0), ((void*)0));
    FUNC_4(!VAR_7 && FUNC_2() == VAR_2,
     "Expected CRYPT_E_UNKNOWN_ALGO, got %x\n", FUNC_2());
    VAR_8.HashAlgorithm.pszObjId = VAR_6;
    VAR_7 = FUNC_1(VAR_4, 0, VAR_1, &VAR_8,
     ((void*)0), ((void*)0));
    FUNC_4(VAR_7 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    FUNC_0(VAR_7);
    VAR_7 = FUNC_1(VAR_4, VAR_0,
     VAR_1, &VAR_8, ((void*)0), ((void*)0));
    FUNC_4(VAR_7 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    FUNC_0(VAR_7);
    VAR_7 = FUNC_1(VAR_4, VAR_0,
     VAR_1, &VAR_8, ((void*)0), &VAR_9);
    FUNC_4(VAR_7 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    FUNC_0(VAR_7);
}
