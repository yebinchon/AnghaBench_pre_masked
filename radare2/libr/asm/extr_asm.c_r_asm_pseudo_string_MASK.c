
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ RAsmOp ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(RAsmOp *VAR_0, char *VAR_1, int VAR_2) {
 int VAR_3 = FUNC_2 (VAR_1) - 1;
 if (VAR_3 < 1) {
  return 0;
 }

 if (VAR_1[VAR_3] == '"') {
  VAR_1[VAR_3] = 0;
 }
 if (*VAR_1 == '"') {
  VAR_1++;
 }
 VAR_3 = FUNC_0 (VAR_1) + VAR_2;
 FUNC_1 (&VAR_0->buf, VAR_1);
 return VAR_3;
}
