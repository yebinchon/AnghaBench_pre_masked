
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (size_t) ;
 struct RString* FUNC_1 (struct RString*,char const*,size_t) ;
 struct RString* FUNC_2 (int *,struct RString*,char const*,size_t) ;

__attribute__((used)) static struct RString*
FUNC_3(mrb_state *VAR_0, struct RString *VAR_1, const char *VAR_2, size_t VAR_3)
{
  if (FUNC_0(VAR_3)) {
    return FUNC_1(VAR_1, VAR_2, VAR_3);
  }
  else {
    return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  }
}
