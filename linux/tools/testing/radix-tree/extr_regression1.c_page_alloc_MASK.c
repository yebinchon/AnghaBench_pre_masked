
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int count; int index; int lock; } ;


 struct page* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct page *FUNC_2(int VAR_0)
{
 struct page *VAR_1;
 VAR_1 = FUNC_0(sizeof(struct page));
 VAR_1->count = 1;
 VAR_1->index = VAR_0;
 FUNC_1(&VAR_1->lock, ((void*)0));

 return VAR_1;
}
