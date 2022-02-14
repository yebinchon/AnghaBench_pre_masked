
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (char*,char const*) ;

void
FUNC_4(const char *VAR_1, Oid *VAR_2, int VAR_3)
{
 int VAR_4,
    VAR_5;
 char VAR_6[100];
 char VAR_7;

 VAR_5 = 0;
 VAR_4 = 0;
 for (;;)
 {
  VAR_7 = *VAR_1++;
  if (VAR_7 == ' ' || VAR_7 == '\0')
  {
   if (VAR_4 > 0)
   {
    if (VAR_5 >= VAR_3)
    {
     FUNC_3("could not parse numeric array \"%s\": too many numbers", VAR_1);
     FUNC_1(1);
    }
    VAR_6[VAR_4] = '\0';
    VAR_2[VAR_5++] = FUNC_0(VAR_6);
    VAR_4 = 0;
   }
   if (VAR_7 == '\0')
    break;
  }
  else
  {
   if (!(FUNC_2((unsigned char) VAR_7) || VAR_7 == '-') ||
    VAR_4 >= sizeof(VAR_6) - 1)
   {
    FUNC_3("could not parse numeric array \"%s\": invalid character in number", VAR_1);
    FUNC_1(1);
   }
   VAR_6[VAR_4++] = VAR_7;
  }
 }

 while (VAR_5 < VAR_3)
  VAR_2[VAR_5++] = VAR_0;
}
