
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_flags_t ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct file*) ;

__attribute__((used)) static inline int FUNC_1(struct file *VAR_3, vm_flags_t VAR_4)
{




 if (VAR_3 && FUNC_0(VAR_3))
  return 0;

 return (VAR_4 & (VAR_0 | VAR_1 | VAR_2)) == VAR_2;
}
