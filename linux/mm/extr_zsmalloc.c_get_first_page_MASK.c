
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {struct page* first_page; } ;
struct page {int dummy; } ;


 int FUNC_0 (int,struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static inline struct page *FUNC_2(struct zspage *VAR_0)
{
 struct page *VAR_1 = VAR_0->first_page;

 FUNC_0(!FUNC_1(VAR_1), VAR_1);
 return VAR_1;
}
