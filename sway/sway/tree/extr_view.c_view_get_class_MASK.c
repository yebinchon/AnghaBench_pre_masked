
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view {TYPE_1__* impl; } ;
struct TYPE_2__ {char const* (* get_string_prop ) (struct sway_view*,int ) ;} ;


 int VAR_0 ;
 char const* FUNC_0 (struct sway_view*,int ) ;

const char *FUNC_1(struct sway_view *VAR_1) {
 if (VAR_1->impl->get_string_prop) {
  return VAR_1->impl->get_string_prop(VAR_1, VAR_0);
 }
 return ((void*)0);
}
