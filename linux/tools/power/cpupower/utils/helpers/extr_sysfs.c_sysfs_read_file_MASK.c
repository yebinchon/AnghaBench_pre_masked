
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,char*,size_t) ;

unsigned int FUNC_3(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 int VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_4 == -1)
  return 0;

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3 - 1);
 if (VAR_5 < 1) {
  FUNC_0(VAR_4);
  return 0;
 }

 VAR_2[VAR_5] = '\0';
 FUNC_0(VAR_4);

 return (unsigned int) VAR_5;
}
