
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_0)
{
 unsigned char *VAR_1 = VAR_0;

 while (*VAR_0)
 {
  int VAR_2;

  if ((VAR_2 = FUNC_0(VAR_0)) > 0)
  {
   if (VAR_1 != VAR_0)
   {
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
     *VAR_1++ = *VAR_0++;
   }
   else
   {
    VAR_0 += VAR_2;
    VAR_1 += VAR_2;
   }
  }
  else

   VAR_0++;
 }
 if (VAR_1 != VAR_0)
  *VAR_1 = '\0';
}
