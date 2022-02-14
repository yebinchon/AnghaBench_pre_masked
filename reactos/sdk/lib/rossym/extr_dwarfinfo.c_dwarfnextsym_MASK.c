
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct TYPE_16__ {scalar_t__ haskids; } ;
struct TYPE_15__ {scalar_t__ p; scalar_t__ ep; } ;
struct TYPE_12__ {scalar_t__ len; scalar_t__ data; } ;
struct TYPE_14__ {TYPE_1__ info; } ;
struct TYPE_13__ {scalar_t__ depth; int allunits; scalar_t__ nextunit; scalar_t__ uoff; scalar_t__ unit; TYPE_5__ attrs; TYPE_4__ b; int aoff; } ;
typedef TYPE_2__ DwarfSym ;
typedef int DwarfAbbrev ;
typedef TYPE_3__ Dwarf ;


 scalar_t__ FUNC_0 (TYPE_3__*,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (TYPE_3__*,int ,scalar_t__) ;
 int * VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_4__*,scalar_t__,int *,TYPE_5__*) ;
 int FUNC_4 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;

int
FUNC_5(Dwarf *VAR_1, DwarfSym *VAR_2)
{
 ulong VAR_3;
 DwarfAbbrev *VAR_4;

 if(VAR_2->attrs.haskids)
  VAR_2->depth++;
top:
 if(VAR_2->b.p >= VAR_2->b.ep){
  if(VAR_2->allunits && VAR_2->nextunit < VAR_1->info.len){
   if(FUNC_0(VAR_1, VAR_2->nextunit, VAR_2) < 0) {
    return -1;
   }
   VAR_2->allunits = 1;
   goto top;
  }
  return 0;
 }

 VAR_2->uoff = VAR_2->b.p - (VAR_1->info.data+VAR_2->unit);
 VAR_3 = FUNC_1(&VAR_2->b);
 if(VAR_3 == 0){
  if(VAR_2->depth == 0) {
   return 0;
  }
  if(VAR_2->depth > 0)
   VAR_2->depth--;
  goto top;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2->aoff, VAR_3);
 if(VAR_4 == VAR_0){
  FUNC_4("getabbrev %ud %ud for %ud,%ud: %r\n", VAR_2->aoff, VAR_3, VAR_2->unit, VAR_2->uoff);
  return -1;
 }
 if(FUNC_3(&VAR_2->b, VAR_2->unit, VAR_4, &VAR_2->attrs) < 0) {
  return -1;
 }
 return 1;
}
