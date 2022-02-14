
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef long u16 ;
struct hpi_format {long channels; int format; long sample_rate; long bit_rate; } ;


 long VAR_0 ;
 int FUNC_0 (int) ;

u16 FUNC_1(struct hpi_format *VAR_1,
 u32 VAR_2, u32 *VAR_3)
{

 u32 VAR_4;
 u32 VAR_5;
 u16 VAR_6;
 struct hpi_format *VAR_7 = VAR_1;

 VAR_6 = VAR_7->channels;

 switch (VAR_7->format) {
 case 133:
 case 132:
  VAR_4 = VAR_7->sample_rate * 2L * VAR_6;
  break;
 case 131:
  VAR_4 = VAR_7->sample_rate * 3L * VAR_6;
  break;
 case 129:
 case 130:
  VAR_4 = VAR_7->sample_rate * 4L * VAR_6;
  break;
 case 128:
  VAR_4 = VAR_7->sample_rate * 1L * VAR_6;
  break;
 case 136:
 case 135:
 case 134:
  VAR_4 = VAR_7->bit_rate / 8L;
  break;
 case 137:

  VAR_4 = 256000L / 8L;
  break;
 default:
  return VAR_0;
 }
 VAR_5 = (VAR_4 * VAR_2 * 2) /
  1000L;

 *VAR_3 =
  FUNC_0(((VAR_5 + 4095L) & ~4095L));
 return 0;
}
