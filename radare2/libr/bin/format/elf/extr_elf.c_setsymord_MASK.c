
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_3__ {size_t symbols_by_ord_size; int ** symbols_by_ord; } ;
typedef int RBinSymbol ;
typedef TYPE_1__ ELFOBJ ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ELFOBJ* VAR_0, ut32 VAR_1, RBinSymbol *VAR_2) {
 if (!VAR_0->symbols_by_ord || VAR_1 >= VAR_0->symbols_by_ord_size) {
  return;
 }
 FUNC_0 (VAR_0->symbols_by_ord[VAR_1]);
 VAR_0->symbols_by_ord[VAR_1] = VAR_2;
}
