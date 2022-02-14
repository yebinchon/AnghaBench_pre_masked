
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int types_size; } ;
struct TYPE_8__ {TYPE_2__* types; TYPE_1__ header; } ;
struct TYPE_7__ {int descriptor_id; } ;
typedef TYPE_3__ RBinDexObj ;


 char* FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static char *FUNC_1(RBinDexObj *VAR_0, int VAR_1) {
 if (VAR_1 < 0 || VAR_1 >= VAR_0->header.types_size) {
  return ((void*)0);
 }
 return FUNC_0 (VAR_0, VAR_0->types[VAR_1].descriptor_id);
}
