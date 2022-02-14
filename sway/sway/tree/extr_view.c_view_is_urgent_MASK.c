
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct sway_view {TYPE_1__ urgent; } ;



bool FUNC_0(struct sway_view *VAR_0) {
 return VAR_0->urgent.tv_sec || VAR_0->urgent.tv_nsec;
}
