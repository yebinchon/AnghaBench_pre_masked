
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_pool {int dummy; } ;
struct zs_compact_control {int obj_idx; struct page* s_page; struct page* d_page; } ;
struct size_class {int dummy; } ;
struct page {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct size_class*,struct page*,int*) ;
 struct page* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (struct size_class*,unsigned long) ;
 unsigned long FUNC_6 (struct size_class*,int ,unsigned long) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct size_class*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_10 (struct size_class*,int ) ;

__attribute__((used)) static int FUNC_11(struct zs_pool *VAR_2, struct size_class *VAR_3,
    struct zs_compact_control *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 unsigned long VAR_7;
 struct page *VAR_8 = VAR_4->s_page;
 struct page *VAR_9 = VAR_4->d_page;
 int VAR_10 = VAR_4->obj_idx;
 int VAR_11 = 0;

 while (1) {
  VAR_7 = FUNC_1(VAR_3, VAR_8, &VAR_10);
  if (!VAR_7) {
   VAR_8 = FUNC_2(VAR_8);
   if (!VAR_8)
    break;
   VAR_10 = 0;
   continue;
  }


  if (FUNC_10(VAR_3, FUNC_3(VAR_9))) {
   FUNC_8(VAR_7);
   VAR_11 = -VAR_0;
   break;
  }

  VAR_5 = FUNC_4(VAR_7);
  VAR_6 = FUNC_6(VAR_3, FUNC_3(VAR_9), VAR_7);
  FUNC_9(VAR_3, VAR_6, VAR_5);
  VAR_10++;






  VAR_6 |= FUNC_0(VAR_1);
  FUNC_7(VAR_7, VAR_6);
  FUNC_8(VAR_7);
  FUNC_5(VAR_3, VAR_5);
 }


 VAR_4->s_page = VAR_8;
 VAR_4->obj_idx = VAR_10;

 return VAR_11;
}
