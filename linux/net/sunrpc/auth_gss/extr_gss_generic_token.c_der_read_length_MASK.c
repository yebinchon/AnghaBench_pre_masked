
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;

__attribute__((used)) static int
FUNC_0(unsigned char **VAR_1, int *VAR_2)
{
 unsigned char VAR_3;
 int VAR_4;

 if (*VAR_2 < 1)
  return -1;
 VAR_3 = *(*VAR_1)++;
 (*VAR_2)--;
 if (VAR_3 & 0x80) {
  if ((VAR_3 &= 0x7f) > ((*VAR_2)-1))
   return -1;
  if (VAR_3 > VAR_0)
   return -1;
  VAR_4 = 0;
  for (; VAR_3; VAR_3--) {
   VAR_4 = (VAR_4<<8) + (*(*VAR_1)++);
   (*VAR_2)--;
  }
 } else {
  VAR_4 = VAR_3;
 }

 return VAR_4;
}
