
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct seek_flag_offset_t {scalar_t__* next; scalar_t__ offset; scalar_t__ is_next; } ;
struct TYPE_3__ {scalar_t__ offset; } ;
typedef TYPE_1__ RFlagItem ;



__attribute__((used)) static bool FUNC_0(RFlagItem *VAR_0, void *VAR_1) {
 struct seek_flag_offset_t *VAR_2 = (struct seek_flag_offset_t *)VAR_1;
 if (VAR_2->is_next) {
  if (VAR_0->offset < *VAR_2->next && VAR_0->offset > VAR_2->offset) {
   *VAR_2->next = VAR_0->offset;
  }
 } else {
  if (VAR_0->offset > *VAR_2->next && VAR_0->offset < VAR_2->offset) {
   *VAR_2->next = VAR_0->offset;
  }
 }
 return 1;
}
