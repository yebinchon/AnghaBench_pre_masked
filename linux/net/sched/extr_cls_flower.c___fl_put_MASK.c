
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cls_fl_filter {int rwork; int exts; int refcnt; } ;


 int FUNC_0 (struct cls_fl_filter*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct cls_fl_filter *VAR_1)
{
 if (!FUNC_1(&VAR_1->refcnt))
  return;

 if (FUNC_2(&VAR_1->exts))
  FUNC_3(&VAR_1->rwork, VAR_0);
 else
  FUNC_0(VAR_1);
}
