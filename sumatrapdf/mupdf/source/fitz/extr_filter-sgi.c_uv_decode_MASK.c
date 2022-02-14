
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ncum; int ustart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int
FUNC_0(float *VAR_5, float *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 register int VAR_10, VAR_11;

 if (VAR_7 < 0 || VAR_7 >= VAR_0)
  return (-1);
 VAR_9 = 0;
 VAR_8 = VAR_1;
 while (VAR_8 - VAR_9 > 1) {
  VAR_11 = (VAR_9 + VAR_8) >> 1;
  VAR_10 = VAR_7 - VAR_4[VAR_11].ncum;
  if (VAR_10 > 0)
   VAR_9 = VAR_11;
  else if (VAR_10 < 0)
   VAR_8 = VAR_11;
  else {
   VAR_9 = VAR_11;
   break;
  }
 }
 VAR_11 = VAR_9;
 VAR_10 = VAR_7 - VAR_4[VAR_11].ncum;
 *VAR_5 = VAR_4[VAR_11].ustart + (VAR_10+.5f)*VAR_2;
 *VAR_6 = VAR_3 + (VAR_11+.5f)*VAR_2;
 return (0);
}
