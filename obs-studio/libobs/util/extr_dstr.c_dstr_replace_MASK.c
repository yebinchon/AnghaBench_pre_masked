
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {char* array; scalar_t__ len; } ;


 int FUNC_0 (struct dstr*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct dstr*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,char const*) ;
 size_t FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char const*) ;

void FUNC_7(struct dstr *VAR_0, const char *VAR_1, const char *VAR_2)
{
 size_t VAR_3, VAR_4;
 char *VAR_5;

 if (FUNC_1(VAR_0))
  return;

 if (!VAR_2)
  VAR_2 = "";

 VAR_3 = FUNC_5(VAR_1);
 VAR_4 = FUNC_5(VAR_2);
 VAR_5 = VAR_0->array;

 if (VAR_4 < VAR_3) {
  unsigned long VAR_6 = 0;

  while ((VAR_5 = FUNC_6(VAR_5, VAR_1)) != ((void*)0)) {
   char *VAR_7 = VAR_5 + VAR_3;
   size_t VAR_8 = FUNC_5(VAR_7);

   if (VAR_8) {
    FUNC_3(VAR_5 + VAR_4, VAR_7, VAR_8 + 1);
    if (VAR_4)
     FUNC_2(VAR_5, VAR_2, VAR_4);
   } else {
    FUNC_4(VAR_5, VAR_2);
   }

   VAR_5 += VAR_4;
   ++VAR_6;
  }

  if (VAR_6)
   VAR_0->len += (VAR_4 - VAR_3) * VAR_6;

 } else if (VAR_4 > VAR_3) {
  unsigned long VAR_9 = 0;

  while ((VAR_5 = FUNC_6(VAR_5, VAR_1)) != ((void*)0)) {
   VAR_5 += VAR_3;
   ++VAR_9;
  }

  if (!VAR_9)
   return;

  VAR_0->len += (VAR_4 - VAR_3) * VAR_9;
  FUNC_0(VAR_0, VAR_0->len + 1);
  VAR_5 = VAR_0->array;

  while ((VAR_5 = FUNC_6(VAR_5, VAR_1)) != ((void*)0)) {
   char *VAR_10 = VAR_5 + VAR_3;
   size_t VAR_11 = FUNC_5(VAR_10);

   if (VAR_11) {
    FUNC_3(VAR_5 + VAR_4, VAR_10, VAR_11 + 1);
    FUNC_2(VAR_5, VAR_2, VAR_4);
   } else {
    FUNC_4(VAR_5, VAR_2);
   }

   VAR_5 += VAR_4;
  }

 } else {
  while ((VAR_5 = FUNC_6(VAR_5, VAR_1)) != ((void*)0)) {
   FUNC_2(VAR_5, VAR_2, VAR_4);
   VAR_5 += VAR_4;
  }
 }
}
