
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vport_portids {int n_ids; scalar_t__* ids; int rn_ids; } ;
struct vport {int upcall_portids; } ;
struct sk_buff {int dummy; } ;


 struct vport_portids* FUNC_0 (int ) ;
 int FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (struct sk_buff*) ;

u32 FUNC_3(const struct vport *VAR_0, struct sk_buff *VAR_1)
{
 struct vport_portids *VAR_2;
 u32 VAR_3;
 u32 VAR_4;

 VAR_2 = FUNC_0(VAR_0->upcall_portids);

 if (VAR_2->n_ids == 1 && VAR_2->ids[0] == 0)
  return 0;

 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = VAR_4 - VAR_2->n_ids * FUNC_1(VAR_4, VAR_2->rn_ids);
 return VAR_2->ids[VAR_3];
}
