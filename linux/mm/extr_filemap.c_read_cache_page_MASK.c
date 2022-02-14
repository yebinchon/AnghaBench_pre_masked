
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 struct page* FUNC_0 (struct address_space*,int ,int (*) (void*,struct page*),void*,int ) ;
 int FUNC_1 (struct address_space*) ;

struct page *FUNC_2(struct address_space *VAR_0,
    pgoff_t VAR_1,
    int (*VAR_2)(void *, struct page *),
    void *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
   FUNC_1(VAR_0));
}
