
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* DebugInfo; } ;
struct TYPE_8__ {TYPE_5__ lock; } ;
struct TYPE_7__ {scalar_t__* Spare; } ;
typedef TYPE_2__ IDirectPlayImpl ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(IDirectPlayImpl *VAR_0)
{
     FUNC_0( VAR_0 );
     VAR_0->lock.DebugInfo->Spare[0] = 0;
     FUNC_1( &VAR_0->lock );
     FUNC_3( FUNC_2(), 0, VAR_0 );
}
