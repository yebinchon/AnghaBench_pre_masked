
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned long VAR_0,
          unsigned long VAR_1,
          int VAR_2,
          int VAR_3,
          int VAR_4)
{
 unsigned int VAR_5, VAR_6;






 VAR_5 = VAR_2 + 2;
 if (VAR_5 == 2) {





  if (VAR_1 != VAR_0 + 1 && VAR_1 != VAR_0 - 1)
   VAR_5 = 1;
 } else {
  unsigned int VAR_7 = 4;
  while (VAR_7 < VAR_5)
   VAR_7 <<= 1;
  VAR_5 = VAR_7;
 }

 if (VAR_5 > VAR_3)
  VAR_5 = VAR_3;


 VAR_6 = VAR_4 / 2;
 if (VAR_5 < VAR_6)
  VAR_5 = VAR_6;

 return VAR_5;
}
