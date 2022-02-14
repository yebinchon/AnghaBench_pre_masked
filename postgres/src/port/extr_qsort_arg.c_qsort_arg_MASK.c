
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* qsort_arg_comparator ) (char*,void*,void*) ;


 size_t FUNC_0 (int,int) ;
 int FUNC_1 (void*,size_t) ;
 char* FUNC_2 (char*,char*,char*,int (*) (char*,void*,void*),void*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,size_t) ;

void
FUNC_5(void *VAR_0, size_t VAR_1, size_t VAR_2, qsort_arg_comparator VAR_3, void *VAR_4)
{
 char *VAR_5,
      *VAR_6,
      *VAR_7,
      *VAR_8,
      *VAR_9,
      *VAR_10,
      *VAR_11;
 size_t VAR_12,
    VAR_13;
 int VAR_14,
    VAR_15,
    VAR_16;

loop:FUNC_1(VAR_0, VAR_2);
 if (VAR_1 < 7)
 {
  for (VAR_10 = (char *) VAR_0 + VAR_2; VAR_10 < (char *) VAR_0 + VAR_1 * VAR_2; VAR_10 += VAR_2)
   for (VAR_9 = VAR_10; VAR_9 > (char *) VAR_0 && VAR_3(VAR_9 - VAR_2, VAR_9, VAR_4) > 0;
     VAR_9 -= VAR_2)
    FUNC_3(VAR_9, VAR_9 - VAR_2);
  return;
 }
 VAR_16 = 1;
 for (VAR_10 = (char *) VAR_0 + VAR_2; VAR_10 < (char *) VAR_0 + VAR_1 * VAR_2; VAR_10 += VAR_2)
 {
  if (VAR_3(VAR_10 - VAR_2, VAR_10, VAR_4) > 0)
  {
   VAR_16 = 0;
   break;
  }
 }
 if (VAR_16)
  return;
 VAR_10 = (char *) VAR_0 + (VAR_1 / 2) * VAR_2;
 if (VAR_1 > 7)
 {
  VAR_9 = (char *) VAR_0;
  VAR_11 = (char *) VAR_0 + (VAR_1 - 1) * VAR_2;
  if (VAR_1 > 40)
  {
   size_t VAR_17 = (VAR_1 / 8) * VAR_2;

   VAR_9 = FUNC_2(VAR_9, VAR_9 + VAR_17, VAR_9 + 2 * VAR_17, VAR_3, VAR_4);
   VAR_10 = FUNC_2(VAR_10 - VAR_17, VAR_10, VAR_10 + VAR_17, VAR_3, VAR_4);
   VAR_11 = FUNC_2(VAR_11 - 2 * VAR_17, VAR_11 - VAR_17, VAR_11, VAR_3, VAR_4);
  }
  VAR_10 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_3, VAR_4);
 }
 FUNC_3(VAR_0, VAR_10);
 VAR_5 = VAR_6 = (char *) VAR_0 + VAR_2;
 VAR_7 = VAR_8 = (char *) VAR_0 + (VAR_1 - 1) * VAR_2;
 for (;;)
 {
  while (VAR_6 <= VAR_7 && (VAR_14 = VAR_3(VAR_6, VAR_0, VAR_4)) <= 0)
  {
   if (VAR_14 == 0)
   {
    FUNC_3(VAR_5, VAR_6);
    VAR_5 += VAR_2;
   }
   VAR_6 += VAR_2;
  }
  while (VAR_6 <= VAR_7 && (VAR_14 = VAR_3(VAR_7, VAR_0, VAR_4)) >= 0)
  {
   if (VAR_14 == 0)
   {
    FUNC_3(VAR_7, VAR_8);
    VAR_8 -= VAR_2;
   }
   VAR_7 -= VAR_2;
  }
  if (VAR_6 > VAR_7)
   break;
  FUNC_3(VAR_6, VAR_7);
  VAR_6 += VAR_2;
  VAR_7 -= VAR_2;
 }
 VAR_11 = (char *) VAR_0 + VAR_1 * VAR_2;
 VAR_12 = FUNC_0(VAR_5 - (char *) VAR_0, VAR_6 - VAR_5);
 FUNC_4(VAR_0, VAR_6 - VAR_12, VAR_12);
 VAR_12 = FUNC_0(VAR_8 - VAR_7, VAR_11 - VAR_8 - VAR_2);
 FUNC_4(VAR_6, VAR_11 - VAR_12, VAR_12);
 VAR_12 = VAR_6 - VAR_5;
 VAR_13 = VAR_8 - VAR_7;
 if (VAR_12 <= VAR_13)
 {

  if (VAR_12 > VAR_2)
   FUNC_5(VAR_0, VAR_12 / VAR_2, VAR_2, VAR_3, VAR_4);
  if (VAR_13 > VAR_2)
  {


   VAR_0 = VAR_11 - VAR_13;
   VAR_1 = VAR_13 / VAR_2;
   goto loop;
  }
 }
 else
 {

  if (VAR_13 > VAR_2)
   FUNC_5(VAR_11 - VAR_13, VAR_13 / VAR_2, VAR_2, VAR_3, VAR_4);
  if (VAR_12 > VAR_2)
  {


   VAR_1 = VAR_12 / VAR_2;
   goto loop;
  }
 }
}
