
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct page*,TYPE_1__,int) ;
 TYPE_1__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,TYPE_1__) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct page *VAR_3)
{
 swp_entry_t VAR_4;
 int VAR_5;

 FUNC_2(!FUNC_0(VAR_3), VAR_3);
 FUNC_2(!FUNC_1(VAR_3), VAR_3);

 VAR_4 = FUNC_4(VAR_3);
 if (!VAR_4.val)
  return 0;
 VAR_5 = FUNC_3(VAR_3, VAR_4,
   VAR_0|VAR_1|VAR_2);
 if (VAR_5)




  goto fail;
 FUNC_6(VAR_3);

 return 1;

fail:
 FUNC_5(VAR_3, VAR_4);
 return 0;
}
