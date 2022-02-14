
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char uint8_t ;
typedef int ucPower ;
typedef scalar_t__ int8_t ;
typedef unsigned char _u8 ;
typedef void* _u32 ;
struct TYPE_4__ {void* FilterIdMask; } ;
typedef TYPE_1__ _WlanRxFilterOperationCommandBuff_t ;
struct TYPE_6__ {int lease_time; void* ipv4_addr_last; void* ipv4_addr_start; } ;
struct TYPE_5__ {void* ipV4DnsServer; void* ipV4Gateway; void* ipV4Mask; void* ipV4; } ;
typedef TYPE_2__ SlNetCfgIpV4Args_t ;
typedef TYPE_3__ SlNetAppDhcpServerBasicOpt_t ;
typedef int RxFilterIdMask ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (void*,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,unsigned char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int,unsigned char*) ;
 int FUNC_10 (int ,int ,int *,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,unsigned char*,int) ;
 int FUNC_13 (int ,int ,int,unsigned char*) ;
 int FUNC_14 () ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (unsigned char) ;
 int FUNC_19 (unsigned char) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (unsigned char,char const*,unsigned char) ;
 int FUNC_23 (char const*,unsigned char,int) ;
 int FUNC_24 () ;

void FUNC_25 (int8_t VAR_15, const char *VAR_16, uint8_t VAR_17, uint8_t VAR_18, const char *VAR_19, uint8_t VAR_20,
                   uint8_t VAR_21, uint8_t VAR_22, bool VAR_23) {


    FUNC_17();


    FUNC_14();


    FUNC_24();


    FUNC_0(FUNC_11(0xFF));


    uint8_t VAR_24 = 1;
    FUNC_0(FUNC_9(VAR_4, 1, 1, &VAR_24));


    FUNC_0(FUNC_10(VAR_9, VAR_7, ((void*)0), 0));


    FUNC_0(FUNC_5(0, 0));


    FUNC_8(VAR_6);


    _WlanRxFilterOperationCommandBuff_t VAR_25;
    FUNC_3 ((void *)&VAR_25, 0 ,sizeof(VAR_25));
    FUNC_3(VAR_25.FilterIdMask, 0xFF, 8);
    FUNC_0(FUNC_12(VAR_10, (_u8 *)&VAR_25, sizeof(_WlanRxFilterOperationCommandBuff_t)));







    FUNC_21(VAR_15);


    FUNC_15(VAR_15);



    uint8_t VAR_26 = 0;
    if (VAR_15 == VAR_2) {
        FUNC_0(FUNC_13(VAR_11, VAR_12, sizeof(VAR_26),
                                   (unsigned char *)&VAR_26));


        FUNC_23 (VAR_16, VAR_17, VAR_23);
        FUNC_22 (VAR_18, VAR_19, VAR_20);
        FUNC_19 (VAR_21);


        _u8* VAR_27 = (_u8*)"EU";
        FUNC_0(FUNC_13(VAR_11, VAR_13, 2, VAR_27));

        SlNetCfgIpV4Args_t VAR_28;
        VAR_28 = (_u32)FUNC_2(192,168,1,1);
        VAR_28 = (_u32)FUNC_2(255,255,255,0);
        VAR_28 = (_u32)FUNC_2(192,168,1,1);
        VAR_28 = (_u32)FUNC_2(192,168,1,1);
        FUNC_0(FUNC_9(VAR_3, VAR_0,
                                     sizeof(SlNetCfgIpV4Args_t), (_u8 *)&VAR_28));

        SlNetAppDhcpServerBasicOpt_t VAR_29;
        VAR_29.lease_time = 4096;
        VAR_29.ipv4_addr_start = FUNC_2(192,168,1,2);
        VAR_29.ipv4_addr_last = FUNC_2(192,168,1,254);
        FUNC_0(FUNC_8(VAR_5));
        FUNC_0(FUNC_6(VAR_5, VAR_1,
                                     sizeof(SlNetAppDhcpServerBasicOpt_t), (_u8* )&VAR_29));
        FUNC_0(FUNC_7(VAR_5));


        FUNC_15(VAR_15);
    } else {
        FUNC_0(FUNC_13(VAR_11, VAR_14,
                                   sizeof(VAR_26), (unsigned char *)&VAR_26));

        FUNC_0(FUNC_10(VAR_8, FUNC_1(1, 1, 0, 0, 0), ((void*)0), 0));
    }


    FUNC_20 (FUNC_4());


    FUNC_16();
}
