
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gssx_arg_accept_sec_context {int pages; int npages; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct gssx_arg_accept_sec_context *VAR_4)
{
 VAR_4->npages = FUNC_0(VAR_2 * 4, VAR_3);
 VAR_4->pages = FUNC_1(VAR_4->npages, sizeof(struct page *), VAR_1);




 if (!VAR_4->pages)
  return -VAR_0;
 return 0;
}
