
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_unit {int dummy; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int* VAR_8 ;
 int FUNC_1 (struct fw_unit*,int*,int,int*,int,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

int FUNC_4(struct fw_unit *VAR_9, unsigned int *VAR_10,
       enum avc_general_plug_dir VAR_11,
       unsigned short VAR_12)
{
 unsigned int VAR_13;
 u8 *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_3(8, VAR_7);
 if (VAR_14 == ((void*)0))
  return -VAR_5;

 VAR_14[0] = 0x01;
 VAR_14[1] = 0xff;
 if (VAR_11 == VAR_0)
  VAR_14[2] = 0x19;
 else
  VAR_14[2] = 0x18;
 VAR_14[3] = 0xff & VAR_12;
 VAR_14[4] = 0x90;
 VAR_14[5] = 0xff;
 VAR_14[6] = 0xff;
 VAR_14[7] = 0xff;


 VAR_15 = FUNC_1(VAR_9, VAR_14, 8, VAR_14, 8,
      FUNC_0(1) | FUNC_0(2) | FUNC_0(3) | FUNC_0(4));
 if (VAR_15 < 0)
  ;
 else if (VAR_15 < 8)
  VAR_15 = -VAR_4;
 else if (VAR_14[0] == 0x08)
  VAR_15 = -VAR_6;
 else if (VAR_14[0] == 0x0a)
  VAR_15 = -VAR_3;
 else if (VAR_14[0] == 0x0b)
  VAR_15 = -VAR_2;
 if (VAR_15 < 0)
  goto end;


 VAR_13 = 0x07 & VAR_14[5];
 if (VAR_13 >= VAR_1) {
  VAR_15 = -VAR_2;
  goto end;
 }

 *VAR_10 = VAR_8[VAR_13];
 VAR_15 = 0;
end:
 FUNC_2(VAR_14);
 return VAR_15;
}
