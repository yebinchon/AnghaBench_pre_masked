
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data_len; int last_code; } ;
typedef TYPE_1__ libgdbr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(libgdbr_t *VAR_2) {
 if (VAR_2->data_len == 0) {
  VAR_2->last_code = VAR_0;
 } else {
  VAR_2->last_code = VAR_1;
 }
 return FUNC_0 (VAR_2);
}
