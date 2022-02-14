
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
typedef TYPE_1__* adns_query ;
struct TYPE_3__ {scalar_t__ interim_allocd; int * final_allocspace; } ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int) ;

void *FUNC_2(adns_query VAR_0, size_t VAR_1) {




  void *VAR_2;

  VAR_1= FUNC_0(VAR_1);
  VAR_2= VAR_0->final_allocspace;
  FUNC_1(VAR_2);
  VAR_0->interim_allocd -= VAR_1;
  FUNC_1(VAR_0->interim_allocd>=0);
  VAR_0->final_allocspace= (byte*)VAR_2 + VAR_1;
  return VAR_2;
}
