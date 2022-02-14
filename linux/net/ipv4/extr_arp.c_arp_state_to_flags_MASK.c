
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(struct neighbour *VAR_4)
{
 if (VAR_4->nud_state&VAR_2)
  return VAR_1 | VAR_0;
 else if (VAR_4->nud_state&VAR_3)
  return VAR_0;
 else
  return 0;
}
