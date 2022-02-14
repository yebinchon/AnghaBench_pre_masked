
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport_parms {int name; } ;
struct vport {int dummy; } ;


 scalar_t__ FUNC_0 (struct vport*) ;
 struct vport* FUNC_1 (struct vport*,int ) ;
 struct vport* FUNC_2 (struct vport_parms const*) ;

__attribute__((used)) static struct vport *FUNC_3(const struct vport_parms *VAR_0)
{
 struct vport *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1))
  return VAR_1;

 return FUNC_1(VAR_1, VAR_0->name);
}
