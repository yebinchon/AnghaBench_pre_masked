
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_sym {int address; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return ((struct kernel_sym *)VAR_0)->address -
        ((struct kernel_sym *)VAR_1)->address;
}
