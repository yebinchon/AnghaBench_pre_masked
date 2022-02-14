
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdsp {int control_register; } ;



__attribute__((used)) static int FUNC_0(struct hdsp *VAR_0, u32 VAR_1)
{
 return (VAR_0->control_register & VAR_1) ? 1 : 0;
}
