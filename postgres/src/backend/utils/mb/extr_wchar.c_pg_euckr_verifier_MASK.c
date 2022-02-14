
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static int
FUNC_2(const unsigned char *VAR_0, int VAR_1)
{
 int VAR_2;
 unsigned char VAR_3,
    VAR_4;

 VAR_3 = *VAR_0++;

 if (FUNC_1(VAR_3))
 {
  VAR_2 = 2;
  if (VAR_2 > VAR_1)
   return -1;
  if (!FUNC_0(VAR_3))
   return -1;
  VAR_4 = *VAR_0++;
  if (!FUNC_0(VAR_4))
   return -1;
 }
 else

 {
  VAR_2 = 1;
 }

 return VAR_2;
}
