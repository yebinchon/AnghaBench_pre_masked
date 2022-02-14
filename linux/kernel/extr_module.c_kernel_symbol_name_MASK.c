
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_symbol {char const* name; int name_offset; } ;


 char const* FUNC_0 (int *) ;

__attribute__((used)) static const char *FUNC_1(const struct kernel_symbol *VAR_0)
{



 return VAR_0->name;

}
