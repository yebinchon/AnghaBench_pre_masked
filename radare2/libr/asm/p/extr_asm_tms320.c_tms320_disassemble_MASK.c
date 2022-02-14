
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_13__ {char* syntax; } ;
struct TYPE_12__ {scalar_t__ cpu; } ;
struct TYPE_11__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (TYPE_5__*,int const*,int) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int const*,int) ;

__attribute__((used)) static int FUNC_5(RAsm *VAR_4, RAsmOp *VAR_5, const ut8 *VAR_6, int VAR_7) {
 if (VAR_4->cpu && FUNC_1 (VAR_4->cpu, "c54x") == 0) {
  FUNC_3 (&VAR_3, VAR_0);
 } else if (VAR_4->cpu && FUNC_1(VAR_4->cpu, "c55x+") == 0) {
  FUNC_3 (&VAR_3, VAR_2);
 } else if (VAR_4->cpu && FUNC_1(VAR_4->cpu, "c55x") == 0) {
  FUNC_3 (&VAR_3, VAR_1);
 } else {





  FUNC_0 (VAR_5, "unknown asm.cpu");
  return VAR_5->size = -1;
 }
 VAR_5->size = FUNC_2 (&VAR_3, VAR_6, VAR_7);
 FUNC_0 (VAR_5, VAR_3.syntax);
 return VAR_5->size;
}
