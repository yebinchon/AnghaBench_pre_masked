
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const Rune ;



__attribute__((used)) static const Rune *
FUNC_0(Rune VAR_0, const Rune *VAR_1, int VAR_2, int VAR_3)
{
 const Rune *VAR_4;
 int VAR_5;

 while(VAR_2 > 1) {
  VAR_5 = VAR_2/2;
  VAR_4 = VAR_1 + VAR_5*VAR_3;
  if(VAR_0 >= VAR_4[0]) {
   VAR_1 = VAR_4;
   VAR_2 = VAR_2-VAR_5;
  } else
   VAR_2 = VAR_5;
 }
 if(VAR_2 && VAR_0 >= VAR_1[0])
  return VAR_1;
 return 0;
}
