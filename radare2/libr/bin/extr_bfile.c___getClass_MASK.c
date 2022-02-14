
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {scalar_t__ classes_ht; } ;
typedef TYPE_2__ RBinFile ;
typedef int RBinClass ;


 int * FUNC_0 (scalar_t__,char const*,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static RBinClass *FUNC_2(RBinFile *VAR_0, const char *VAR_1) {
 FUNC_1 (VAR_0 && VAR_0->o && VAR_0->o->classes_ht && VAR_1, ((void*)0));
 return FUNC_0 (VAR_0->o->classes_ht, VAR_1, ((void*)0));
}
