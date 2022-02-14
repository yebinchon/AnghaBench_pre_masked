
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xPagecount ) (scalar_t__) ;} ;
struct TYPE_7__ {TYPE_1__ pcache2; } ;
struct TYPE_6__ {scalar_t__ pCache; } ;
typedef TYPE_2__ PCache ;


 int FUNC_0 (int) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(PCache *VAR_1){
  FUNC_0( VAR_1->pCache!=0 );
  return VAR_0.pcache2.xPagecount(VAR_1->pCache);
}
