
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport_parms {int name; } ;
struct vport {int dummy; } ;


 scalar_t__ FUNC_0 (struct vport*) ;
 struct vport* FUNC_1 (struct vport*,int ) ;
 int VAR_0 ;
 struct vport* FUNC_2 (int ,int *,struct vport_parms const*) ;

__attribute__((used)) static struct vport *FUNC_3(const struct vport_parms *VAR_1)
{
 struct vport *VAR_2;

 VAR_2 = FUNC_2(0, &VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return VAR_2;

 return FUNC_1(VAR_2, VAR_1->name);
}
