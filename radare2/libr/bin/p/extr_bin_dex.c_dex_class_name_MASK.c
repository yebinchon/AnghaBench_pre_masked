
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int class_id; } ;
typedef int RBinDexObj ;
typedef TYPE_1__ RBinDexClass ;


 char* FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(RBinDexObj *VAR_1, RBinDexClass *VAR_2) {
 char *VAR_3 = FUNC_0 (VAR_1, VAR_2->class_id);
 if (VAR_0) {
  FUNC_2 (VAR_3);
  if (*VAR_3 == 'L') {
   FUNC_1 (VAR_3, VAR_3 + 1);
  }
 }
 return VAR_3;
}
