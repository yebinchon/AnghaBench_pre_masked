
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_7__ {int types_size; scalar_t__ types_offset; } ;
struct TYPE_9__ {TYPE_2__ header; int types; } ;
struct TYPE_8__ {TYPE_1__* o; } ;
struct TYPE_6__ {scalar_t__ bin_obj; } ;
typedef TYPE_3__ RBinFile ;
typedef TYPE_4__ RBinDexObj ;



__attribute__((used)) static ut64 FUNC_0(RBinFile *VAR_0, int VAR_1) {
 RBinDexObj *VAR_2 = (RBinDexObj*) VAR_0->o->bin_obj;
 if (!VAR_2 || !VAR_2->types) {
  return 0;
 }
 if (VAR_1 < 0 || VAR_1 >= VAR_2->header.types_size) {
  return 0;
 }
 return VAR_2->header.types_offset + VAR_1 * 0x04;
}
