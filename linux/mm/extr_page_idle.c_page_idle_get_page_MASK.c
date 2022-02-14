
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {int lru_lock; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 TYPE_1__* FUNC_2 (struct page*) ;
 struct page* FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct page *FUNC_9(unsigned long VAR_0)
{
 struct page *VAR_1;
 pg_data_t *VAR_2;

 if (!FUNC_4(VAR_0))
  return ((void*)0);

 VAR_1 = FUNC_3(VAR_0);
 if (!VAR_1 || !FUNC_0(VAR_1) ||
     !FUNC_1(VAR_1))
  return ((void*)0);

 VAR_2 = FUNC_2(VAR_1);
 FUNC_6(&VAR_2->lru_lock);
 if (FUNC_8(!FUNC_0(VAR_1))) {
  FUNC_5(VAR_1);
  VAR_1 = ((void*)0);
 }
 FUNC_7(&VAR_2->lru_lock);
 return VAR_1;
}
