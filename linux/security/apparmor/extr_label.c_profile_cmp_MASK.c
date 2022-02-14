
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hname; } ;
struct aa_profile {TYPE_1__ base; int ns; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct aa_profile *VAR_0, struct aa_profile *VAR_1)
{
 int VAR_2;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);
 FUNC_0(!VAR_0->ns);
 FUNC_0(!VAR_1->ns);
 FUNC_0(!VAR_0->base.hname);
 FUNC_0(!VAR_1->base.hname);

 if (VAR_0 == VAR_1 || VAR_0->base.hname == VAR_1->base.hname)
  return 0;
 VAR_2 = FUNC_1(VAR_0->ns, VAR_1->ns);
 if (VAR_2)
  return VAR_2;

 return FUNC_2(VAR_0->base.hname, VAR_1->base.hname);
}
