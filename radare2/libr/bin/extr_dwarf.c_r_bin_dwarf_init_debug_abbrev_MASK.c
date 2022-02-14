
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; int capacity; int decls; } ;
typedef TYPE_1__ RBinDwarfDebugAbbrev ;
typedef int RBinDwarfAbbrevDecl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(RBinDwarfDebugAbbrev *VAR_3) {
 if (!VAR_3) {
  return -VAR_1;
 }
 VAR_3->decls = FUNC_0 (sizeof (RBinDwarfAbbrevDecl), VAR_0);
 if (!VAR_3->decls) {
  return -VAR_2;
 }
 VAR_3->capacity = VAR_0;
 VAR_3->length = 0;

 return 0;
}
