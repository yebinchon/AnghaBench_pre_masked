
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct sway_view {TYPE_1__ urgent; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
 struct sway_view *VAR_2 = *(void **)VAR_0;
 struct sway_view *VAR_3 = *(void **)VAR_1;

 if (VAR_2->urgent.tv_sec < VAR_3->urgent.tv_sec) {
  return -1;
 } else if (VAR_2->urgent.tv_sec > VAR_3->urgent.tv_sec) {
  return 1;
 }
 if (VAR_2->urgent.tv_nsec < VAR_3->urgent.tv_nsec) {
  return -1;
 } else if (VAR_2->urgent.tv_nsec > VAR_3->urgent.tv_nsec) {
  return 1;
 }
 return 0;
}
