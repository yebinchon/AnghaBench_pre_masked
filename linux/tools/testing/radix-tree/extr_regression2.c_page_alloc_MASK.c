
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;


 struct page* FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static struct page *FUNC_1(void)
{
 struct page *VAR_1;
 VAR_1 = FUNC_0(sizeof(struct page));
 VAR_1->index = VAR_0++;

 return VAR_1;
}
