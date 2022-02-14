
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int reg; } ;
typedef TYPE_1__ RDebug ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(RDebug *VAR_2, int VAR_3, const ut8 *VAR_4, int VAR_5) {
 if (!VAR_2->reg) {
  return 0;
 }
 int VAR_6;
 ut8 *VAR_7 = FUNC_2 (VAR_2->reg, VAR_0, &VAR_6);
 if (!VAR_7) {
  FUNC_0 ("Could not retrieve the register arena!\n");
  return 0;
 }
 int VAR_8 = FUNC_3 (VAR_1, VAR_7, VAR_6);
 FUNC_1 (VAR_7);
 return VAR_8;
}
