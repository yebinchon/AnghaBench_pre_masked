
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {int strings_db; } ;
typedef int RList ;
typedef int RBinString ;
typedef TYPE_2__ RBinFile ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,scalar_t__,int *) ;

__attribute__((used)) static RBinString *FUNC_1(RBinFile *VAR_1, RList *VAR_2, ut64 VAR_3) {
 if (VAR_3 != 0 && VAR_3 != VAR_0) {
  return FUNC_0 (VAR_1->o->strings_db, VAR_3, ((void*)0));
 }
 return ((void*)0);
}
