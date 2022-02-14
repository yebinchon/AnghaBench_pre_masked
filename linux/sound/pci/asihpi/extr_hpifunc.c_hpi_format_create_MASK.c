
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;
typedef int u16 ;
struct hpi_msg_format {int channels; int format; long sample_rate; long bit_rate; long attributes; } ;
struct hpi_format {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int FUNC_0 (struct hpi_format*,struct hpi_msg_format*) ;

u16 FUNC_1(struct hpi_format *VAR_5, u16 VAR_6, u16 VAR_7,
 u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 u16 VAR_11 = 0;
 struct hpi_msg_format VAR_12;

 switch (VAR_6) {
 case 1:
 case 2:
 case 4:
 case 6:
 case 8:
 case 16:
  break;
 default:
  VAR_11 = VAR_1;
  return VAR_11;
 }
 VAR_12.channels = VAR_6;

 switch (VAR_7) {
 case 133:
 case 132:
 case 130:
 case 131:
 case 134:
 case 129:
 case 139:
 case 138:
 case 137:
 case 140:
 case 143:
 case 141:
 case 128:
 case 142:
 case 136:
 case 135:
  break;
 default:
  VAR_11 = VAR_2;
  return VAR_11;
 }
 VAR_12.format = VAR_7;

 if (VAR_8 < 8000L) {
  VAR_11 = VAR_0;
  VAR_8 = 8000L;
 }
 if (VAR_8 > 200000L) {
  VAR_11 = VAR_0;
  VAR_8 = 200000L;
 }
 VAR_12.sample_rate = VAR_8;

 switch (VAR_7) {
 case 139:
 case 138:
 case 137:
  VAR_12.bit_rate = VAR_9;
  break;
 case 133:
 case 134:
  VAR_12.bit_rate = VAR_6 * VAR_8 * 2;
  break;
 case 130:
 case 131:
  VAR_12.bit_rate = VAR_6 * VAR_8 * 4;
  break;
 case 129:
  VAR_12.bit_rate = VAR_6 * VAR_8;
  break;
 default:
  VAR_12.bit_rate = 0;
 }

 switch (VAR_7) {
 case 138:
  if ((VAR_6 == 1)
   && (VAR_10 != VAR_3)) {
   VAR_10 = VAR_3;
   VAR_11 = VAR_2;
  } else if (VAR_10 > VAR_4) {
   VAR_10 = VAR_3;
   VAR_11 = VAR_2;
  }
  VAR_12.attributes = VAR_10;
  break;
 default:
  VAR_12.attributes = VAR_10;
 }

 FUNC_0(VAR_5, &VAR_12);
 return VAR_11;
}
