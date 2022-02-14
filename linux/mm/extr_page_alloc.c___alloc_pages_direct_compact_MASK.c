
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct alloc_context {int dummy; } ;
typedef int gfp_t ;
typedef enum compact_result { ____Placeholder_compact_result } compact_result ;
typedef enum compact_priority { ____Placeholder_compact_priority } compact_priority ;


 int VAR_0 ;

__attribute__((used)) static inline struct page *
FUNC_0(gfp_t VAR_1, unsigned int VAR_2,
  unsigned int VAR_3, const struct alloc_context *VAR_4,
  enum compact_priority VAR_5, enum compact_result *VAR_6)
{
 *VAR_6 = VAR_0;
 return ((void*)0);
}
