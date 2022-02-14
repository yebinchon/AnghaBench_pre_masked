
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int flags; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

struct page *FUNC_5(struct mm_struct *VAR_2)
{
 if (FUNC_4(VAR_0, &VAR_2->flags))
  return FUNC_0(VAR_1);

 if (!FUNC_1())
  return ((void*)0);

 if (FUNC_3(VAR_0, &VAR_2->flags))
  FUNC_2();

 return FUNC_0(VAR_1);
}
