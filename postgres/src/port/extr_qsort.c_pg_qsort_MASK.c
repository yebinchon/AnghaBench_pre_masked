
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (void*,size_t) ;
 char* FUNC_2 (char*,char*,char*,int (*) (void const*,void const*)) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,size_t) ;

void
FUNC_5(void *VAR_0, size_t VAR_1, size_t VAR_2, int (*VAR_3) (const void *, const void *))
{
 char *VAR_4,
      *VAR_5,
      *VAR_6,
      *VAR_7,
      *VAR_8,
      *VAR_9,
      *VAR_10;
 size_t VAR_11,
    VAR_12;
 int VAR_13,
    VAR_14,
    VAR_15;

loop:FUNC_1(VAR_0, VAR_2);
 if (VAR_1 < 7)
 {
  for (VAR_9 = (char *) VAR_0 + VAR_2; VAR_9 < (char *) VAR_0 + VAR_1 * VAR_2; VAR_9 += VAR_2)
   for (VAR_8 = VAR_9; VAR_8 > (char *) VAR_0 && VAR_3(VAR_8 - VAR_2, VAR_8) > 0;
     VAR_8 -= VAR_2)
    FUNC_3(VAR_8, VAR_8 - VAR_2);
  return;
 }
 VAR_15 = 1;
 for (VAR_9 = (char *) VAR_0 + VAR_2; VAR_9 < (char *) VAR_0 + VAR_1 * VAR_2; VAR_9 += VAR_2)
 {
  if (VAR_3(VAR_9 - VAR_2, VAR_9) > 0)
  {
   VAR_15 = 0;
   break;
  }
 }
 if (VAR_15)
  return;
 VAR_9 = (char *) VAR_0 + (VAR_1 / 2) * VAR_2;
 if (VAR_1 > 7)
 {
  VAR_8 = (char *) VAR_0;
  VAR_10 = (char *) VAR_0 + (VAR_1 - 1) * VAR_2;
  if (VAR_1 > 40)
  {
   size_t VAR_16 = (VAR_1 / 8) * VAR_2;

   VAR_8 = FUNC_2(VAR_8, VAR_8 + VAR_16, VAR_8 + 2 * VAR_16, VAR_3);
   VAR_9 = FUNC_2(VAR_9 - VAR_16, VAR_9, VAR_9 + VAR_16, VAR_3);
   VAR_10 = FUNC_2(VAR_10 - 2 * VAR_16, VAR_10 - VAR_16, VAR_10, VAR_3);
  }
  VAR_9 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_3);
 }
 FUNC_3(VAR_0, VAR_9);
 VAR_4 = VAR_5 = (char *) VAR_0 + VAR_2;
 VAR_6 = VAR_7 = (char *) VAR_0 + (VAR_1 - 1) * VAR_2;
 for (;;)
 {
  while (VAR_5 <= VAR_6 && (VAR_13 = VAR_3(VAR_5, VAR_0)) <= 0)
  {
   if (VAR_13 == 0)
   {
    FUNC_3(VAR_4, VAR_5);
    VAR_4 += VAR_2;
   }
   VAR_5 += VAR_2;
  }
  while (VAR_5 <= VAR_6 && (VAR_13 = VAR_3(VAR_6, VAR_0)) >= 0)
  {
   if (VAR_13 == 0)
   {
    FUNC_3(VAR_6, VAR_7);
    VAR_7 -= VAR_2;
   }
   VAR_6 -= VAR_2;
  }
  if (VAR_5 > VAR_6)
   break;
  FUNC_3(VAR_5, VAR_6);
  VAR_5 += VAR_2;
  VAR_6 -= VAR_2;
 }
 VAR_10 = (char *) VAR_0 + VAR_1 * VAR_2;
 VAR_11 = FUNC_0(VAR_4 - (char *) VAR_0, VAR_5 - VAR_4);
 FUNC_4(VAR_0, VAR_5 - VAR_11, VAR_11);
 VAR_11 = FUNC_0(VAR_7 - VAR_6, VAR_10 - VAR_7 - VAR_2);
 FUNC_4(VAR_5, VAR_10 - VAR_11, VAR_11);
 VAR_11 = VAR_5 - VAR_4;
 VAR_12 = VAR_7 - VAR_6;
 if (VAR_11 <= VAR_12)
 {

  if (VAR_11 > VAR_2)
   FUNC_5(VAR_0, VAR_11 / VAR_2, VAR_2, VAR_3);
  if (VAR_12 > VAR_2)
  {


   VAR_0 = VAR_10 - VAR_12;
   VAR_1 = VAR_12 / VAR_2;
   goto loop;
  }
 }
 else
 {

  if (VAR_12 > VAR_2)
   FUNC_5(VAR_10 - VAR_12, VAR_12 / VAR_2, VAR_2, VAR_3);
  if (VAR_11 > VAR_2)
  {


   VAR_1 = VAR_11 / VAR_2;
   goto loop;
  }
 }
}
