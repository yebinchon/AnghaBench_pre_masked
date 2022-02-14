
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_10__ {scalar_t__ entry; } ;
struct TYPE_9__ {TYPE_2__* o; } ;
struct TYPE_8__ {scalar_t__ bin_obj; } ;
struct TYPE_7__ {scalar_t__ pa2va_exec; TYPE_5__* mach0; } ;
typedef int RList ;
typedef TYPE_1__ RKernelCacheObj ;
typedef TYPE_2__ RBinObject ;
typedef TYPE_3__ RBinFile ;
typedef int RBinAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*,int *,int ,int,int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static RList *FUNC_4(RBinFile *VAR_2) {
 RList *VAR_3;
 RBinObject *VAR_4 = VAR_2 ? VAR_2->o : ((void*)0);

 if (!VAR_4 || !VAR_4->bin_obj || !(VAR_3 = FUNC_3 (VAR_1))) {
  return ((void*)0);
 }

 RKernelCacheObj *VAR_5 = (RKernelCacheObj*) VAR_4->bin_obj;
 ut64 VAR_6 = VAR_5->mach0->entry;
 if (VAR_5->pa2va_exec <= VAR_6) {
  ut64 VAR_7 = VAR_6 - VAR_5->pa2va_exec;
  RBinAddr *VAR_8 = FUNC_0 (VAR_7, VAR_6, 0);
  if (VAR_8) {
   FUNC_2 (VAR_3, VAR_8);
  }
 }

 FUNC_1 (VAR_5, VAR_5->mach0, VAR_3, 0, 1, VAR_0, ((void*)0));

 return VAR_3;
}
