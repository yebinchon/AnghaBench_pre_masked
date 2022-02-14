
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hname; } ;
struct TYPE_4__ {int name; int hname; } ;
struct aa_profile {TYPE_1__ label; TYPE_2__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct aa_profile *VAR_0, struct aa_profile *VAR_1)
{
 FUNC_1(VAR_1->base.hname);
 FUNC_0(VAR_0->base.hname);
 VAR_1->base.hname = VAR_0->base.hname;
 VAR_1->base.name = VAR_0->base.name;
 VAR_1->label.hname = VAR_0->label.hname;
}
