
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef scalar_t__ wchar_t ;
typedef int pg_locale_t ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int,char const*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

int
FUNC_6(const char *VAR_2)
{
 int VAR_3 = FUNC_5(VAR_2);
 wchar_t VAR_4[VAR_1];
 Oid VAR_5 = VAR_0;
 pg_locale_t VAR_6 = 0;

 if (VAR_3 == 1 || FUNC_4(VAR_5))
  return FUNC_2(FUNC_0(VAR_2));

 FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3, VAR_6);

 return FUNC_3((wint_t) VAR_4[0]);
}
