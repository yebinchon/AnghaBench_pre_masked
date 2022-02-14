
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
typedef int period_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static period_t
FUNC_0(const transition_scheme_t *VAR_3, int VAR_4)
{
 if (VAR_4 < VAR_3->dawn.start ||
     VAR_4 >= VAR_3->dusk.end) {
  return VAR_1;
 } else if (VAR_4 >= VAR_3->dawn.end &&
     VAR_4 < VAR_3->dusk.start) {
  return VAR_0;
 } else {
  return VAR_2;
 }
}
