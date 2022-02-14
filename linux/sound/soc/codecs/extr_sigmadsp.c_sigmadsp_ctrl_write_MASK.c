
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigmadsp_control {int num_bytes; int addr; } ;
struct sigmadsp {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* safeload ) (struct sigmadsp*,int ,void*,int) ;} ;


 int FUNC_0 (struct sigmadsp*,int ,void*,int) ;
 int FUNC_1 (struct sigmadsp*,int ,void*,int) ;

__attribute__((used)) static int FUNC_2(struct sigmadsp *VAR_0,
 struct sigmadsp_control *VAR_1, void *VAR_2)
{

 if (VAR_1->num_bytes <= 20 && VAR_0->ops && VAR_0->ops->safeload)
  return VAR_0->ops->safeload(VAR_0, VAR_1->addr, VAR_2,
   VAR_1->num_bytes);
 else
  return FUNC_0(VAR_0, VAR_1->addr, VAR_2,
   VAR_1->num_bytes);
}
