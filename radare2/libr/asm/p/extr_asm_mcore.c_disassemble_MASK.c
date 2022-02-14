
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
typedef int tmp ;
typedef int mcore_t ;
struct TYPE_7__ {int pc; } ;
struct TYPE_6__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int const*,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int ,int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5(RAsm *VAR_1, RAsmOp *VAR_2, const ut8 *VAR_3, int VAR_4) {
 mcore_t* VAR_5 = ((void*)0);
 char VAR_6[256];
 if (!VAR_2 || FUNC_1 (&VAR_0, VAR_3, VAR_4)) {
  return -1;
 }
 VAR_2->size = 2;
 if ((VAR_5 = FUNC_2 (&VAR_0))) {
  FUNC_3 (VAR_6, sizeof (VAR_6), VAR_1->pc, VAR_5);
  FUNC_0 (VAR_5);
  FUNC_4 (VAR_2, VAR_6);
 } else {
  FUNC_4 (VAR_2, "invalid");
 }
 return VAR_2->size;
}
