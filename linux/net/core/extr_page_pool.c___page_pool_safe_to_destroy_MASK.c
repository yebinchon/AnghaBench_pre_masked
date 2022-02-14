
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_pool {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct page_pool*) ;

__attribute__((used)) static bool FUNC_2(struct page_pool *VAR_0)
{
 s32 VAR_1 = FUNC_1(VAR_0);


 FUNC_0(VAR_1 < 0, "Negative(%d) inflight packet-pages", VAR_1);

 return (VAR_1 == 0);
}
