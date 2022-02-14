
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* xCachesize ) (scalar_t__,int ) ;} ;
struct TYPE_8__ {TYPE_1__ pcache2; } ;
struct TYPE_7__ {scalar_t__ pCache; int szCache; } ;
typedef TYPE_2__ PCache ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (scalar_t__,int ) ;

void FUNC_3(PCache *VAR_1, int VAR_2){
  FUNC_0( VAR_1->pCache!=0 );
  VAR_1->szCache = VAR_2;
  VAR_0.pcache2.xCachesize(VAR_1->pCache,
                                         FUNC_1(VAR_1));
}
