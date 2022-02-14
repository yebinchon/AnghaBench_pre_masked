
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char * FUNC_3(const char *VAR_0, int VAR_1)
{
 register int VAR_2 = FUNC_2(VAR_0)-1;
 char *VAR_3;

 if (VAR_2>1 && (VAR_0[VAR_2-1] == '\r' || VAR_0[VAR_2-1] == '\n') && VAR_0[VAR_2] == '.') {
  --VAR_2;
 }
 while (VAR_2>0 && (VAR_0[VAR_2] == '\r' || VAR_0[VAR_2] == '\n')) {
  --VAR_2;
 }
 ++VAR_2;
 VAR_3 = FUNC_1(VAR_2 + 1, VAR_1);
 FUNC_0(VAR_3, VAR_0, VAR_2);
 VAR_3[VAR_2] = '\0';

 return VAR_3;
}
