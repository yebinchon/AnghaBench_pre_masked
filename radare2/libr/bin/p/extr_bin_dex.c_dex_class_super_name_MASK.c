
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int super_class; } ;
struct TYPE_8__ {int types_size; } ;
struct TYPE_10__ {TYPE_2__* types; TYPE_1__ header; } ;
struct TYPE_9__ {int descriptor_id; } ;
typedef TYPE_3__ RBinDexObj ;
typedef TYPE_4__ RBinDexClass ;


 char const* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static const char *FUNC_2(RBinDexObj *VAR_0, RBinDexClass *VAR_1) {
 FUNC_1 (VAR_0 && VAR_0->types && VAR_1, ((void*)0));

 int VAR_2 = VAR_1->super_class;
 if (VAR_2 < 0 || VAR_2 >= VAR_0->header.types_size) {
  return ((void*)0);
 }
 int VAR_3 = VAR_0->types[VAR_2].descriptor_id;
 return FUNC_0 (VAR_0, VAR_3);
}
