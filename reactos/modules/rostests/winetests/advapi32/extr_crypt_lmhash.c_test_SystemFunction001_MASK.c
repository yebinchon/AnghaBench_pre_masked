
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ NTSTATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*,unsigned char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    unsigned char VAR_2[8] = { 0xff, 0x37, 0x50, 0xbc, 0xc2, 0xb2, 0x24, 0 };
    unsigned char VAR_3[8] = { 0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef };
    unsigned char VAR_4[8] = { 0xc3, 0x37, 0xcd, 0x5c, 0xbd, 0x44, 0xfc, 0x97 };
    unsigned char VAR_5[16];
    NTSTATUS VAR_6;

    VAR_6 = FUNC_3(0,0,0);
    FUNC_2( VAR_6 == VAR_1, "wrong error code\n");

    FUNC_1(VAR_5, 0, sizeof VAR_5);

    VAR_6 = FUNC_3(VAR_3,VAR_2,VAR_5);
    FUNC_2( VAR_6 == VAR_0, "wrong error code\n");

    FUNC_2(!FUNC_0(VAR_5, VAR_4, sizeof VAR_4), "response wrong\n");
}
