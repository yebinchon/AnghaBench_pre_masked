
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short FUNC_0 (unsigned char*,long) ;

unsigned short FUNC_1(unsigned char *VAR_0, long VAR_1)
{
 long VAR_2;
 unsigned short VAR_3, VAR_4 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 2)
 {
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  VAR_4 += VAR_3;
  if (VAR_4 < VAR_3)
   VAR_4++;
 }
 if (VAR_1 & 1)
 {
  VAR_3 = VAR_0[VAR_2];
  VAR_4 += VAR_3;
  if (VAR_4 < VAR_3)
   VAR_4++;
 }
 return VAR_4;
}
