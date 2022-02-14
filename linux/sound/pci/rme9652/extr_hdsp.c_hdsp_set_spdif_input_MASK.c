
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hdsp*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hdsp *VAR_2, int VAR_3)
{
 VAR_2->control_register &= ~VAR_0;
 VAR_2->control_register |= FUNC_0(VAR_3);
 FUNC_1(VAR_2, VAR_1, VAR_2->control_register);
 return 0;
}
