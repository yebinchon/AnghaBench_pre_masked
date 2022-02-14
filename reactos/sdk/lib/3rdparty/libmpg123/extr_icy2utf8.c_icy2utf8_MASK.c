
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 char* FUNC_0 (char const*) ;
 size_t* VAR_0 ;
 int FUNC_1 (size_t*) ;
 scalar_t__ FUNC_2 (char const*) ;
 size_t* FUNC_3 (size_t) ;
 char* FUNC_4 (size_t*,size_t) ;
 int FUNC_5 (char const*) ;
 size_t* VAR_1 ;

char *
FUNC_6(const char *VAR_2, int VAR_3)
{
 const uint8_t *VAR_4 = (const uint8_t *)VAR_2;
 size_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint8_t VAR_9, *VAR_10;
 char *VAR_11;



 if(!VAR_3 && FUNC_2(VAR_2)) return (FUNC_0(VAR_2));

 VAR_5 = FUNC_5(VAR_2) + 1;

 if ((VAR_10 = FUNC_3(VAR_5 * 3)) == ((void*)0))
  return (((void*)0));

 VAR_7 = 0;
 VAR_6 = 0;
 while (VAR_7 < VAR_5) {
  VAR_9 = VAR_4[VAR_7++];
  VAR_8 = VAR_1[VAR_9];
  while (VAR_8 < VAR_1[VAR_9 + 1])
   VAR_10[VAR_6++] = VAR_0[VAR_8++];
 }


 if ((VAR_11 = FUNC_4(VAR_10, VAR_6)) == ((void*)0)) {
  FUNC_1(VAR_10);
  return (((void*)0));
 }
 return (VAR_11);
}
