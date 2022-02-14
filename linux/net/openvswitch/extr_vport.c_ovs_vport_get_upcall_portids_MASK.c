
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vport_portids {int n_ids; int * ids; } ;
struct vport {TYPE_1__* dp; int upcall_portids; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int user_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int,void*) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 struct vport_portids* FUNC_2 (int ) ;

int FUNC_3(const struct vport *VAR_2,
     struct sk_buff *VAR_3)
{
 struct vport_portids *VAR_4;

 VAR_4 = FUNC_2(VAR_2->upcall_portids);

 if (VAR_2->dp->user_features & VAR_0)
  return FUNC_0(VAR_3, VAR_1,
          VAR_4->n_ids * sizeof(u32), (void *)VAR_4->ids);
 else
  return FUNC_1(VAR_3, VAR_1, VAR_4->ids[0]);
}
