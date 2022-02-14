
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int isolate_mode_t ;
struct TYPE_2__ {scalar_t__ migratepage; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct page*) ;
 struct address_space* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;

int FUNC_11(struct page *VAR_5, isolate_mode_t VAR_6)
{
 int VAR_7 = -VAR_1;


 if (!FUNC_2(VAR_5))
  return VAR_7;


 if (FUNC_3(VAR_5) && !(VAR_6 & VAR_3))
  return VAR_7;

 VAR_7 = -VAR_0;
 if (VAR_6 & VAR_2) {

  if (FUNC_4(VAR_5))
   return VAR_7;

  if (FUNC_1(VAR_5)) {
   struct address_space *VAR_8;
   bool VAR_9;
   if (!FUNC_9(VAR_5))
    return VAR_7;

   VAR_8 = FUNC_8(VAR_5);
   VAR_9 = !VAR_8 || VAR_8->a_ops->migratepage;
   FUNC_10(VAR_5);
   if (!VAR_9)
    return VAR_7;
  }
 }

 if ((VAR_6 & VAR_4) && FUNC_7(VAR_5))
  return VAR_7;

 if (FUNC_6(FUNC_5(VAR_5))) {





  FUNC_0(VAR_5);
  VAR_7 = 0;
 }

 return VAR_7;
}
