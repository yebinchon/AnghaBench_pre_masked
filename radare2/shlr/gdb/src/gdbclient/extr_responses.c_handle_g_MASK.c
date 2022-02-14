
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_len; int data; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;

int FUNC_2(libgdbr_t *VAR_0) {
 if (FUNC_1 (VAR_0->data, VAR_0->data_len, VAR_0->data) < 0) {
  return -1;
 }
 VAR_0->data_len = VAR_0->data_len / 2;
 return FUNC_0 (VAR_0);
}
