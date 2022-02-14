
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_ib_device {int* vector_load; TYPE_1__* dev; } ;
struct TYPE_2__ {int num_comp_vectors; } ;



__attribute__((used)) static inline int FUNC_0(struct rds_ib_device *VAR_0)
{
 int VAR_1 = VAR_0->vector_load[VAR_0->dev->num_comp_vectors - 1];
 int VAR_2 = VAR_0->dev->num_comp_vectors - 1;
 int VAR_3;

 for (VAR_3 = VAR_0->dev->num_comp_vectors - 1; VAR_3 >= 0; VAR_3--) {
  if (VAR_0->vector_load[VAR_3] < VAR_1) {
   VAR_2 = VAR_3;
   VAR_1 = VAR_0->vector_load[VAR_3];
  }
 }

 VAR_0->vector_load[VAR_2]++;
 return VAR_2;
}
