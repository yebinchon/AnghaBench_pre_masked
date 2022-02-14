
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_descriptor {int type_info; } ;



__attribute__((used)) static unsigned FUNC_0(struct type_descriptor *VAR_0)
{
 return 1 << (VAR_0->type_info >> 1);
}
