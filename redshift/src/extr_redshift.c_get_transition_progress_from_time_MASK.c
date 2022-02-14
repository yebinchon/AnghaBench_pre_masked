
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int end; int start; } ;
struct TYPE_5__ {int start; int end; } ;
struct TYPE_7__ {TYPE_2__ dusk; TYPE_1__ dawn; } ;
typedef TYPE_3__ transition_scheme_t ;



__attribute__((used)) static double
FUNC_0(
 const transition_scheme_t *VAR_0, int VAR_1)
{
 if (VAR_1 < VAR_0->dawn.start ||
     VAR_1 >= VAR_0->dusk.end) {
  return 0.0;
 } else if (VAR_1 < VAR_0->dawn.end) {
  return (VAR_0->dawn.start - VAR_1) /
   (double)(VAR_0->dawn.start -
    VAR_0->dawn.end);
 } else if (VAR_1 > VAR_0->dusk.start) {
  return (VAR_0->dusk.end - VAR_1) /
   (double)(VAR_0->dusk.end -
    VAR_0->dusk.start);
 } else {
  return 1.0;
 }
}
