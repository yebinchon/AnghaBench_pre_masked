
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int) ;

void
FUNC_2(const unsigned char *VAR_0, size_t VAR_1, int VAR_2,
     int *VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6,
    VAR_7 = 0,
    VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 1;
 int VAR_11 = 0;

 for (; *VAR_0 && VAR_1 > 0; VAR_0 += VAR_7)
 {
  VAR_7 = FUNC_1((const char *) VAR_0, VAR_2);
  if (VAR_1 < (size_t) VAR_7)
   break;
  VAR_6 = FUNC_0((const char *) VAR_0, VAR_2);

  if (VAR_7 == 1)
  {
   if (*VAR_0 == '\n')
   {
    if (VAR_8 > VAR_9)
     VAR_9 = VAR_8;
    VAR_8 = 0;
    VAR_10 += 1;
    VAR_11 += 1;
   }
   else if (*VAR_0 == '\r')
   {
    VAR_8 += 2;
    VAR_11 += 2;
   }
   else if (*VAR_0 == '\t')
   {
    do
    {
     VAR_8++;
     VAR_11++;
    } while (VAR_8 % 8 != 0);
   }
   else if (VAR_6 < 0)
   {
    VAR_8 += 4;
    VAR_11 += 4;
   }
   else
   {
    VAR_8 += VAR_6;
    VAR_11 += 1;
   }
  }
  else if (VAR_6 < 0)
  {
   VAR_8 += 6;
   VAR_11 += 6;
  }
  else
  {
   VAR_8 += VAR_6;
   VAR_11 += VAR_7;
  }
  VAR_1 -= VAR_7;
 }
 if (VAR_8 > VAR_9)
  VAR_9 = VAR_8;
 VAR_11 += 1;


 if (VAR_3)
  *VAR_3 = VAR_9;
 if (VAR_4)
  *VAR_4 = VAR_10;
 if (VAR_5)
  *VAR_5 = VAR_11;
}
