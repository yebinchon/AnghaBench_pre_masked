
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {void* mapping; } ;
typedef void address_space ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 void* FUNC_4 (TYPE_1__) ;
 scalar_t__ FUNC_5 (int ) ;

struct address_space *FUNC_6(struct page *VAR_2)
{
 struct address_space *VAR_3;

 VAR_2 = FUNC_2(VAR_2);


 if (FUNC_5(FUNC_0(VAR_2)))
  return ((void*)0);

 if (FUNC_5(FUNC_1(VAR_2))) {
  swp_entry_t VAR_4;

  VAR_4.val = FUNC_3(VAR_2);
  return FUNC_4(VAR_4);
 }

 VAR_3 = VAR_2->mapping;
 if ((unsigned long)VAR_3 & VAR_0)
  return ((void*)0);

 return (void *)((unsigned long)VAR_3 & ~VAR_1);
}
