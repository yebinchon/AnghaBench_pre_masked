
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0, unsigned int VAR_1,
     int VAR_2, int VAR_3,
     unsigned int VAR_4)
{
 VAR_0 &= VAR_1;
 if (VAR_0 < VAR_3) {
  if (VAR_4)
   VAR_0 = 0 - VAR_0;
 } else if (VAR_0 > VAR_3) {
  if (VAR_4)
   VAR_0 = VAR_0 - VAR_3;
  else
   VAR_0 = VAR_3 - VAR_0;
 }

 if (VAR_0 < VAR_2)
  VAR_0 = VAR_2;

 return VAR_0;
}
