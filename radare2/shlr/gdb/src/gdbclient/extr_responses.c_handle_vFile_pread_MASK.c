
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int data_len; float* data; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char*,int*) ;
 char* FUNC_4 (char*,char) ;

int FUNC_5(libgdbr_t *VAR_0, ut8 *VAR_1) {
 FUNC_2 (VAR_0);
 char *VAR_2;
 int VAR_3;
 if (VAR_0->data_len < 3 || VAR_0->data[0] != 'F') {
  return -1;
 }


 if (VAR_0->data[1] == '-') {
  return 0;
 }
 if (!FUNC_0 (VAR_0->data[1])) {
  return -1;
 }
 if (FUNC_3 (VAR_0->data, "F%x;", &VAR_3) != 1) {
  return -1;
 }

 if (VAR_3 == 0) {
  return 0;
 }
 if (!(VAR_2 = FUNC_4 (VAR_0->data, ';')) || VAR_2 >= VAR_0->data + VAR_0->data_len) {
  return -1;
 }
 VAR_2++;
 if (VAR_3 > 0) {
  FUNC_1 (VAR_1, VAR_2, VAR_3);
 }
 return VAR_3;
}
