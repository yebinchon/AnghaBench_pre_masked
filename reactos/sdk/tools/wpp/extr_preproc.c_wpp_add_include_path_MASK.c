
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char** VAR_1 ;
 int VAR_2 ;
 char** FUNC_1 (char**,int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ) ;

int FUNC_5(const char *VAR_3)
{
 char *VAR_4;
 char *VAR_5 = FUNC_2(VAR_3);
 if(!VAR_5)
  return 1;

 VAR_4 = FUNC_4(VAR_5, VAR_0);
 while(VAR_4)
 {
  if(*VAR_4) {
   char *VAR_6;
   char *VAR_7;
   char **VAR_8;

   VAR_6 = FUNC_2(VAR_4);
   if(!VAR_6)
   {
    FUNC_0(VAR_5);
    return 1;
   }
   for(VAR_7 = VAR_6; *VAR_7; VAR_7++)
   {

    if(*VAR_7 == '\\')
     *VAR_7 = '/';
   }

   if(*(VAR_7 = VAR_6 + FUNC_3(VAR_6)-1) == '/')
    *VAR_7 = '\0';


   VAR_8 = FUNC_1(VAR_1, (VAR_2+1) * sizeof(*VAR_1));
   if(!VAR_8)
   {
    FUNC_0(VAR_6);
    FUNC_0(VAR_5);
    return 1;
   }
   VAR_1 = VAR_8;
   VAR_1[VAR_2] = VAR_6;
   VAR_2++;
  }
  VAR_4 = FUNC_4(((void*)0), VAR_0);
 }
 FUNC_0(VAR_5);
 return 0;
}
