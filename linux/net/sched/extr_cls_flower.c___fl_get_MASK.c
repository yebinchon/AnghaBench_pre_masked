
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cls_fl_head {int handle_idr; } ;
struct cls_fl_filter {int refcnt; } ;


 struct cls_fl_filter* FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct cls_fl_filter *FUNC_4(struct cls_fl_head *VAR_0, u32 VAR_1)
{
 struct cls_fl_filter *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(&VAR_0->handle_idr, VAR_1);
 if (VAR_2 && !FUNC_3(&VAR_2->refcnt))
  VAR_2 = ((void*)0);
 FUNC_2();

 return VAR_2;
}
