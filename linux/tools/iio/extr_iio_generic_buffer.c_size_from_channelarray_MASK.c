
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel_info {int bytes; int location; } ;



int FUNC_0(struct iio_channel_info *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;

 while (VAR_3 < VAR_1) {
  if (VAR_2 % VAR_0[VAR_3].bytes == 0)
   VAR_0[VAR_3].location = VAR_2;
  else
   VAR_0[VAR_3].location = VAR_2 - VAR_2 % VAR_0[VAR_3].bytes
            + VAR_0[VAR_3].bytes;

  VAR_2 = VAR_0[VAR_3].location + VAR_0[VAR_3].bytes;
  VAR_3++;
 }

 return VAR_2;
}
