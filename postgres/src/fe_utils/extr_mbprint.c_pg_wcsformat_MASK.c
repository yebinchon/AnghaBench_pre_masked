
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lineptr {unsigned char* ptr; int width; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (unsigned char const*) ;

void
FUNC_6(const unsigned char *VAR_1, size_t VAR_2, int VAR_3,
    struct lineptr *VAR_4, int VAR_5)
{
 int VAR_6,
    VAR_7 = 0;
 int VAR_8 = 0;
 unsigned char *VAR_9 = VAR_4->ptr;

 for (; *VAR_1 && VAR_2 > 0; VAR_1 += VAR_7)
 {
  VAR_7 = FUNC_1((const char *) VAR_1, VAR_3);
  if (VAR_2 < (size_t) VAR_7)
   break;
  VAR_6 = FUNC_0((const char *) VAR_1, VAR_3);

  if (VAR_7 == 1)
  {
   if (*VAR_1 == '\n')
   {
    *VAR_9++ = '\0';
    VAR_4->width = VAR_8;
    VAR_8 = 0;
    VAR_4++;
    VAR_5--;
    if (VAR_5 <= 0)
     FUNC_2(1);


    VAR_4->ptr = VAR_9;
   }
   else if (*VAR_1 == '\r')
   {
    FUNC_4((char *) VAR_9, "\\r");
    VAR_8 += 2;
    VAR_9 += 2;
   }
   else if (*VAR_1 == '\t')
   {
    do
    {
     *VAR_9++ = ' ';
     VAR_8++;
    } while (VAR_8 % 8 != 0);
   }
   else if (VAR_6 < 0)
   {
    FUNC_3((char *) VAR_9, "\\x%02X", *VAR_1);
    VAR_8 += 4;
    VAR_9 += 4;
   }
   else
   {
    VAR_8 += VAR_6;
    *VAR_9++ = *VAR_1;
   }
  }
  else if (VAR_6 < 0)
  {
   if (VAR_3 == VAR_0)
    FUNC_3((char *) VAR_9, "\\u%04X", FUNC_5(VAR_1));
   else
   {





    FUNC_3((char *) VAR_9, "\\u????");
   }
   VAR_9 += 6;
   VAR_8 += 6;
  }
  else
  {
   int VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
    *VAR_9++ = VAR_1[VAR_10];
   VAR_8 += VAR_6;
  }
  VAR_2 -= VAR_7;
 }
 VAR_4->width = VAR_8;
 *VAR_9++ = '\0';

 if (VAR_5 <= 0)
  FUNC_2(1);

 (VAR_4 + 1)->ptr = ((void*)0);
}
