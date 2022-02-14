
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct statement {int dummy; } ;
typedef enum ECPG_statement_type { ____Placeholder_ECPG_statement_type } ECPG_statement_type ;


 int FUNC_0 (struct statement*) ;
 int FUNC_1 (struct statement*) ;
 int FUNC_2 (struct statement*) ;
 int FUNC_3 (int const,int const,int const,char const*,int const,int,char const*,int ,struct statement**) ;
 int FUNC_4 (struct statement*) ;
 int FUNC_5 (struct statement*,int) ;

bool
FUNC_6(const int VAR_0, const int VAR_1, const int VAR_2, const char *VAR_3, const bool VAR_4, const int VAR_5, const char *VAR_6, va_list VAR_7)
{
 struct statement *VAR_8 = ((void*)0);

 if (!FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, (enum ECPG_statement_type) VAR_5,
        VAR_6, VAR_7, &VAR_8))
  goto fail;

 if (!FUNC_1(VAR_8))
  goto fail;

 if (!FUNC_0(VAR_8))
  goto fail;

 if (!FUNC_4(VAR_8))
  goto fail;

 if (!FUNC_5(VAR_8, 1))
  goto fail;

 FUNC_2(VAR_8);
 return 1;

fail:
 FUNC_2(VAR_8);
 return 0;
}
