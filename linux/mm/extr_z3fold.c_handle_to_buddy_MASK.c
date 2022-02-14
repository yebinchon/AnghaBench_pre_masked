
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_header {unsigned long first_num; } ;
typedef enum buddy { ____Placeholder_buddy } buddy ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static enum buddy FUNC_1(unsigned long VAR_3)
{
 struct z3fold_header *VAR_4;
 unsigned long VAR_5;

 FUNC_0(VAR_3 & (1 << VAR_1));
 VAR_5 = *(unsigned long *)VAR_3;
 VAR_4 = (struct z3fold_header *)(VAR_5 & VAR_2);
 return (VAR_5 - VAR_4->first_num) & VAR_0;
}
