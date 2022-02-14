
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_2__ {int ti_options; int bistate; int output_cid; int transientrel; int transientoid; } ;
typedef int Relation ;
typedef int DestReceiver ;
typedef TYPE_1__ DR_transientrel ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(DestReceiver *VAR_5, int VAR_6, TupleDesc VAR_7)
{
 DR_transientrel *VAR_8 = (DR_transientrel *) VAR_5;
 Relation VAR_9;

 VAR_9 = FUNC_5(VAR_8->transientoid, VAR_1);




 VAR_8->transientrel = VAR_9;
 VAR_8->output_cid = FUNC_2(1);





 VAR_8->ti_options = VAR_3 | VAR_2;
 if (!FUNC_4())
  VAR_8->ti_options |= VAR_4;
 VAR_8->bistate = FUNC_1();


 FUNC_0(FUNC_3(VAR_9) == VAR_0);
}
