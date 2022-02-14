
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;
typedef int gfp_t ;


 struct page* FUNC_0 (struct address_space*,int ,int *,int *,int ) ;

struct page *FUNC_1(struct address_space *VAR_0,
    pgoff_t VAR_1,
    gfp_t VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, ((void*)0), ((void*)0), VAR_2);
}
