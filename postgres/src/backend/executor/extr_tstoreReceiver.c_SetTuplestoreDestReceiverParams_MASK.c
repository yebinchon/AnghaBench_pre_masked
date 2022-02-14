
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int Tuplestorestate ;
struct TYPE_3__ {scalar_t__ mydest; } ;
struct TYPE_4__ {int detoast; int cxt; int * tstore; TYPE_1__ pub; } ;
typedef TYPE_2__ TStoreState ;
typedef int MemoryContext ;
typedef int DestReceiver ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

void
FUNC_1(DestReceiver *VAR_1,
        Tuplestorestate *VAR_2,
        MemoryContext VAR_3,
        bool VAR_4)
{
 TStoreState *VAR_5 = (TStoreState *) VAR_1;

 FUNC_0(VAR_5->pub.mydest == VAR_0);
 VAR_5->tstore = VAR_2;
 VAR_5->cxt = VAR_3;
 VAR_5->detoast = VAR_4;
}
