
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* is_dirty_writeback ) (struct page*,int*,int*) ;} ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct address_space* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int*,int*) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_0,
           bool *VAR_1, bool *VAR_2)
{
 struct address_space *VAR_3;





 if (!FUNC_5(VAR_0) ||
     (FUNC_0(VAR_0) && !FUNC_2(VAR_0))) {
  *VAR_1 = 0;
  *VAR_2 = 0;
  return;
 }


 *VAR_1 = FUNC_1(VAR_0);
 *VAR_2 = FUNC_3(VAR_0);


 if (!FUNC_4(VAR_0))
  return;

 VAR_3 = FUNC_6(VAR_0);
 if (VAR_3 && VAR_3->a_ops->is_dirty_writeback)
  VAR_3->a_ops->is_dirty_writeback(VAR_0, VAR_1, VAR_2);
}
