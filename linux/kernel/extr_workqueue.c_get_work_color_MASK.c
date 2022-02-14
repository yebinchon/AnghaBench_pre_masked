
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (struct work_struct*) ;

__attribute__((used)) static int FUNC_1(struct work_struct *VAR_2)
{
 return (*FUNC_0(VAR_2) >> VAR_1) &
  ((1 << VAR_0) - 1);
}
