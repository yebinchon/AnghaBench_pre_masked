
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_beep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct hda_beep *VAR_3, int VAR_4)
{
 if (VAR_4 <= 0)
  return 0;
 VAR_4 *= 1000;
 VAR_4 = VAR_4 - VAR_1
  + VAR_2 / 2;
 if (VAR_4 < 0)
  VAR_4 = 0;
 else if (VAR_4 >= (VAR_0 - VAR_1))
  VAR_4 = 1;
 else {
  VAR_4 /= VAR_2;
  VAR_4 = 255 - VAR_4;
 }
 return VAR_4;
}
