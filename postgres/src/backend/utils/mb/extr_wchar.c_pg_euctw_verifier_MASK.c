
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;



__attribute__((used)) static int
FUNC_2(const unsigned char *VAR_0, int VAR_1)
{
 int VAR_2;
 unsigned char VAR_3,
    VAR_4;

 VAR_3 = *VAR_0++;

 switch (VAR_3)
 {
  case 129:
   VAR_2 = 4;
   if (VAR_2 > VAR_1)
    return -1;
   VAR_4 = *VAR_0++;
   if (VAR_4 < 0xa1 || VAR_4 > 0xa7)
    return -1;
   VAR_4 = *VAR_0++;
   if (!FUNC_0(VAR_4))
    return -1;
   VAR_4 = *VAR_0++;
   if (!FUNC_0(VAR_4))
    return -1;
   break;

  case 128:
   return -1;

  default:
   if (FUNC_1(VAR_3))
   {
    VAR_2 = 2;
    if (VAR_2 > VAR_1)
     return -1;

    VAR_4 = *VAR_0++;
    if (!FUNC_0(VAR_4))
     return -1;
   }
   else

   {
    VAR_2 = 1;
   }
   break;
 }
 return VAR_2;
}
