
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
 int VAR_5 ;
 int FUNC_1 (struct fw_unit*,int*,int,int*,int,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

int FUNC_4(struct fw_unit *VAR_6, unsigned int VAR_7,
      unsigned int VAR_8, unsigned int *VAR_9)
{
 u8 *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(12, VAR_5);
 if (VAR_10 == ((void*)0))
  return -VAR_3;

 VAR_10[0] = 0x01;
 VAR_10[1] = 0x08 | (0x07 & VAR_7);
 VAR_10[2] = 0xb8;
 VAR_10[3] = 0x80;
 VAR_10[4] = 0xff & VAR_8;
 VAR_10[5] = 0x10;
 VAR_10[6] = 0x02;
 VAR_10[7] = 0xff;
 VAR_10[8] = 0x01;

 VAR_11 = FUNC_1(VAR_6, VAR_10, 12, VAR_10, 12,
      FUNC_0(1) | FUNC_0(2) | FUNC_0(3) | FUNC_0(4) | FUNC_0(5) |
      FUNC_0(6) | FUNC_0(8));
 if (VAR_11 < 0)
  ;
 else if (VAR_11 < 9)
  VAR_11 = -VAR_2;
 else if (VAR_10[0] == 0x08)
  VAR_11 = -VAR_4;
 else if (VAR_10[0] == 0x0a)
  VAR_11 = -VAR_1;
 else if (VAR_10[0] == 0x0b)
  VAR_11 = -VAR_0;
 if (VAR_11 < 0)
  goto end;

 *VAR_9 = VAR_10[7];
 VAR_11 = 0;
end:
 FUNC_2(VAR_10);
 return VAR_11;
}
