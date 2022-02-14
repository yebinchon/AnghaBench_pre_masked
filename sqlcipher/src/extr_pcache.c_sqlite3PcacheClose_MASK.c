
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xDestroy ) (scalar_t__) ;} ;
struct TYPE_7__ {TYPE_1__ pcache2; } ;
struct TYPE_6__ {scalar_t__ pCache; } ;
typedef TYPE_2__ PCache ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(PCache *VAR_1){
  FUNC_0( VAR_1->pCache!=0 );
  FUNC_1(("%p.CLOSE\n",VAR_1));
  VAR_0.pcache2.xDestroy(VAR_1->pCache);
}
