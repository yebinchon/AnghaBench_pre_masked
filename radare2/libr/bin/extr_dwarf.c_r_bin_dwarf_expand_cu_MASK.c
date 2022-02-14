
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int capacity; int length; int * dies; } ;
typedef int RBinDwarfDIE ;
typedef TYPE_1__ RBinDwarfCompUnit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(RBinDwarfCompUnit *VAR_2) {
 RBinDwarfDIE *VAR_3;

 if (!VAR_2 || VAR_2->capacity == 0 || VAR_2->capacity != VAR_2->length) {
  return -VAR_0;
 }

 VAR_3 = (RBinDwarfDIE*)FUNC_1(VAR_2->dies,
   VAR_2->capacity * 2 * sizeof(RBinDwarfDIE));
 if (!VAR_3) {
  return -VAR_1;
 }

 FUNC_0 ((ut8*)VAR_3 + VAR_2->capacity * sizeof (RBinDwarfDIE),
   0, VAR_2->capacity * sizeof (RBinDwarfDIE));
 VAR_2->dies = VAR_3;
 VAR_2->capacity *= 2;

 return 0;
}
