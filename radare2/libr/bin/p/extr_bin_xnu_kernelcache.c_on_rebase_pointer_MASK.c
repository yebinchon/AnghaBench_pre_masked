
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {int address; } ;
struct TYPE_5__ {scalar_t__ off; scalar_t__ eob; scalar_t__ count; int * buf; int obj; } ;
typedef TYPE_1__ RRebaseCtx ;
typedef TYPE_2__ RParsedPointer ;


 int FUNC_0 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static bool FUNC_2 (ut64 VAR_0, ut64 VAR_1, RRebaseCtx *VAR_2) {
 if (VAR_0 < VAR_2->off) {
  return 1;
 }
 if (VAR_0 >= VAR_2->eob) {
  return 0;
 }
 ut64 VAR_3 = VAR_0 - VAR_2->off;
 if (VAR_3 >= VAR_2->count || (VAR_3 + 8) > VAR_2->count) {
  return 0;
 }

 RParsedPointer VAR_4;
 FUNC_0 (&VAR_4, VAR_1, VAR_2->obj);

 FUNC_1 (&VAR_2->buf[VAR_3], VAR_4.address);

 return 1;
}
