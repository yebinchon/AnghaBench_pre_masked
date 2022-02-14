
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_len; char* data; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;

int FUNC_3(libgdbr_t *VAR_0) {
 if (VAR_0->data_len == 3 && VAR_0->data[0] == 'E') {

  FUNC_0 (VAR_0);
  return -1;
 }
 int VAR_1 = FUNC_1 (VAR_0->data);
 VAR_0->data_len = VAR_1 / 2;
 FUNC_2 (VAR_0->data, VAR_1, VAR_0->data);
 return FUNC_0 (VAR_0);
}
