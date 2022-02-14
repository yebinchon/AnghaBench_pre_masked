
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_unit {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fw_unit*,int*,int,int*,int,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

int FUNC_4(struct fw_unit *VAR_5, unsigned int VAR_6,
      unsigned int VAR_7, unsigned int VAR_8)
{
 u8 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(12, VAR_4);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_9[0] = 0x00;
 VAR_9[1] = 0x08 | (0x07 & VAR_6);
 VAR_9[2] = 0xb8;
 VAR_9[3] = 0x80;
 VAR_9[4] = 0xff & VAR_7;
 VAR_9[5] = 0x10;
 VAR_9[6] = 0x02;
 VAR_9[7] = 0xff & VAR_8;
 VAR_9[8] = 0x01;

 VAR_10 = FUNC_1(VAR_5, VAR_9, 12, VAR_9, 12,
      FUNC_0(1) | FUNC_0(2) | FUNC_0(3) | FUNC_0(4) | FUNC_0(5) |
      FUNC_0(6) | FUNC_0(7) | FUNC_0(8));
 if (VAR_10 < 0)
  ;
 else if (VAR_10 < 9)
  VAR_10 = -VAR_1;
 else if (VAR_9[0] == 0x08)
  VAR_10 = -VAR_3;
 else if (VAR_9[0] == 0x0a)
  VAR_10 = -VAR_0;
 else
  VAR_10 = 0;

 FUNC_2(VAR_9);
 return VAR_10;
}
