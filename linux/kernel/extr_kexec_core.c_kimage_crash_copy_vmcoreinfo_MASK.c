
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kimage {scalar_t__ type; void* vmcoreinfo_data_copy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 struct page* FUNC_1 (struct kimage*,int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (struct page**,int,int ,int ) ;

int FUNC_4(struct kimage *VAR_4)
{
 struct page *VAR_5;
 void *VAR_6;

 if (VAR_4->type != VAR_1)
  return 0;
 VAR_5 = FUNC_1(VAR_4, 0);
 if (!VAR_5) {
  FUNC_2("Could not allocate vmcoreinfo buffer\n");
  return -VAR_0;
 }
 VAR_6 = FUNC_3(&VAR_5, 1, VAR_3, VAR_2);
 if (!VAR_6) {
  FUNC_2("Could not vmap vmcoreinfo buffer\n");
  return -VAR_0;
 }

 VAR_4->vmcoreinfo_data_copy = VAR_6;
 FUNC_0(VAR_6);

 return 0;
}
