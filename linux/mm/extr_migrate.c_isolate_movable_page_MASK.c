
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int isolate_mode_t ;
struct TYPE_2__ {int (* isolate_page ) (struct page*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 struct address_space* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,int ) ;
 int FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct page*) ;

int FUNC_13(struct page *VAR_1, isolate_mode_t VAR_2)
{
 struct address_space *VAR_3;
 if (FUNC_11(!FUNC_6(VAR_1)))
  goto out;






 if (FUNC_11(!FUNC_4(VAR_1)))
  goto out_putpage;
 if (FUNC_11(!FUNC_10(VAR_1)))
  goto out_putpage;

 if (!FUNC_1(VAR_1) || FUNC_0(VAR_1))
  goto out_no_isolated;

 VAR_3 = FUNC_7(VAR_1);
 FUNC_2(!VAR_3, VAR_1);

 if (!VAR_3->a_ops->isolate_page(VAR_1, VAR_2))
  goto out_no_isolated;


 FUNC_3(FUNC_0(VAR_1));
 FUNC_5(VAR_1);
 FUNC_12(VAR_1);

 return 0;

out_no_isolated:
 FUNC_12(VAR_1);
out_putpage:
 FUNC_8(VAR_1);
out:
 return -VAR_0;
}
