
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_item {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct rmap_item*) ;
 int FUNC_1 (struct rmap_item*,struct page*,struct page*) ;

__attribute__((used)) static struct page *FUNC_2(struct rmap_item *VAR_0,
        struct page *VAR_1,
        struct rmap_item *VAR_2,
        struct page *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, ((void*)0));
 if (!VAR_4) {
  VAR_4 = FUNC_1(VAR_2,
       VAR_3, VAR_1);




  if (VAR_4)
   FUNC_0(VAR_0);
 }
 return VAR_4 ? ((void*)0) : VAR_1;
}
