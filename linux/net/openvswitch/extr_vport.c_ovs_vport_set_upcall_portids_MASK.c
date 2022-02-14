
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vport_portids {int n_ids; int ids; int rn_ids; } ;
struct vport {int upcall_portids; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vport_portids*,int ) ;
 struct vport_portids* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nlattr const*) ;
 int FUNC_3 (int ,struct nlattr const*,int) ;
 struct vport_portids* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,struct vport_portids*) ;
 int FUNC_6 (int) ;

int FUNC_7(struct vport *VAR_4, const struct nlattr *VAR_5)
{
 struct vport_portids *VAR_6, *VAR_7;

 if (!FUNC_2(VAR_5) || FUNC_2(VAR_5) % sizeof(u32))
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_4->upcall_portids);

 VAR_7 = FUNC_1(sizeof(*VAR_7) + FUNC_2(VAR_5),
    VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->n_ids = FUNC_2(VAR_5) / sizeof(u32);
 VAR_7->rn_ids = FUNC_6(VAR_7->n_ids);
 FUNC_3(VAR_7->ids, VAR_5, FUNC_2(VAR_5));

 FUNC_5(VAR_4->upcall_portids, VAR_7);

 if (VAR_6)
  FUNC_0(VAR_6, VAR_3);
 return 0;
}
