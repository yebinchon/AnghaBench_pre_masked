
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_state ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 struct RString* FUNC_3 (int ,char const*,size_t) ;
 struct RString* FUNC_4 (int ,char const*,size_t) ;

__attribute__((used)) static struct RString*
FUNC_5(mrb_state *VAR_2, const char *VAR_3, size_t VAR_4)
{
  if (FUNC_0(VAR_4)) {
    return FUNC_3(FUNC_1(VAR_2), VAR_3, VAR_4);
  }
  if (VAR_4 >= VAR_1) {
    FUNC_2(VAR_2, VAR_0, "string size too big");
  }
  return FUNC_4(FUNC_1(VAR_2), VAR_3, VAR_4);
}
