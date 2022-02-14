
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_mem_info {int type; int id; } ;
struct xdp_mem_allocator {TYPE_1__* zc_alloc; int page_pool; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int (* free ) (TYPE_1__*,unsigned long) ;} ;






 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct xdp_mem_allocator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,struct page*,int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct xdp_mem_allocator* FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (TYPE_1__*,unsigned long) ;
 int FUNC_9 (struct xdp_mem_info*,struct page*) ;
 struct page* FUNC_10 (void*) ;
 struct page* FUNC_11 (void*) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(void *VAR_2, struct xdp_mem_info *VAR_3, bool VAR_4,
    unsigned long VAR_5)
{
 struct xdp_mem_allocator *VAR_6;
 struct page *VAR_7;

 switch (VAR_3->type) {
 case 130:
  FUNC_5();

  VAR_6 = FUNC_7(VAR_0, &VAR_3->id, VAR_1);
  VAR_7 = FUNC_10(VAR_2);
  if (FUNC_1(VAR_6)) {
   VAR_4 &= !FUNC_12();
   FUNC_3(VAR_6->page_pool, VAR_7, VAR_4);
  } else {

   FUNC_0(1, "page_pool gone mem.id=%d", VAR_3->id);
   FUNC_9(VAR_3, VAR_7);
   FUNC_4(VAR_7);
  }
  FUNC_6();
  break;
 case 129:
  FUNC_2(VAR_2);
  break;
 case 131:
  VAR_7 = FUNC_11(VAR_2);
  FUNC_4(VAR_7);
  break;
 case 128:

  FUNC_5();

  VAR_6 = FUNC_7(VAR_0, &VAR_3->id, VAR_1);
  VAR_6->zc_alloc->free(VAR_6->zc_alloc, VAR_5);
  FUNC_6();
 default:

  break;
 }
}
