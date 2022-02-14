
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int dummy; } ;
struct shrink_control {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_4 (int *,int *) ;

__attribute__((used)) static unsigned long FUNC_5(struct shrinker *VAR_3,
           struct shrink_control *VAR_4)
{
 if (FUNC_2(&VAR_2, 1, 0) == 1) {
  struct page *VAR_5 = FUNC_4(&VAR_1, ((void*)0));
  FUNC_0(VAR_5 == ((void*)0));
  FUNC_1(VAR_5, FUNC_3(VAR_5));
  return VAR_0;
 }

 return 0;
}
