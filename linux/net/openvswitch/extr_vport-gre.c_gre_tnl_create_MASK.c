
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport_parms {int name; int dp; } ;
struct vport {int flags; } ;
struct net_device {int flags; } ;
struct net {int dummy; } ;


 struct vport* FUNC_0 (struct vport*) ;
 struct vport* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct vport*) ;
 int VAR_1 ;
 int FUNC_3 (struct vport*,int,int *) ;
 struct vport* FUNC_4 (struct net*,int ,int ) ;
 struct net* FUNC_5 (int ) ;
 int VAR_2 ;
 struct vport* FUNC_6 (int ,int *,struct vport_parms const*) ;
 int FUNC_7 (struct vport*) ;
 int FUNC_8 (struct vport*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static struct vport *FUNC_11(const struct vport_parms *VAR_3)
{
 struct net *VAR_4 = FUNC_5(VAR_3->dp);
 struct net_device *VAR_5;
 struct vport *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(0, &VAR_2, VAR_3);
 if (FUNC_2(VAR_6))
  return VAR_6;

 FUNC_9();
 VAR_5 = FUNC_4(VAR_4, VAR_3->name, VAR_1);
 if (FUNC_2(VAR_5)) {
  FUNC_10();
  FUNC_7(VAR_6);
  return FUNC_0(VAR_5);
 }

 VAR_7 = FUNC_3(VAR_5, VAR_5->flags | VAR_0, ((void*)0));
 if (VAR_7 < 0) {
  FUNC_8(VAR_5);
  FUNC_10();
  FUNC_7(VAR_6);
  return FUNC_1(VAR_7);
 }

 FUNC_10();
 return VAR_6;
}
