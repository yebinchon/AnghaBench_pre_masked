
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ offset; } ;
typedef TYPE_1__ RIONull ;
typedef TYPE_2__ RIODesc ;
typedef int RIO ;






__attribute__((used)) static ut64 FUNC_0(RIO* VAR_0, RIODesc* VAR_1, ut64 VAR_2, int VAR_3) {
 RIONull* VAR_4;
 if (!VAR_1 || !VAR_1->data) {
  return VAR_2;
 }
 VAR_4 = (RIONull*) VAR_1->data;
 switch (VAR_3) {
 case 128:
  if (VAR_2 >= VAR_4->size) {
   return VAR_4->offset = VAR_4->size - 1;
  }
  return VAR_4->offset = VAR_2;
 case 130:
  if ((VAR_4->offset + VAR_2) >= VAR_4->size) {
   return VAR_4->offset = VAR_4->size - 1;
  }
  return VAR_4->offset += VAR_2;
 case 129:
  return VAR_4->offset = VAR_4->size - 1;
 }
 return VAR_2;
}
