
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char**,char*) ;
 int FUNC_1 (char const*,unsigned int*,int,unsigned int) ;
 char* VAR_1 ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (char*,int *,int) ;

int FUNC_4(int VAR_2, char **VAR_3)
{
 const char *VAR_4 = ((void*)0);
 unsigned int VAR_5[VAR_0];
 unsigned int VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_9 = 0;
 while ((VAR_8 = FUNC_0(VAR_2, VAR_3, "c:n:o:?")) != -1) {
  switch (VAR_8) {
  case 'c':
   VAR_6 = FUNC_3(VAR_1, ((void*)0), 10);
   break;
  case 'n':
   VAR_4 = VAR_1;
   break;
  case 'o':
   VAR_5[VAR_9] = FUNC_3(VAR_1, ((void*)0), 10);
   VAR_9++;
   break;
  case '?':
   FUNC_2();
   return -1;
  }
 }
 VAR_7 = VAR_9;

 if (!VAR_4 || !VAR_7) {
  FUNC_2();
  return -1;
 }
 return FUNC_1(VAR_4, VAR_5, VAR_7, VAR_6);
}
