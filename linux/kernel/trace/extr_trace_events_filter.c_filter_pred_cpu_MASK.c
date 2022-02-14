
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_pred {int val; int op; } ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct filter_pred *VAR_0, void *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0();
 VAR_3 = VAR_0->val;

 switch (VAR_0->op) {
 case 133:
  return VAR_2 == VAR_3;
 case 128:
  return VAR_2 != VAR_3;
 case 129:
  return VAR_2 < VAR_3;
 case 130:
  return VAR_2 <= VAR_3;
 case 131:
  return VAR_2 > VAR_3;
 case 132:
  return VAR_2 >= VAR_3;
 default:
  return 0;
 }
}
