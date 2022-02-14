
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_unit {int device; } ;
typedef enum control_action { ____Placeholder_control_action } control_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fw_unit*,int*,int,int*,int,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct fw_unit *VAR_4, u8 VAR_5, bool *VAR_6,
      enum control_action VAR_7)
{
 u8 *VAR_8;
 u8 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(11, VAR_3);
 if (!VAR_8)
  return -VAR_2;

 if (VAR_7 == VAR_0) {
  VAR_8[0] = 0x01;
  VAR_9 = 0x0c;
 } else {
  VAR_8[0] = 0x00;
  VAR_9 = 0x09;
 }
 VAR_8[1] = 0x08;
 VAR_8[2] = 0xb8;
 VAR_8[3] = 0x81;
 VAR_8[4] = VAR_5;
 VAR_8[5] = 0x10;
 VAR_8[6] = 0x02;
 VAR_8[7] = 0x00;
 VAR_8[8] = 0x01;
 VAR_8[9] = 0x01;
 if (VAR_7 == VAR_0)
  VAR_8[10] = 0xff;
 else
  VAR_8[10] = *VAR_6 ? 0x70 : 0x60;

 VAR_10 = FUNC_1(VAR_4, VAR_8, 11, VAR_8, 11, 0x3fe);
 if (VAR_10 < 0)
  goto error;
 if (VAR_10 < 11) {
  FUNC_0(&VAR_4->device, "short FCP response\n");
  VAR_10 = -VAR_1;
  goto error;
 }
 if (VAR_8[0] != VAR_9) {
  FUNC_0(&VAR_4->device, "mute command failed\n");
  VAR_10 = -VAR_1;
  goto error;
 }
 if (VAR_7 == VAR_0)
  *VAR_6 = VAR_8[10] == 0x70;

 VAR_10 = 0;

error:
 FUNC_2(VAR_8);

 return VAR_10;
}
