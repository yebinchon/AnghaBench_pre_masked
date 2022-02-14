
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {scalar_t__ methods_ht; } ;
typedef int RBinSymbol ;
typedef TYPE_2__ RBinFile ;


 int * FUNC_0 (scalar_t__,char const*,int *) ;
 int FUNC_1 (int ,int *) ;
 char* FUNC_2 (char*,char const*,char const*) ;

__attribute__((used)) static RBinSymbol *FUNC_3(RBinFile *VAR_0, const char *VAR_1, const char *VAR_2) {
 FUNC_1 (VAR_0 && VAR_0->o && VAR_0->o->methods_ht && VAR_1 && VAR_2, ((void*)0));
 const char *VAR_3 = FUNC_2 ("%s::%s", VAR_1, VAR_2);
 return FUNC_0 (VAR_0->o->methods_ht, VAR_3, ((void*)0));
}
