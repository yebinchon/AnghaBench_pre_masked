
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ DsoJsonStr ;


 char* FUNC_0 (scalar_t__,scalar_t__) ;

char * FUNC_1 (DsoJsonStr *VAR_0) {
 if (VAR_0 && VAR_0->data && VAR_0->len> 0) {
  return FUNC_0 (VAR_0->data, VAR_0->len);
 }
 return ((void*)0);
}
