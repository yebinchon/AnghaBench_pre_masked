
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,size_t,int ) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, char **VAR_4, int VAR_5)
{
 size_t VAR_6 = FUNC_1(VAR_3);

 if (VAR_3[VAR_6 - 1] != '"') {
  FUNC_2(VAR_5 + VAR_6, VAR_2);
  return -VAR_0;
 }
 *VAR_4 = FUNC_0(VAR_3, VAR_6 - 1, VAR_1);
 return 0;
}
