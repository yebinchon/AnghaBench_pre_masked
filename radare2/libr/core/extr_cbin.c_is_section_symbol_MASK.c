
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__* name; } ;
typedef TYPE_1__ RBinSymbol ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_1(RBinSymbol *VAR_1) {

 if (!VAR_1 || *VAR_1->name) {
  return 0;
 }
 return (VAR_1->type && !FUNC_0 (VAR_1->type, VAR_0));
}
