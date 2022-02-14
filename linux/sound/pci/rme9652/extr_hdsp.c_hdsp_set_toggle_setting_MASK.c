
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdsp {int control_register; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdsp*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hdsp *VAR_1, u32 VAR_2, int VAR_3)
{
 if (VAR_3)
  VAR_1->control_register |= VAR_2;
 else
  VAR_1->control_register &= ~VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_1->control_register);

 return 0;
}
