
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline bool FUNC_3(struct page *VAR_0, gfp_t VAR_1)
{
 if (FUNC_2(FUNC_0(VAR_0)))
  return FUNC_1(VAR_1);

 return 1;
}
