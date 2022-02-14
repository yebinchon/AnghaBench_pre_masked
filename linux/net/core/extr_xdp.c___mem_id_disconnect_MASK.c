
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct xdp_mem_allocator {int rcu; int node; int page_pool; TYPE_1__ mem; int disconnect_cnt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct xdp_mem_allocator* FUNC_5 (int ,int*,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (struct xdp_mem_allocator*,int,int) ;

__attribute__((used)) static bool FUNC_8(int VAR_5, bool VAR_6)
{
 struct xdp_mem_allocator *VAR_7;
 bool VAR_8 = 1;

 FUNC_2(&VAR_3);

 VAR_7 = FUNC_5(VAR_2, &VAR_5, VAR_4);
 if (!VAR_7) {
  FUNC_3(&VAR_3);
  FUNC_0(1, "Request remove non-existing id(%d), driver bug?", VAR_5);
  return 1;
 }
 VAR_7->disconnect_cnt++;


 if (VAR_7->mem.type == VAR_0)
  VAR_8 = FUNC_4(VAR_7->page_pool);

 FUNC_7(VAR_7, VAR_8, VAR_6);

 if ((VAR_8 || VAR_6) &&
     !FUNC_6(VAR_2, &VAR_7->node, VAR_4))
  FUNC_1(&VAR_7->rcu, VAR_1);

 FUNC_3(&VAR_3);
 return (VAR_8|VAR_6);
}
