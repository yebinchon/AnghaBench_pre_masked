
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {unsigned long* pageblock_flags; } ;


 int FUNC_0 (unsigned long) ;
 TYPE_1__* FUNC_1 (struct page*) ;
 unsigned long* FUNC_2 (int ) ;

__attribute__((used)) static inline unsigned long *FUNC_3(struct page *VAR_0,
       unsigned long VAR_1)
{



 return FUNC_1(VAR_0)->pageblock_flags;

}
