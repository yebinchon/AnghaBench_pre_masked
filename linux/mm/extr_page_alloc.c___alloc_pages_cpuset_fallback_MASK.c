
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct alloc_context {int dummy; } ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 struct page* FUNC_0 (int ,unsigned int,unsigned int,struct alloc_context const*) ;

__attribute__((used)) static inline struct page *
FUNC_1(gfp_t VAR_1, unsigned int VAR_2,
         unsigned int VAR_3,
         const struct alloc_context *VAR_4)
{
 struct page *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2,
   VAR_3|VAR_0, VAR_4);




 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_1, VAR_2,
    VAR_3, VAR_4);

 return VAR_5;
}
