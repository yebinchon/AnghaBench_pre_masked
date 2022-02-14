
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_13__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_16__ {TYPE_3__ info; } ;
struct TYPE_11__ {scalar_t__ sibling; } ;
struct TYPE_14__ {scalar_t__ sibling; scalar_t__ haskids; TYPE_1__ have; } ;
struct TYPE_12__ {scalar_t__ p; } ;
struct TYPE_15__ {int depth; TYPE_4__ attrs; TYPE_2__ b; } ;
typedef TYPE_5__ DwarfSym ;
typedef TYPE_6__ Dwarf ;


 int FUNC_0 (TYPE_6__*,TYPE_5__*) ;

int
FUNC_1(Dwarf *VAR_0, DwarfSym *VAR_1, int VAR_2)
{
 int VAR_3;
 DwarfSym VAR_4;
 uint VAR_5;

 if(VAR_1->depth == VAR_2 && VAR_1->attrs.have.sibling){
  VAR_5 = VAR_1->attrs.sibling;
  if(VAR_5 < VAR_0->info.len && VAR_0->info.data+VAR_5 >= VAR_1->b.p)
   VAR_1->b.p = VAR_0->info.data+VAR_5;
  VAR_1->attrs.haskids = 0;
 }
 VAR_4 = *VAR_1;
 for(;;){
  if((VAR_3 = FUNC_0(VAR_0, &VAR_4)) != 1) {
   return VAR_3;
  }
  if(VAR_4.depth < VAR_2){

   return 0;
  }
  *VAR_1 = VAR_4;
  if(VAR_4.depth == VAR_2) {
   return 1;
  }
 }
}
