
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigma_action {int instr; } ;


 size_t FUNC_0 (size_t,int) ;



 size_t FUNC_1 (struct sigma_action*) ;

__attribute__((used)) static size_t FUNC_2(struct sigma_action *VAR_0)
{
 size_t VAR_1 = 0;

 switch (VAR_0->instr) {
 case 128:
 case 129:
 case 130:
  VAR_1 = FUNC_1(VAR_0);
  break;
 default:
  break;
 }

 VAR_1 = FUNC_0(VAR_1, 2);

 return VAR_1 + sizeof(struct sigma_action);
}
