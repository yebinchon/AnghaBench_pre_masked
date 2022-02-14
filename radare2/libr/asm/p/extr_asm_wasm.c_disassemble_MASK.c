
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_8__ {int txt; TYPE_1__ member_0; } ;
typedef TYPE_2__ WasmOp ;
struct TYPE_9__ {int size; } ;
typedef TYPE_3__ RAsmOp ;
typedef int RAsm ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int const*,int) ;

__attribute__((used)) static int FUNC_3(RAsm *VAR_0, RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 WasmOp VAR_4 = {0};
 int VAR_5 = FUNC_2 (&VAR_4, VAR_2, VAR_3);
 FUNC_1 (VAR_1, VAR_4.txt);
 FUNC_0 (VAR_4.txt);
 VAR_1->size = VAR_5;
 return VAR_1->size;
}
