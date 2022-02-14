
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num; struct device_item* array; } ;
struct device_list {TYPE_1__ items; } ;
struct TYPE_6__ {char* array; } ;
struct TYPE_5__ {int array; } ;
struct device_item {TYPE_3__ value; TYPE_2__ name; } ;
typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device_list*,int) ;
 int FUNC_1 (struct device_list*) ;
 int FUNC_2 (struct device_list*,int ,int) ;
 int * FUNC_3 (int *,char*,int ,int ,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;

__attribute__((used)) static obs_properties_t *FUNC_6(bool VAR_4)
{
 obs_properties_t *VAR_5 = FUNC_4();
 obs_property_t *VAR_6;
 struct device_list VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(struct device_list));

 VAR_6 = FUNC_3(VAR_5, "device_id", VAR_2,
        VAR_1,
        VAR_0);

 FUNC_0(&VAR_7, VAR_4);

 if (VAR_7.items.num)
  FUNC_5(VAR_6, VAR_3,
          "default");

 for (size_t VAR_8 = 0; VAR_8 < VAR_7.items.num; VAR_8++) {
  struct device_item *VAR_9 = VAR_7.items.array + VAR_8;
  FUNC_5(VAR_6, VAR_9->name.array,
          VAR_9->value.array);
 }

 FUNC_1(&VAR_7);
 return VAR_5;
}
