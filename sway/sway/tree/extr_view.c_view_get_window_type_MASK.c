
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_view {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* get_int_prop ) (struct sway_view*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sway_view*,int ) ;

uint32_t FUNC_1(struct sway_view *VAR_1) {
 if (VAR_1->impl->get_int_prop) {
  return VAR_1->impl->get_int_prop(VAR_1, VAR_0);
 }
 return 0;
}
