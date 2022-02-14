
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
 unsigned int* VAR_7 ;
 int FUNC_1 (struct fw_unit*,int*,int,int*,int,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

int FUNC_4(struct fw_unit *VAR_8, unsigned int VAR_9,
       enum avc_general_plug_dir VAR_10,
       unsigned short VAR_11)
{
 unsigned int VAR_12;
 u8 *VAR_13;
 bool VAR_14;
 int VAR_15;

 VAR_14 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if (VAR_7[VAR_12] == VAR_9) {
   VAR_14 = 1;
   break;
  }
 }
 if (!VAR_14)
  return -VAR_2;

 VAR_13 = FUNC_3(8, VAR_6);
 if (VAR_13 == ((void*)0))
  return -VAR_4;

 VAR_13[0] = 0x00;
 VAR_13[1] = 0xff;
 if (VAR_10 == VAR_0)
  VAR_13[2] = 0x19;
 else
  VAR_13[2] = 0x18;
 VAR_13[3] = 0xff & VAR_11;
 VAR_13[4] = 0x90;
 VAR_13[5] = 0x07 & VAR_12;
 VAR_13[6] = 0xff;
 VAR_13[7] = 0xff;


 VAR_15 = FUNC_1(VAR_8, VAR_13, 8, VAR_13, 8,
      FUNC_0(1) | FUNC_0(2) | FUNC_0(3) | FUNC_0(4) | FUNC_0(5));
 if (VAR_15 < 0)
  ;
 else if (VAR_15 < 8)
  VAR_15 = -VAR_3;
 else if (VAR_13[0] == 0x08)
  VAR_15 = -VAR_5;
 else if (VAR_13[0] == 0x0a)
  VAR_15 = -VAR_2;
 if (VAR_15 < 0)
  goto end;

 VAR_15 = 0;
end:
 FUNC_2(VAR_13);
 return VAR_15;
}
