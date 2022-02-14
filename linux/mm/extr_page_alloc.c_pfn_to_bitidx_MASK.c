
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int zone_start_pfn; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct page*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct page *VAR_4, unsigned long VAR_5)
{




 VAR_5 = VAR_5 - FUNC_1(FUNC_0(VAR_4)->zone_start_pfn, VAR_2);
 return (VAR_5 >> VAR_3) * VAR_0;

}
