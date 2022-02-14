
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport_parms {int type; } ;
struct vport_ops {int owner; struct vport* (* create ) (struct vport_parms const*) ;} ;
struct vport {int hash_node; int dp; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vport* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vport*) ;
 struct hlist_head* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct hlist_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct vport_ops* FUNC_8 (struct vport_parms const*) ;
 int FUNC_9 (struct vport*) ;
 int FUNC_10 (char*,int ) ;
 struct vport* FUNC_11 (struct vport_parms const*) ;
 int FUNC_12 (int ) ;

struct vport *FUNC_13(const struct vport_parms *VAR_2)
{
 struct vport_ops *VAR_3;
 struct vport *VAR_4;

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3) {
  struct hlist_head *VAR_5;

  if (!FUNC_12(VAR_3->owner))
   return FUNC_0(-VAR_0);

  VAR_4 = VAR_3->create(VAR_2);
  if (FUNC_1(VAR_4)) {
   FUNC_4(VAR_3->owner);
   return VAR_4;
  }

  VAR_5 = FUNC_2(FUNC_5(VAR_4->dp),
         FUNC_9(VAR_4));
  FUNC_3(&VAR_4->hash_node, VAR_5);
  return VAR_4;
 }





 FUNC_7();
 FUNC_10("vport-type-%d", VAR_2->type);
 FUNC_6();

 if (!FUNC_8(VAR_2))
  return FUNC_0(-VAR_0);
 else
  return FUNC_0(-VAR_1);
}
