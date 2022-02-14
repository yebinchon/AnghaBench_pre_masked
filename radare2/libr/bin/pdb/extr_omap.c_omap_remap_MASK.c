
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int from; scalar_t__ to; } ;
struct TYPE_3__ {unsigned int* froms; int omap_entries; } ;
typedef TYPE_1__ SOmapStream ;
typedef TYPE_2__ SOmapEntry ;
typedef int RListIter ;


 int FUNC_0 (unsigned int*,int,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(void *VAR_0, int VAR_1) {
 SOmapStream *VAR_2 = (SOmapStream *) VAR_0;
 SOmapEntry *VAR_3 = 0;
 RListIter *VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (!VAR_2) {
  return VAR_1;
 }

 VAR_7 = FUNC_6 (VAR_2->omap_entries);

 if (VAR_2->froms == 0) {
  VAR_2->froms = (unsigned int *) FUNC_1 (4 * VAR_7);
  if (!VAR_2->froms) {
   return -1;
  }
  VAR_4 = FUNC_5 (VAR_2->omap_entries);
  while (FUNC_4 (VAR_4)) {
   VAR_3 = (SOmapEntry *) FUNC_3 (VAR_4);
   VAR_2->froms[VAR_5] = VAR_3->from;
   VAR_5++;
  }
 }


 VAR_6 = FUNC_0 (VAR_2->froms, VAR_1, 0, (VAR_7));

 if (VAR_6 == -1) {
  return -1;
 }

 if (VAR_2->froms[VAR_6] != VAR_1) {
  VAR_6 -= 1;
 }
 VAR_3 = (SOmapEntry *) FUNC_2 (VAR_2->omap_entries, VAR_6);
 if (!VAR_3) {
  return -1;
 }
 if (VAR_3->to == 0) {
  return VAR_3->to;
 }
 return VAR_3->to + (VAR_1 - VAR_3->from);
}
