
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* array; } ;
typedef TYPE_2__ adns_rr_intstrpair ;
typedef int adns_query ;
struct TYPE_3__ {int str; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(adns_query VAR_0, void *VAR_1) {
  adns_rr_intstrpair *VAR_2= VAR_1;

  FUNC_0(VAR_0,&VAR_2->array[0].str);
  FUNC_0(VAR_0,&VAR_2->array[1].str);
}
