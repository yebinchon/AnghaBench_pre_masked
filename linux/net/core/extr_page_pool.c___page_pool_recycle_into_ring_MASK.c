
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_pool {int ring; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,struct page*) ;
 int FUNC_2 (int *,struct page*) ;

__attribute__((used)) static bool FUNC_3(struct page_pool *VAR_0,
       struct page *VAR_1)
{
 int VAR_2;

 if (FUNC_0())
  VAR_2 = FUNC_1(&VAR_0->ring, VAR_1);
 else
  VAR_2 = FUNC_2(&VAR_0->ring, VAR_1);

 return (VAR_2 == 0) ? 1 : 0;
}
