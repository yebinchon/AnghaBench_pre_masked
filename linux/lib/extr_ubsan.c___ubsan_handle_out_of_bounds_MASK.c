
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct out_of_bounds_data {TYPE_1__* array_type; int index_type; int location; } ;
typedef int index_str ;
struct TYPE_2__ {int type_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (int *,unsigned long*) ;
 int FUNC_4 (char*,int,int ,void*) ;

void FUNC_5(struct out_of_bounds_data *VAR_1, void *VAR_2)
{
 unsigned long VAR_3;
 char VAR_4[VAR_0];

 if (FUNC_1(&VAR_1->location))
  return;

 FUNC_3(&VAR_1->location, &VAR_3);

 FUNC_4(VAR_4, sizeof(VAR_4), VAR_1->index_type, VAR_2);
 FUNC_0("index %s is out of range for type %s\n", VAR_4,
  VAR_1->array_type->type_name);
 FUNC_2(&VAR_3);
}
