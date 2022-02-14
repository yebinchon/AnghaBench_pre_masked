
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {int bin_obj; } ;
typedef int RList ;
typedef TYPE_2__ RBinFile ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static RList *FUNC_6(RBinFile *VAR_3) {
 RList *VAR_4;
 VAR_0 *VAR_1;

 if (!(VAR_4 = FUNC_5 (VAR_2))) {
  return ((void*)0);
 }
 if (!(VAR_1 = FUNC_1 (VAR_0))) {
  FUNC_4 (VAR_4);
  return ((void*)0);
 }
 if (!FUNC_2 (VAR_3->o->bin_obj, VAR_1)) {
  FUNC_0 (VAR_1);
 } else {
  FUNC_3 (VAR_4, VAR_1);
 }
 return VAR_4;
}
