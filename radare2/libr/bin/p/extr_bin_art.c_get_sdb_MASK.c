
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * kv; } ;
struct TYPE_6__ {TYPE_1__* o; } ;
struct TYPE_5__ {TYPE_3__* bin_obj; } ;
typedef int Sdb ;
typedef TYPE_1__ RBinObject ;
typedef TYPE_2__ RBinFile ;
typedef TYPE_3__ ArtObj ;



__attribute__((used)) static Sdb *FUNC_0(RBinFile *VAR_0) {
 RBinObject *VAR_1 = VAR_0->o;
 if (!VAR_1) {
  return ((void*)0);
 }
 ArtObj *VAR_2 = VAR_1->bin_obj;
 return VAR_2? VAR_2->kv: ((void*)0);
}
