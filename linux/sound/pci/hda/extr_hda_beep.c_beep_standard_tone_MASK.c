
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_beep {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct hda_beep *VAR_0, int VAR_1)
{
 if (VAR_1 <= 0)
  return 0;
 VAR_1 = 12000 / VAR_1;
 if (VAR_1 > 0xff)
  return 0xff;
 if (VAR_1 <= 0)
  return 1;
 return VAR_1;
}
