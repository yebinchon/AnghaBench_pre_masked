
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hdsp*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hdsp *VAR_5, int VAR_6)
{
 VAR_5->control_register &= ~VAR_1;
 switch (VAR_6) {
 case 0:
  VAR_5->control_register |= VAR_2;
  break;
 case 1:
  VAR_5->control_register |= VAR_3;
  break;
 case 2:
  VAR_5->control_register |= VAR_0;
  break;
 default:
  return -1;

 }
 FUNC_0(VAR_5, VAR_4, VAR_5->control_register);
 return 0;
}
