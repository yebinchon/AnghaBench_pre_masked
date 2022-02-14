
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int dev; } ;
struct TYPE_3__ {int count; } ;
struct page_pool {TYPE_2__ p; int ring; TYPE_1__ alloc; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct page_pool*) ;
 int FUNC_2 (struct page_pool*) ;
 int FUNC_3 (struct page_pool*) ;
 int FUNC_4 (struct page_pool*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct page_pool *VAR_1)
{

 if (!FUNC_4(VAR_1))
  return;

 FUNC_0(VAR_1->alloc.count, "API usage violation");
 FUNC_0(!FUNC_6(&VAR_1->ring), "ptr_ring is not empty");


 if (!FUNC_1(VAR_1))
  FUNC_2(VAR_1);

 FUNC_5(&VAR_1->ring, ((void*)0));

 if (VAR_1->p.flags & VAR_0)
  FUNC_7(VAR_1->p.dev);

 FUNC_3(VAR_1);
}
