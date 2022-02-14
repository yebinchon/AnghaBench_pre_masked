
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;
typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (char const*,int *,int ) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

char *FUNC_5(const char *VAR_1)
{
 char *VAR_2;
 char VAR_3[VAR_0];
 char *VAR_4 = ((void*)0), *VAR_5;
 size_t VAR_6 = 5;
 ssize_t VAR_7;

 VAR_2 = FUNC_0(VAR_1, ((void*)0), 0);
 if (!VAR_2)
  return ((void*)0);

 VAR_7 = FUNC_2(VAR_2, VAR_3, sizeof(VAR_3) - 1);
 if (VAR_7 <= 0)
  goto out;
 VAR_3[VAR_7] = '\0';


 VAR_5 = FUNC_4(VAR_3, '/');
 if (VAR_5 && (VAR_5 > VAR_3 + VAR_6)) {
  *VAR_5 = '\0';
  if (VAR_3[VAR_6 + 1] == '[')
   VAR_6++;




  VAR_4 = FUNC_3(VAR_3 + VAR_6);
 }
out:
 FUNC_1(VAR_2);
 return VAR_4;
}
