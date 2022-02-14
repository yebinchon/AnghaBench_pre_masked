
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, char VAR_1[], int VAR_2, const char *VAR_3)
{

 char *VAR_4 = FUNC_1(VAR_3, '+');
 if (VAR_4) FUNC_0(VAR_1, VAR_4+1, VAR_2);
 else FUNC_0(VAR_1, VAR_3, VAR_2);
 VAR_4 = FUNC_2(VAR_1, '-');
 if (VAR_4) *VAR_4 = 0;
}
