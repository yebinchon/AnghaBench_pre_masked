
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rp; } ;
struct action {scalar_t__ type; TYPE_2__ x; TYPE_3__* sp; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_4__ {int index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(
  struct action *VAR_2,
  struct action *VAR_3
){
  int VAR_4;
  VAR_4 = VAR_2->sp->index - VAR_3->sp->index;
  if( VAR_4==0 ){
    VAR_4 = (int)VAR_2->type - (int)VAR_3->type;
  }
  if( VAR_4==0 && (VAR_2->type==VAR_0 || VAR_2->type==VAR_1) ){
    VAR_4 = VAR_2->x.rp->index - VAR_3->x.rp->index;
  }
  if( VAR_4==0 ){
    VAR_4 = (int) (VAR_3 - VAR_2);
  }
  return VAR_4;
}
