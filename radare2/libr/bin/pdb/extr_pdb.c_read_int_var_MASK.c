
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ R_PDB ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int *VAR_1, R_PDB *VAR_2) {
 if (VAR_1) {
  *VAR_1 = 0;
 }
 int VAR_3 = FUNC_1 (VAR_2->buf, (ut8 *) VAR_1, 4);
 if (VAR_3 != 4) {
  FUNC_0 ("Error while reading from file '%s'\n", VAR_0);
  return 0;
 }
 return VAR_3;
}
