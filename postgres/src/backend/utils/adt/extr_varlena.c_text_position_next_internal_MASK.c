
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len1; int len2; int skiptablemask; char* str1; char* str2; int * skiptable; } ;
typedef TYPE_1__ TextPositionState ;


 int FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, TextPositionState *VAR_1)
{
 int VAR_2 = VAR_1->len1;
 int VAR_3 = VAR_1->len2;
 int VAR_4 = VAR_1->skiptablemask;
 const char *VAR_5 = VAR_1->str1;
 const char *VAR_6 = VAR_1->str2;
 const char *VAR_7 = &VAR_5[VAR_2];
 const char *VAR_8;

 FUNC_0(VAR_0 >= VAR_5 && VAR_0 <= VAR_7);

 if (VAR_3 == 1)
 {

  char VAR_9 = *VAR_6;

  VAR_8 = VAR_0;
  while (VAR_8 < VAR_7)
  {
   if (*VAR_8 == VAR_9)
    return (char *) VAR_8;
   VAR_8++;
  }
 }
 else
 {
  const char *VAR_10 = &VAR_6[VAR_3 - 1];


  VAR_8 = VAR_0 + VAR_3 - 1;
  while (VAR_8 < VAR_7)
  {

   const char *VAR_11;
   const char *VAR_12;

   VAR_11 = VAR_10;
   VAR_12 = VAR_8;
   while (*VAR_11 == *VAR_12)
   {

    if (VAR_11 == VAR_6)
     return (char *) VAR_12;
    VAR_11--, VAR_12--;
   }
   VAR_8 += VAR_1->skiptable[(unsigned char) *VAR_8 & VAR_4];
  }
 }

 return 0;
}
