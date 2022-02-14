
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* md4hashfunc ) (int ,unsigned char*,unsigned char*) ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(md4hashfunc VAR_1)
{
    unsigned char VAR_2[0x10] = {
        0x48, 0x7c, 0x3f, 0x5e, 0x2b, 0x0d, 0x6a, 0x79,
        0x32, 0x4e, 0xcd, 0xbe, 0x9c, 0x15, 0x16, 0x6f };
    unsigned char VAR_3[0x10], VAR_4[0x10];
    int VAR_5;

    FUNC_1(VAR_3, 0, sizeof VAR_3);
    FUNC_1(VAR_4, 0, sizeof VAR_4);
    VAR_5 = VAR_1(0, VAR_3, VAR_4);
    FUNC_2( VAR_5 == VAR_0, "wrong error code\n");
    FUNC_2( !FUNC_0(VAR_2, VAR_4, sizeof VAR_4), "output wrong\n");
}
