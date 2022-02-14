
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ json_dict; } ;
typedef TYPE_1__ DsoJsonDict ;


 char* FUNC_0 (scalar_t__,int ) ;
 char* FUNC_1 (char*) ;

char * FUNC_2 (DsoJsonDict *VAR_0) {
 if (VAR_0 && VAR_0->json_dict) {
  return FUNC_0 (VAR_0->json_dict, 0);
 }
 return FUNC_1 ("{}");
}
