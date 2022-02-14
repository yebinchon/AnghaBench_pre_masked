
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct alloc_context {int dummy; } ;
typedef int gfp_t ;


 unsigned long FUNC_0 (int ,unsigned int,struct alloc_context const*) ;
 int FUNC_1 (int *) ;
 struct page* FUNC_2 (int ,unsigned int,unsigned int,struct alloc_context const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct alloc_context const*,int) ;

__attribute__((used)) static inline struct page *
FUNC_5(gfp_t VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, const struct alloc_context *VAR_3,
  unsigned long *VAR_4)
{
 struct page *VAR_5 = ((void*)0);
 bool VAR_6 = 0;

 *VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3);
 if (FUNC_3(!(*VAR_4)))
  return ((void*)0);

retry:
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);






 if (!VAR_5 && !VAR_6) {
  FUNC_4(VAR_3, 0);
  FUNC_1(((void*)0));
  VAR_6 = 1;
  goto retry;
 }

 return VAR_5;
}
