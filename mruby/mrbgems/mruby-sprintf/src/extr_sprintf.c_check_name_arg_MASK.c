
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*,size_t,...) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_1, int VAR_2, const char *VAR_3, size_t VAR_4)
{
  if (VAR_2 > 0) {
    FUNC_0(VAR_1, VAR_0, "named%l after unnumbered(%d)",
               VAR_3, VAR_4, VAR_2);
  }
  if (VAR_2 == -1) {
    FUNC_0(VAR_1, VAR_0, "named%l after numbered", VAR_3, VAR_4);
  }
}
