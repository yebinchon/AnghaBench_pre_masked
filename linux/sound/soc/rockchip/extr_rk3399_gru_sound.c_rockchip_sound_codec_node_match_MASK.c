
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ bus_type; int compatible; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct device* FUNC_1 (scalar_t__,struct device_node*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_1)
{
 struct device *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (!FUNC_2(VAR_1,
          VAR_0[VAR_3].compatible))
   continue;

  if (VAR_0[VAR_3].bus_type) {
   VAR_2 = FUNC_1(VAR_0[VAR_3].bus_type,
        VAR_1);
   if (!VAR_2)
    continue;
   FUNC_3(VAR_2);
  }

  return VAR_3;
 }
 return -1;
}
