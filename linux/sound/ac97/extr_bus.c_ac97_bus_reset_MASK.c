
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ac97_controller {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reset ) (struct ac97_controller*) ;} ;


 int FUNC_0 (struct ac97_controller*) ;

__attribute__((used)) static int FUNC_1(struct ac97_controller *VAR_0)
{
 VAR_0->ops->reset(VAR_0);

 return 0;
}
