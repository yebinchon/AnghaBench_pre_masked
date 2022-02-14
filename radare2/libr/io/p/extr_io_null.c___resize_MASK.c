
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* ut64 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {void* offset; void* size; } ;
typedef TYPE_1__ RIONull ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;



__attribute__((used)) static bool FUNC_0(RIO* VAR_0, RIODesc* VAR_1, ut64 VAR_2) {
 if (VAR_1 && VAR_1->data) {
  RIONull* VAR_3 = (RIONull*) VAR_1->data;
  VAR_3->size = VAR_2;
  if (VAR_3->offset >= VAR_2) {
   if (VAR_2) {
    VAR_3->offset = VAR_2 - 1;
   } else {
    VAR_3->offset = 0LL;
   }
  }
  return 1;
 }
 return 0;
}
