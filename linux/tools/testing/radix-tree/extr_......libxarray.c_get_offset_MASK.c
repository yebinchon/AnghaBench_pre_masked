
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_node {unsigned long shift; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned long VAR_1, struct xa_node *VAR_2)
{
 return (VAR_1 >> VAR_2->shift) & VAR_0;
}
