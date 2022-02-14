
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_font ;
typedef int fz_context ;


 char* FUNC_0 (int *,int *) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static const char *
FUNC_2(fz_context *VAR_0, fz_font *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_0, VAR_1);
 const char *VAR_3 = FUNC_1(VAR_2, '+');
 return VAR_3 ? VAR_3 + 1 : VAR_2;
}
