
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klist_iter {int * i_cur; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1(struct klist_iter *VAR_0)
{
 if (VAR_0->i_cur) {
  FUNC_0(VAR_0->i_cur, 0);
  VAR_0->i_cur = ((void*)0);
 }
}
