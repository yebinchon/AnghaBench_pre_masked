
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdspm*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_3, int VAR_4)
{
 VAR_3->control_register &= ~(VAR_0 | VAR_1);
 switch (VAR_4) {
 case 0:
  break;
 case 1:
  VAR_3->control_register |= VAR_0;
  break;
 case 2:
  VAR_3->control_register |= VAR_1;
  break;
 }
 FUNC_0(VAR_3, VAR_2, VAR_3->control_register);

 return 0;
}
