
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {void (* freepage ) (struct page*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static void FUNC_6(struct address_space *VAR_1,
    struct page *VAR_2)
{
 void (*VAR_3)(struct page *);

 VAR_3 = VAR_1->a_ops->freepage;
 if (VAR_3)
  VAR_3(VAR_2);

 if (FUNC_1(VAR_2) && !FUNC_0(VAR_2)) {
  FUNC_4(VAR_2, VAR_0);
  FUNC_2(FUNC_3(VAR_2) <= 0, VAR_2);
 } else {
  FUNC_5(VAR_2);
 }
}
