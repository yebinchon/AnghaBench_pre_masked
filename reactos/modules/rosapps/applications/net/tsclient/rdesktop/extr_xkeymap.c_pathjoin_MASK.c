
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 VAR_3 = FUNC_3(VAR_0 * 2 + 1);

 if (VAR_2[0] == '/')
 {
  FUNC_2(VAR_3, VAR_2, VAR_0);
 }
 else
 {
  FUNC_2(VAR_3, VAR_1, VAR_0);
  FUNC_0(VAR_3, "/");
  FUNC_1(VAR_3, VAR_2, VAR_0);
 }
 return VAR_3;
}
