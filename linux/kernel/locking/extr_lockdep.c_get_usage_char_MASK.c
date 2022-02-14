
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class {int usage_mask; } ;
typedef enum lock_usage_bit { ____Placeholder_lock_usage_bit } lock_usage_bit ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static char FUNC_1(struct lock_class *VAR_1, enum lock_usage_bit VAR_2)
{




 char VAR_3 = '.';
 if (VAR_1->usage_mask & FUNC_0(VAR_2 + VAR_0)) {
  VAR_3 = '+';
  if (VAR_1->usage_mask & FUNC_0(VAR_2))
   VAR_3 = '?';
 } else if (VAR_1->usage_mask & FUNC_0(VAR_2))
  VAR_3 = '-';

 return VAR_3;
}
