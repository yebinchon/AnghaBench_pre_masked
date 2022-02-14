
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_header {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline struct z3fold_header *FUNC_0(unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_2;

 if (!(VAR_3 & (1 << VAR_0)))
  VAR_3 = *(unsigned long *)VAR_2;

 return (struct z3fold_header *)(VAR_3 & VAR_1);
}
