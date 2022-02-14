
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_info *VAR_3)
{
 static const char *const VAR_4[16] = {
  "0 ms", "2.67 ms", "5.33 ms", "10.6 ms",
  "21.3 ms", "42.7 ms", "85.3 ms", "171 ms",
  "341 ms", "683 ms", "1.37 s", "2.73 s",
  "5.46 s", "10.9 s", "21.8 s", "43.7 s",
 };
 static const char *const VAR_5[11] = {
  "0.25 ms", "0.5 ms", "1 ms", "2 ms",
  "4 ms", "8 ms", "16 ms", "32 ms",
  "64 ms", "128 ms", "256 ms",
 };
 static const char *const VAR_6[11] = {
  "8.40 ms", "16.8 ms", "33.6 ms", "67.2 ms",
  "134 ms", "269 ms", "538 ms", "1.08 s",
  "2.15 s", "4.3 s", "8.6 s",
 };
 static const char *const VAR_7[11] = {
  "1.2 ms", "2.4 ms", "4.8 ms", "9.6 ms",
  "19.2 ms", "38.4 ms", "76.8 ms", "154 ms",
  "307 ms", "614 ms", "1.23 s",
 };
 static const char *const VAR_8[11] = {
  "33.5 ms", "67.0 ms", "134 ms", "268 ms",
  "536 ms", "1.07 s", "2.14 s", "4.29 s",
  "8.58 s", "17.2 s", "34.3 s",
 };
 static const char *const VAR_9[8] = {
  "0 us", "62.5 us", "125 us", "250 us",
  "500 us", "1 ms", "2 ms", "4 ms",
 };
 u8 VAR_10;
 const char *const *VAR_11;

 VAR_10 = (VAR_2->private_value >> 12) & 0xf;
 switch ((VAR_2->private_value >> 24) & 0x1f) {
 case 130:
  VAR_11 = VAR_4;
  break;
 case 129:
  if (((VAR_2->private_value >> 20) & 0xf) == 0) {
   if (VAR_2->private_value & VAR_1)
    VAR_11 = VAR_5;
   else
    VAR_11 = VAR_6;
  } else {
   if (VAR_2->private_value & VAR_1)
    VAR_11 = VAR_7;
   else
    VAR_11 = VAR_8;
  }
  break;
 case 128:
  VAR_11 = VAR_9;
  break;
 default:
  return -VAR_0;
 }
 return FUNC_0(VAR_3, 1, VAR_10 + 1, VAR_11);
}
