
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xinfo; int nrels; int xnodes; int subxacts; int nsubxacts; } ;
typedef TYPE_1__ xl_xact_parsed_abort ;
typedef int TransactionId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_9(xl_xact_parsed_abort *VAR_3, TransactionId VAR_4)
{
 TransactionId VAR_5;

 FUNC_1(FUNC_7(VAR_4));


 VAR_5 = FUNC_8(VAR_4,
          VAR_3->nsubxacts,
          VAR_3->subxacts);
 FUNC_0(VAR_5);

 if (VAR_2 == VAR_0)
 {

  FUNC_6(VAR_4, VAR_3->nsubxacts, VAR_3->subxacts);
 }
 else
 {
  FUNC_4(VAR_5);


  FUNC_6(VAR_4, VAR_3->nsubxacts, VAR_3->subxacts);




  FUNC_3(
             VAR_4, VAR_3->nsubxacts, VAR_3->subxacts, VAR_5);
  if (VAR_3->xinfo & VAR_1)
   FUNC_5(VAR_4, VAR_3->nsubxacts, VAR_3->subxacts);
 }


 FUNC_2(VAR_3->xnodes, VAR_3->nrels, 1);
}
