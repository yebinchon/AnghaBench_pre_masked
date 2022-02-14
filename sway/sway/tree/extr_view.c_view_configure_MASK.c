
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_view {TYPE_1__* impl; } ;
struct TYPE_2__ {int (* configure ) (struct sway_view*,double,double,int,int) ;} ;


 int FUNC_0 (struct sway_view*,double,double,int,int) ;

uint32_t FUNC_1(struct sway_view *VAR_0, double VAR_1, double VAR_2, int VAR_3,
  int VAR_4) {
 if (VAR_0->impl->configure) {
  return VAR_0->impl->configure(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }
 return 0;
}
