
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int model; } ;
typedef enum ADCSRC { ____Placeholder_ADCSRC } ADCSRC ;





 int FUNC_0 (struct hw*,int) ;
 int FUNC_1 (struct hw*,int) ;
 int FUNC_2 (struct hw*,int) ;

__attribute__((used)) static int FUNC_3(struct hw *VAR_0, enum ADCSRC VAR_1)
{
 switch (VAR_0->model) {
 case 130:
  return FUNC_0(VAR_0, VAR_1);
 case 129:
  return FUNC_2(VAR_0, VAR_1);
 case 128:
  return FUNC_2(VAR_0, VAR_1);
 default:
  return FUNC_1(VAR_0, VAR_1);
 }
}
