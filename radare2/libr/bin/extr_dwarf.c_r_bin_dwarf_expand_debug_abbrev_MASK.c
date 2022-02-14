
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int capacity; int length; int * decls; } ;
typedef TYPE_1__ RBinDwarfDebugAbbrev ;
typedef int RBinDwarfAbbrevDecl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(RBinDwarfDebugAbbrev *VAR_2) {
 RBinDwarfAbbrevDecl *VAR_3;

 if (!VAR_2 || VAR_2->capacity == 0 || VAR_2->capacity != VAR_2->length) {
  return -VAR_0;
 }

 VAR_3 = (RBinDwarfAbbrevDecl*)FUNC_1 (VAR_2->decls,
   VAR_2->capacity * 2 * sizeof (RBinDwarfAbbrevDecl));

 if (!VAR_3) {
  return -VAR_1;
 }
 FUNC_0 ((ut8*)VAR_3 + VAR_2->capacity * sizeof (RBinDwarfAbbrevDecl),
   0, VAR_2->capacity * sizeof (RBinDwarfAbbrevDecl));

 VAR_2->decls = VAR_3;
 VAR_2->capacity *= 2;

 return 0;
}
