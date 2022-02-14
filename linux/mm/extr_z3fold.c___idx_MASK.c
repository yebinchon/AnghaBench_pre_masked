
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z3fold_header {int first_num; } ;
typedef enum buddy { ____Placeholder_buddy } buddy ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct z3fold_header *VAR_1, enum buddy VAR_2)
{
 return (VAR_2 + VAR_1->first_num) & VAR_0;
}
