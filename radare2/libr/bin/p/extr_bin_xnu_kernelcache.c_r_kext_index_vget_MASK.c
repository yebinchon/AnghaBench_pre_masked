
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_8__ {scalar_t__ vaddr; TYPE_1__ text_range; } ;
struct TYPE_7__ {int length; TYPE_3__** entries; } ;
typedef TYPE_2__ RKextIndex ;
typedef TYPE_3__ RKext ;



__attribute__((used)) static RKext *FUNC_0(RKextIndex *VAR_0, ut64 VAR_1) {
 int VAR_2;
 int VAR_3 = 0;
 int VAR_4 = VAR_0->length - 1;

 while (VAR_3 < VAR_4) {
  VAR_2 = (VAR_3 + VAR_4) / 2;
  RKext *VAR_5 = VAR_0->entries[VAR_2];
  if ((VAR_5->vaddr + VAR_5->text_range.size) <= VAR_1 || (VAR_5->vaddr == VAR_1 && VAR_5->text_range.size == 0)) {
   VAR_3 = VAR_2 + 1;
  } else {
   VAR_4 = VAR_2;
  }
 }

 RKext *VAR_6 = VAR_0->entries[VAR_3];
 if ((VAR_4 == VAR_3) && (VAR_6->vaddr <= VAR_1) && ((VAR_6->vaddr + VAR_6->text_range.size) > VAR_1)) {
  return VAR_6;
 }
 return ((void*)0);
}
