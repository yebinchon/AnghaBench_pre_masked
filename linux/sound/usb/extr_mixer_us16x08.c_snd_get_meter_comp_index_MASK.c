
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_us16x08_meter_store {int comp_active_index; int comp_index; TYPE_1__* comp_store; } ;
struct TYPE_2__ {int ** val; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_1(struct snd_us16x08_meter_store *VAR_2)
{
 int VAR_3;


 if (VAR_2->comp_active_index) {

  if (VAR_2->comp_active_index & 0x20) {

   if (VAR_2->comp_index -
    VAR_2->comp_active_index > 1)
    VAR_2->comp_index =
    VAR_2->comp_active_index;

   VAR_3 = VAR_2->comp_index++ & 0x1F;
  } else {

   VAR_3 = VAR_2->comp_active_index;
  }
 } else {

  while (!VAR_2->comp_store->val[
   FUNC_0(VAR_0)]
   [VAR_2->comp_index - 1]
   && VAR_2->comp_index <= VAR_1) {
   VAR_2->comp_index++;
  }
  VAR_3 = VAR_2->comp_index++;
  if (VAR_2->comp_index > VAR_1)
   VAR_2->comp_index = 1;
 }
 return VAR_3;
}
