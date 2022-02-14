
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct cma_mem {int n; struct page* p; } ;
struct cma {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cma*,struct cma_mem*) ;
 struct page* FUNC_1 (struct cma*,int,int ,int) ;
 int FUNC_2 (struct cma_mem*) ;
 struct cma_mem* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct cma *VAR_2, int VAR_3)
{
 struct cma_mem *VAR_4;
 struct page *VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2, VAR_3, 0, 0);
 if (!VAR_5) {
  FUNC_2(VAR_4);
  return -VAR_0;
 }

 VAR_4->p = VAR_5;
 VAR_4->n = VAR_3;

 FUNC_0(VAR_2, VAR_4);

 return 0;
}
