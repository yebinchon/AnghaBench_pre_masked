
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {TYPE_1__* reclaim_state; } ;
struct TYPE_3__ {int reclaimed_slab; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, int VAR_3)
{
 struct page *VAR_4 = FUNC_3(VAR_2);

 if (VAR_1->reclaim_state)
  VAR_1->reclaim_state->reclaimed_slab += 1 << VAR_3;

 FUNC_1(FUNC_2(VAR_4), VAR_0,
       -(1 << VAR_3));
 FUNC_0(VAR_4, VAR_3);
}
