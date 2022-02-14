
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ext {size_t end; size_t pos; } ;



__attribute__((used)) static bool FUNC_0(struct aa_ext *VAR_0, size_t VAR_1)
{
 return (VAR_1 <= VAR_0->end - VAR_0->pos);
}
