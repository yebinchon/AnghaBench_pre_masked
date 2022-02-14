
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_hook {scalar_t__ is_64bit_jump; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline size_t FUNC_0(struct func_hook *VAR_2)
{
 return VAR_2->is_64bit_jump ? VAR_1 : VAR_0;
}
