
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char**,char*) ;
 int FUNC_1 (char const*,unsigned int,scalar_t__,scalar_t__,unsigned int) ;
 char* VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 unsigned int FUNC_4 (char*,int *,int) ;

int FUNC_5(int VAR_7, char **VAR_8)
{
 const char *VAR_9 = ((void*)0);
 unsigned int VAR_10 = -1;
 unsigned int VAR_11 = 0;
 uint32_t VAR_12 = VAR_3;
 uint32_t VAR_13 = 0;
 int VAR_14;

 while ((VAR_14 = FUNC_0(VAR_7, VAR_8, "c:n:o:dsrf?")) != -1) {
  switch (VAR_14) {
  case 'c':
   VAR_11 = FUNC_4(VAR_6, ((void*)0), 10);
   break;
  case 'n':
   VAR_9 = VAR_6;
   break;
  case 'o':
   VAR_10 = FUNC_4(VAR_6, ((void*)0), 10);
   break;
  case 'd':
   VAR_12 |= VAR_4;
   break;
  case 's':
   VAR_12 |= VAR_5;
   break;
  case 'r':
   VAR_13 |= VAR_2;
   break;
  case 'f':
   VAR_13 |= VAR_1;
   break;
  case '?':
   FUNC_2();
   return -1;
  }
 }

 if (!VAR_9 || VAR_10 == -1) {
  FUNC_2();
  return -1;
 }
 if (!VAR_13) {
  FUNC_3("No flags specified, listening on both rising and "
         "falling edges\n");
  VAR_13 = VAR_0;
 }
 return FUNC_1(VAR_9, VAR_10, VAR_12,
         VAR_13, VAR_11);
}
