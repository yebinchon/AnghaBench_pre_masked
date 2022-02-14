
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct err_s {int * msg; scalar_t__ should_free; int level; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int *) ;

void FUNC_2(struct err_s *VAR_0)
{
 if (VAR_0->msg != ((void*)0)) {
  FUNC_1(((void*)0), VAR_0->level, "%s", VAR_0->msg);
  if (VAR_0->should_free) {
   FUNC_0(VAR_0->msg);
  }
 }
}
