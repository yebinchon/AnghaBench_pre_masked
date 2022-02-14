
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;

__attribute__((used)) static int FUNC_2(void)
{






 FUNC_0(16, 1, 0x000f, 0x0001);
 FUNC_0(16, 3, 0x00f0, 0x0030);
 FUNC_0(16, 5, 0x0f00, 0x0500);
 FUNC_0(16, 7, 0xf000, 0x7000);
 FUNC_0(16, 14, 0x000f, 0x000e);
 FUNC_0(16, 15, 0x00f0, 0x00f0);

 FUNC_1(8, 1, 0x0f, 0x01);
 FUNC_1(8, 3, 0xf0, 0x30);
 FUNC_1(8, 14, 0x0f, 0x0e);
 FUNC_1(8, 15, 0xf0, 0xf0);

 FUNC_0(32, 1, 0x00000f00, 0x00000100);
 FUNC_0(32, 3, 0x0000f000, 0x00003000);
 FUNC_0(32, 5, 0x000f0000, 0x00050000);
 FUNC_0(32, 7, 0x00f00000, 0x00700000);
 FUNC_0(32, 14, 0x0f000000, 0x0e000000);
 FUNC_0(32, 15, 0xf0000000, 0xf0000000);

 FUNC_0(64, 1, 0x00000f0000000000ull, 0x0000010000000000ull);
 FUNC_0(64, 3, 0x0000f00000000000ull, 0x0000300000000000ull);
 FUNC_0(64, 5, 0x000f000000000000ull, 0x0005000000000000ull);
 FUNC_0(64, 7, 0x00f0000000000000ull, 0x0070000000000000ull);
 FUNC_0(64, 14, 0x0f00000000000000ull, 0x0e00000000000000ull);
 FUNC_0(64, 15, 0xf000000000000000ull, 0xf000000000000000ull);

 return 0;
}
