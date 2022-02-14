
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_unit {int dummy; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fw_unit*,int*,int,int*,unsigned int,int) ;
 int FUNC_2 (int*,int*,int) ;

int FUNC_3(struct fw_unit *VAR_4,
     enum avc_general_plug_dir VAR_5, unsigned int VAR_6,
     u8 *VAR_7, unsigned int *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_9 == 0xff)
  VAR_10 = 0xc0;
 else
  VAR_10 = 0xc1;

 VAR_7[0] = 0x01;
 VAR_7[1] = 0xff;
 VAR_7[2] = 0xbf;
 VAR_7[3] = VAR_10;
 VAR_7[4] = VAR_5;
 VAR_7[5] = 0x00;
 VAR_7[6] = 0x00;
 VAR_7[7] = 0xff & VAR_6;
 VAR_7[8] = 0xff;
 VAR_7[9] = 0xff;
 VAR_7[10] = 0xff & VAR_9;
 VAR_7[11] = 0xff;


 VAR_11 = FUNC_1(VAR_4, VAR_7, 12, VAR_7, *VAR_8,
      FUNC_0(1) | FUNC_0(2) | FUNC_0(3) | FUNC_0(4) | FUNC_0(5) |
      FUNC_0(6) | FUNC_0(7));
 if (VAR_11 < 0)
  ;
 else if (VAR_11 < 12)
  VAR_11 = -VAR_2;
 else if (VAR_7[0] == 0x08)
  VAR_11 = -VAR_3;
 else if (VAR_7[0] == 0x0a)
  VAR_11 = -VAR_1;
 else if (VAR_7[0] == 0x0b)
  VAR_11 = -VAR_0;

 else if ((VAR_10 == 0xc1) && (VAR_7[10] != VAR_9))
  VAR_11 = -VAR_2;
 if (VAR_11 < 0)
  goto end;


 if (VAR_10 == 0xc0) {
  FUNC_2(VAR_7, VAR_7 + 10, VAR_11 - 10);
  *VAR_8 = VAR_11 - 10;
 } else {
  FUNC_2(VAR_7, VAR_7 + 11, VAR_11 - 11);
  *VAR_8 = VAR_11 - 11;
 }

 VAR_11 = 0;
end:
 return VAR_11;
}
