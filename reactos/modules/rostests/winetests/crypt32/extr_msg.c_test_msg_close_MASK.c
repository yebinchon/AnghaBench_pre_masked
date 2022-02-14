
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HCRYPTMSG ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    BOOL VAR_2;
    HCRYPTMSG VAR_3;


    VAR_2 = FUNC_0(((void*)0));
    FUNC_3(VAR_2, "CryptMsgClose failed: %x\n", FUNC_2());

    if (0)
        VAR_2 = FUNC_0((HCRYPTMSG)1);
    VAR_3 = FUNC_1(VAR_1, 0, VAR_0, ((void*)0), ((void*)0),
     ((void*)0));
    FUNC_3(VAR_3 != ((void*)0), "CryptMsgOpenToEncode failed: %x\n", FUNC_2());
    VAR_2 = FUNC_0(VAR_3);
    FUNC_3(VAR_2, "CryptMsgClose failed: %x\n", FUNC_2());
}
