
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


 char* FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(RBinDexObj *VAR_1, int VAR_2) {
 int VAR_3;
 if (!VAR_1 || !VAR_1->types) {
  return ((void*)0);
 }
 if (VAR_2 < 0 || VAR_2 >= VAR_1->header.types_size) {
  return ((void*)0);
 }
 VAR_3 = VAR_1->types[VAR_2].descriptor_id;
 char *VAR_4 = FUNC_0 (VAR_1, VAR_3);
 if (VAR_0) {
  FUNC_1 (VAR_4);
 }
 return VAR_4;
}
