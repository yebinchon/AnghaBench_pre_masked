
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hname; } ;
struct aa_ns {int level; TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct aa_ns *VAR_0, struct aa_ns *VAR_1)
{
 int VAR_2;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);
 FUNC_0(!VAR_0->base.hname);
 FUNC_0(!VAR_1->base.hname);

 if (VAR_0 == VAR_1)
  return 0;

 VAR_2 = VAR_0->level - VAR_1->level;
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0->base.hname, VAR_1->base.hname);
}
