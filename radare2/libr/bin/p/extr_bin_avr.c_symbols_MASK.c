
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {int * bin_obj; } ;
typedef int RList ;
typedef int RBuffer ;
typedef TYPE_2__ RBinFile ;


 int FUNC_0 (int *,char*,int,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static RList *FUNC_2(RBinFile *VAR_1) {
 RList *VAR_2 = ((void*)0);
 RBuffer *VAR_3 = VAR_1->o->bin_obj;

 if (!(VAR_2 = FUNC_1 (VAR_0))) {
  return ((void*)0);
 }

 FUNC_0 (VAR_2, "int0", 2, VAR_3);
 FUNC_0 (VAR_2, "int1", 4, VAR_3);
 FUNC_0 (VAR_2, "timer2cmp", 6, VAR_3);
 FUNC_0 (VAR_2, "timer2ovf", 8, VAR_3);
 FUNC_0 (VAR_2, "timer1capt", 10, VAR_3);
 FUNC_0 (VAR_2, "timer1cmpa", 12, VAR_3);
 return VAR_2;
}
