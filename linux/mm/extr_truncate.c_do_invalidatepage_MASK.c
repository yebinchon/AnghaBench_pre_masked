
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_2__* mapping; } ;
struct TYPE_4__ {TYPE_1__* a_ops; } ;
struct TYPE_3__ {void (* invalidatepage ) (struct page*,unsigned int,unsigned int) ;} ;


 void FUNC_0 (struct page*,unsigned int,unsigned int) ;
 void FUNC_1 (struct page*,unsigned int,unsigned int) ;

void FUNC_2(struct page *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 void (*VAR_3)(struct page *, unsigned int, unsigned int);

 VAR_3 = VAR_0->mapping->a_ops->invalidatepage;




 if (VAR_3)
  (*VAR_3)(VAR_0, VAR_1, VAR_2);
}
