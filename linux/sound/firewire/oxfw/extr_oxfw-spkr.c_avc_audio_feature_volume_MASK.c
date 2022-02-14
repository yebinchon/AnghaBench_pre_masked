
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fw_unit {int device; } ;
typedef int s16 ;
typedef enum control_attribute { ____Placeholder_control_attribute } control_attribute ;
typedef enum control_action { ____Placeholder_control_action } control_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct fw_unit*,int*,int,int*,int,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct fw_unit *VAR_4, u8 VAR_5, s16 *VAR_6,
        unsigned int VAR_7,
        enum control_attribute VAR_8,
        enum control_action VAR_9)
{
 u8 *VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(12, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 if (VAR_9 == VAR_0) {
  VAR_10[0] = 0x01;
  VAR_11 = 0x0c;
 } else {
  VAR_10[0] = 0x00;
  VAR_11 = 0x09;
 }
 VAR_10[1] = 0x08;
 VAR_10[2] = 0xb8;
 VAR_10[3] = 0x81;
 VAR_10[4] = VAR_5;
 VAR_10[5] = VAR_8;
 VAR_10[6] = 0x02;
 VAR_10[7] = VAR_7;
 VAR_10[8] = 0x02;
 VAR_10[9] = 0x02;
 if (VAR_9 == VAR_0) {
  VAR_10[10] = 0xff;
  VAR_10[11] = 0xff;
 } else {
  VAR_10[10] = *VAR_6 >> 8;
  VAR_10[11] = *VAR_6;
 }

 VAR_12 = FUNC_1(VAR_4, VAR_10, 12, VAR_10, 12, 0x3fe);
 if (VAR_12 < 0)
  goto error;
 if (VAR_12 < 12) {
  FUNC_0(&VAR_4->device, "short FCP response\n");
  VAR_12 = -VAR_1;
  goto error;
 }
 if (VAR_10[0] != VAR_11) {
  FUNC_0(&VAR_4->device, "volume command failed\n");
  VAR_12 = -VAR_1;
  goto error;
 }
 if (VAR_9 == VAR_0)
  *VAR_6 = (VAR_10[10] << 8) | VAR_10[11];

 VAR_12 = 0;

error:
 FUNC_2(VAR_10);

 return VAR_12;
}
