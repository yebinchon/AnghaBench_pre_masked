
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,char*,char*,size_t,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char) ;

char *
FUNC_5(const char *VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6;
 char *VAR_7;
 size_t VAR_8, VAR_9 = 0;

 if (!VAR_3)
  return ((void*)0);


 VAR_7 = FUNC_4(VAR_3, ')');
 if (!VAR_7)
  return ((void*)0);




 VAR_8 = FUNC_3(VAR_3) * 3 + 1;
 VAR_5 = FUNC_2(VAR_8);
 if (!VAR_5)
  return ((void*)0);

 VAR_5[0] = '\0';
 if (!(VAR_4 & VAR_0)) {



  VAR_6 = FUNC_0(VAR_7 + 1, ((void*)0), VAR_5, VAR_8, VAR_2);
  if (!VAR_6)
   goto error;


  VAR_9 = FUNC_3(VAR_5);
  VAR_5[VAR_9++] = ' ';
 }


 VAR_6 = FUNC_0(VAR_3, VAR_7 + 1, VAR_5 + VAR_9, VAR_8 - VAR_9, VAR_1);
 if (!VAR_6)
  goto error;

 return VAR_5;
error:
 FUNC_1(VAR_5);
 return ((void*)0);
}
