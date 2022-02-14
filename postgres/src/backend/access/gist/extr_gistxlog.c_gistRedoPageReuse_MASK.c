
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_2__ {int node; int latestRemovedFullXid; } ;
typedef TYPE_1__ gistxlogPageReuse ;
typedef int XLogReaderState ;
typedef int TransactionId ;
typedef int FullTransactionId ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(XLogReaderState *VAR_2)
{
 gistxlogPageReuse *VAR_3 = (gistxlogPageReuse *) FUNC_3(VAR_2);
 if (VAR_0)
 {
  FullTransactionId VAR_4 = VAR_3->latestRemovedFullXid;
  FullTransactionId VAR_5 = FUNC_0();
  uint64 VAR_6;







  VAR_5 = FUNC_0();
  VAR_6 = FUNC_2(VAR_5) -
   FUNC_2(VAR_4);
  if (VAR_6 < VAR_1 / 2)
  {
   TransactionId VAR_7;

   VAR_7 = FUNC_4(VAR_4);
   FUNC_1(VAR_7,
            VAR_3->node);
  }
 }
}
