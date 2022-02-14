
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_0, int VAR_1,
     unsigned int VAR_2)
{
 if (VAR_0 < 0) {
  if (VAR_2)
   VAR_0 = FUNC_0(VAR_0);
  else
   VAR_0 = VAR_1 - VAR_0;
 } else if ((VAR_0 > 0) && VAR_2) {
  VAR_0 += VAR_1;
 }

 return VAR_0;
}
