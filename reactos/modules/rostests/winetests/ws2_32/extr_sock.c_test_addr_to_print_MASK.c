
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_long ;
typedef int u_char ;
struct TYPE_3__ {void* S_addr; } ;
struct in_addr {void* s_addr; TYPE_1__ S_un; } ;
struct TYPE_4__ {int Byte; } ;
struct in6_addr {int s6_addr; TYPE_2__ u; } ;
typedef int dst6 ;
typedef int dst ;
typedef int addr4_Num ;
typedef int addr3_Num ;
typedef int addr2_Num ;
typedef char* PCSTR ;


 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* FUNC_0 () ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (struct in_addr) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int,char*,...) ;
 char* FUNC_5 (int,void*,char*,int) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_5[16];
    char VAR_6[64];
    const char * VAR_7;
    struct in_addr VAR_8;
    struct in6_addr VAR_9;

    u_long VAR_10 = 0x00000000;
    PCSTR VAR_11 = "0.0.0.0";
    u_long VAR_12 = 0x20201015;
    PCSTR VAR_13 = "21.16.32.32";
    u_char VAR_14[16] = {0,0,0,0,0,0,0,0,0,0,0xff,0xfe,0xcC,0x98,0xbd,0x74};
    PCSTR VAR_15 = "::fffe:cc98:bd74";
    u_char VAR_16[16] = {0x20,0x30,0xa4,0xb1};
    PCSTR VAR_17 = "2030:a4b1::";
    u_char VAR_18[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0xcC,0x98,0xbd,0x74};
    PCSTR VAR_19 = "::204.152.189.116";


    VAR_8.s_addr = VAR_10;

    VAR_7 = FUNC_2(*((struct in_addr*)&VAR_8.s_addr));
    FUNC_4(VAR_7 != ((void*)0), "inet_ntoa failed %s\n", VAR_5);
    FUNC_4(!FUNC_6(VAR_7, VAR_11),"Address %s != %s\n", VAR_7, VAR_11);


    VAR_8.S_un.S_addr = VAR_12;
    VAR_7 = FUNC_2(*((struct in_addr*)&VAR_8.s_addr));
    FUNC_4(VAR_7 != ((void*)0), "inet_ntoa failed %s\n", VAR_5);
    FUNC_4(!FUNC_6(VAR_7, VAR_13),"Address %s != %s\n", VAR_7, VAR_13);


    if (!&FUNC_5)
    {
        FUNC_7("InetNtop not present, not executing tests\n");
        return;
    }


    VAR_7 = FUNC_5(VAR_0,(void*)&VAR_8.s_addr, VAR_5, sizeof(VAR_5));
    FUNC_4(VAR_7 != ((void*)0), "InetNtop failed %s\n", VAR_5);
    FUNC_4(!FUNC_6(VAR_7, VAR_13),"Address %s != %s\n", VAR_7, VAR_13);


    VAR_7 = FUNC_5(1, (void*)&VAR_8.s_addr, VAR_5, sizeof(VAR_5));
    FUNC_4(VAR_7 == ((void*)0), "The pointer should not be returned (%p)\n", VAR_7);
    FUNC_4(FUNC_0() == VAR_3, "Should be WSAEAFNOSUPPORT\n");


    VAR_7 = ((void*)0);
    VAR_7 = FUNC_5(VAR_0, (void*)&VAR_8.s_addr, ((void*)0), sizeof(VAR_5));
    FUNC_4(VAR_7 == ((void*)0), "The pointer should not be returned (%p)\n", VAR_7);
    FUNC_4(FUNC_0() == VAR_2 || FUNC_0() == VAR_4 ,
       "Should be STATUS_INVALID_PARAMETER or WSAEINVAL not 0x%x\n", FUNC_0());


    FUNC_1(0);
    VAR_7 = ((void*)0);
    VAR_7 = FUNC_5(VAR_0, (void*)&VAR_8.s_addr, VAR_5, 0);
    FUNC_4(VAR_7 == ((void*)0), "The pointer should not be returned (%p)\n", VAR_7);
    FUNC_4(FUNC_0() == VAR_2 || FUNC_0() == VAR_4 ,
       "Should be STATUS_INVALID_PARAMETER or WSAEINVAL not 0x%x\n", FUNC_0());


    FUNC_1(0);
    VAR_7 = ((void*)0);
    VAR_7 = FUNC_5(VAR_0, (void*)&VAR_8.s_addr, VAR_5, 6);
    FUNC_4(VAR_7 == ((void*)0), "The pointer should not be returned (%p)\n", VAR_7);
    FUNC_4(FUNC_0() == VAR_2 || FUNC_0() == VAR_4 ,
       "Should be STATUS_INVALID_PARAMETER or WSAEINVAL not 0x%x\n", FUNC_0());


    FUNC_1(0);
    VAR_7 = ((void*)0);
    VAR_7 = FUNC_5(VAR_0, (void*)&VAR_8.s_addr, VAR_5, sizeof(VAR_5)+1);
    FUNC_4(VAR_7 != ((void*)0), "The pointer should  be returned (%p)\n", VAR_7);
    FUNC_4(!FUNC_6(VAR_7, VAR_13),"Address %s != %s\n", VAR_7, VAR_13);




    FUNC_3(VAR_9, VAR_14, sizeof(VAR_14));
    VAR_7 = FUNC_5(VAR_1,(void*)&VAR_9, VAR_6, sizeof(VAR_6));
    FUNC_4(VAR_7 != ((void*)0), "InetNtop failed %s\n", VAR_6);
    FUNC_4(!FUNC_6(VAR_7, VAR_15),"Address %s != %s\n", VAR_7, VAR_15);


    FUNC_3(VAR_9, VAR_16, sizeof(VAR_16));
    VAR_7 = FUNC_5(VAR_1,(void*)&VAR_9, VAR_6, sizeof(VAR_6));
    FUNC_4(VAR_7 != ((void*)0), "InetNtop failed %s\n", VAR_6);
    FUNC_4(!FUNC_6(VAR_7, VAR_17),"Address %s != %s\n", VAR_7, VAR_17);


    FUNC_3(VAR_9, VAR_18, sizeof(VAR_18));
    VAR_7 = FUNC_5(VAR_1, (void*)&VAR_9, VAR_6, sizeof(VAR_6));
    FUNC_4(VAR_7 != ((void*)0), "InetNtop failed %s\n", VAR_6);
    FUNC_4(!FUNC_6(VAR_7, VAR_19),"Address %s != %s\n", VAR_7, VAR_19);


    FUNC_3(VAR_9, VAR_14, sizeof(VAR_14));


    VAR_7 = ((void*)0);
    VAR_7 = FUNC_5(VAR_1, (void*)&VAR_9, ((void*)0), sizeof(VAR_6));
    FUNC_4(VAR_7 == ((void*)0), "The pointer should not be returned (%p)\n", VAR_7);
    FUNC_4(FUNC_0() == VAR_2 || FUNC_0() == VAR_4 ,
       "Should be STATUS_INVALID_PARAMETER or WSAEINVAL not 0x%x\n", FUNC_0());


    FUNC_1(0);
    VAR_7 = ((void*)0);
    VAR_7 = FUNC_5(VAR_1, (void*)&VAR_9, VAR_6, 0);
    FUNC_4(VAR_7 == ((void*)0), "The pointer should not be returned (%p)\n", VAR_7);
    FUNC_4(FUNC_0() == VAR_2 || FUNC_0() == VAR_4 ,
       "Should be STATUS_INVALID_PARAMETER or WSAEINVAL not 0x%x\n", FUNC_0());


    FUNC_1(0);
    VAR_7 = ((void*)0);
    VAR_7 = FUNC_5(VAR_1, (void*)&VAR_9, VAR_6, 16);
    FUNC_4(VAR_7 == ((void*)0), "The pointer should not be returned (%p)\n", VAR_7);
    FUNC_4(FUNC_0() == VAR_2 || FUNC_0() == VAR_4 ,
       "Should be STATUS_INVALID_PARAMETER or WSAEINVAL not 0x%x\n", FUNC_0());


    FUNC_1(0);
    VAR_7 = ((void*)0);
    VAR_7 = FUNC_5(VAR_1, (void*)&VAR_9, VAR_6, 18);
    FUNC_4(VAR_7 != ((void*)0), "The pointer should be returned (%p)\n", VAR_7);
}
