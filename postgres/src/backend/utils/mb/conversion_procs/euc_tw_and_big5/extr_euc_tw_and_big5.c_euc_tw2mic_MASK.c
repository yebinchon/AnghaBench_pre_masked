
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(const unsigned char *VAR_6, unsigned char *VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;

 while (VAR_8 > 0)
 {
  VAR_9 = *VAR_6;
  if (FUNC_0(VAR_9))
  {
   VAR_10 = FUNC_1(VAR_4, (const char *) VAR_6, VAR_8);
   if (VAR_10 < 0)
    FUNC_2(VAR_4,
          (const char *) VAR_6, VAR_8);
   if (VAR_9 == VAR_5)
   {
    VAR_9 = VAR_6[1];
    if (VAR_9 == 0xa1)
     *VAR_7++ = VAR_1;
    else if (VAR_9 == 0xa2)
     *VAR_7++ = VAR_2;
    else
    {

     *VAR_7++ = VAR_0;
     *VAR_7++ = VAR_9 - 0xa3 + VAR_3;
    }
    *VAR_7++ = VAR_6[2];
    *VAR_7++ = VAR_6[3];
   }
   else
   {
    *VAR_7++ = VAR_1;
    *VAR_7++ = VAR_9;
    *VAR_7++ = VAR_6[1];
   }
   VAR_6 += VAR_10;
   VAR_8 -= VAR_10;
  }
  else
  {
   if (VAR_9 == 0)
    FUNC_2(VAR_4,
          (const char *) VAR_6, VAR_8);
   *VAR_7++ = VAR_9;
   VAR_6++;
   VAR_8--;
  }
 }
 *VAR_7 = '\0';
}
