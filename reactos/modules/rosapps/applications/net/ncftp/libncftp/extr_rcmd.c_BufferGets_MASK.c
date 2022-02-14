
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,char*,size_t) ;

int
FUNC_1(char *VAR_0, size_t VAR_1, int VAR_2, char *VAR_3, char **VAR_4, char **VAR_5, size_t VAR_6)
{
 int VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 VAR_7 = 0;
 VAR_9 = VAR_0;
 VAR_10 = VAR_9 + VAR_1 - 1;
 VAR_8 = (*VAR_4);
 for ( ; VAR_9 < VAR_10; ) {
  if (VAR_8 >= (*VAR_5)) {






   VAR_12 = (int) FUNC_0(VAR_2, VAR_3, VAR_6);
   if (VAR_12 == 0) {

    VAR_13 = 1;
    goto done;
   } else if (VAR_12 < 0) {

    VAR_7 = -1;
    goto done;
   }
   (*VAR_4) = VAR_3;
   (*VAR_5) = VAR_3 + VAR_12;
   VAR_8 = (*VAR_4);
   if (VAR_12 < (int) VAR_6)
    VAR_8[VAR_12] = '\0';
  }
  if (*VAR_8 == '\r') {
   ++VAR_8;
  } else {
   if (*VAR_8 == '\n') {
                           ++VAR_8;
    goto done;
   }
   *VAR_9++ = *VAR_8++;
  }
 }

done:
 (*VAR_4) = VAR_8;
 *VAR_9 = '\0';
 VAR_11 = (int) (VAR_9 - VAR_0);
 if (VAR_7 < 0)
  return (VAR_7);
 if ((VAR_11 == 0) && (VAR_13 == 1))
  return (-1);
 return (VAR_11);
}
