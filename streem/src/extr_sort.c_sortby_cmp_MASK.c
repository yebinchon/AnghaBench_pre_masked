
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sortby_value {int v; } ;


 scalar_t__ FUNC_0 (int ) ;
 double FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const void* VAR_0, const void* VAR_1)
{
  struct sortby_value* VAR_2 = (struct sortby_value*)VAR_0;
  struct sortby_value* VAR_3 = (struct sortby_value*)VAR_1;
  double VAR_4, VAR_5;

  if (FUNC_0(VAR_2->v)) {
    VAR_4 = FUNC_1(VAR_2->v);
  }
  else {
    if (FUNC_0(VAR_3->v)) {
      return 1;
    }
    return 0;
  }
  if (FUNC_0(VAR_3->v)) {
    VAR_5 = FUNC_1(VAR_3->v);
  }
  else {
    return -1;
  }
  if(VAR_4 > VAR_5)
    return 1;
  else if(VAR_4 < VAR_5)
    return -1;
  return 0;
}
