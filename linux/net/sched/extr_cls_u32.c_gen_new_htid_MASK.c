
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_u_hnode {int dummy; } ;
struct tc_u_common {int handle_idr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct tc_u_hnode*,int,int,int ) ;

__attribute__((used)) static u32 FUNC_1(struct tc_u_common *VAR_1, struct tc_u_hnode *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_1->handle_idr, VAR_2, 1, 0x7FF, VAR_0);
 if (VAR_3 < 0)
  return 0;
 return (VAR_3 | 0x800U) << 20;
}
