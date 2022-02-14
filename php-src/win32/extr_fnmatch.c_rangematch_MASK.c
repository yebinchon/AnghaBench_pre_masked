
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (unsigned char) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_3, char VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 char VAR_8, VAR_9;
 if ( (VAR_6 = (*VAR_3 == '!' || *VAR_3 == '^')) )
  ++VAR_3;

 if (VAR_5 & VAR_1)
  VAR_4 = FUNC_0((unsigned char)VAR_4);

 for (VAR_7 = 0; (VAR_8 = *VAR_3++) != ']';) {
  if (VAR_8 == '\\' && !(VAR_5 & VAR_2))
   VAR_8 = *VAR_3++;
  if (VAR_8 == VAR_0)
   return (((void*)0));

  if (VAR_5 & VAR_1)
   VAR_8 = FUNC_0((unsigned char)VAR_8);

  if (*VAR_3 == '-'
      && (VAR_9 = *(VAR_3+1)) != VAR_0 && VAR_9 != ']') {
   VAR_3 += 2;
   if (VAR_9 == '\\' && !(VAR_5 & VAR_2))
    VAR_9 = *VAR_3++;
   if (VAR_9 == VAR_0)
    return (((void*)0));

   if (VAR_5 & VAR_1)
    VAR_9 = FUNC_0((unsigned char)VAR_9);

   if ((unsigned char)VAR_8 <= (unsigned char)VAR_4 &&
       (unsigned char)VAR_4 <= (unsigned char)VAR_9)
    VAR_7 = 1;
  } else if (VAR_8 == VAR_4)
   VAR_7 = 1;
 }
 return (VAR_7 == VAR_6 ? ((void*)0) : VAR_3);
}
