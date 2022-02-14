
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport_parms {int upcall_portids; int port_no; int dp; } ;
struct vport_ops {int dummy; } ;
struct vport {int dp_hash_node; struct vport_ops const* ops; int port_no; int dp; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vport* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct vport*) ;
 struct vport* FUNC_4 (size_t,int ) ;
 scalar_t__ FUNC_5 (struct vport*,int ) ;

struct vport *FUNC_6(int VAR_4, const struct vport_ops *VAR_5,
     const struct vport_parms *VAR_6)
{
 struct vport *VAR_7;
 size_t VAR_8;

 VAR_8 = sizeof(struct vport);
 if (VAR_4) {
  VAR_8 = FUNC_0(VAR_8, VAR_3);
  VAR_8 += VAR_4;
 }

 VAR_7 = FUNC_4(VAR_8, VAR_2);
 if (!VAR_7)
  return FUNC_1(-VAR_1);

 VAR_7->dp = VAR_6->dp;
 VAR_7->port_no = VAR_6->port_no;
 VAR_7->ops = VAR_5;
 FUNC_2(&VAR_7->dp_hash_node);

 if (FUNC_5(VAR_7, VAR_6->upcall_portids)) {
  FUNC_3(VAR_7);
  return FUNC_1(-VAR_0);
 }

 return VAR_7;
}
