
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_value {int s; int u; } ;
typedef enum symbol_type { ____Placeholder_symbol_type } symbol_type ;
typedef enum string_value_kind { ____Placeholder_string_value_kind } string_value_kind ;






 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,char*) ;
 void* FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static enum string_value_kind FUNC_4(const char *VAR_4,
      enum symbol_type VAR_5,
      union string_value *VAR_6)
{
 char *VAR_7;
 enum string_value_kind VAR_8;

 VAR_0 = 0;
 switch (VAR_5) {
 case 131:
 case 128:
  VAR_6->s = !FUNC_1(VAR_4, "n") ? 0 :
    !FUNC_1(VAR_4, "m") ? 1 :
    !FUNC_1(VAR_4, "y") ? 2 : -1;
  return VAR_1;
 case 129:
  VAR_6->s = FUNC_2(VAR_4, &VAR_7, 10);
  VAR_8 = VAR_1;
  break;
 case 130:
  VAR_6->u = FUNC_3(VAR_4, &VAR_7, 16);
  VAR_8 = VAR_3;
  break;
 default:
  VAR_6->s = FUNC_2(VAR_4, &VAR_7, 0);
  VAR_8 = VAR_1;
  break;
 }
 return !VAR_0 && !*VAR_7 && VAR_7 > VAR_4 && FUNC_0(VAR_7[-1])
        ? VAR_8 : VAR_2;
}
