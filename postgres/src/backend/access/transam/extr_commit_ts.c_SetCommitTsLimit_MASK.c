
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_2__ {scalar_t__ oldestCommitTsXid; void* newestCommitTsXid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (void*,void*) ;

void
FUNC_4(TransactionId VAR_4, TransactionId VAR_5)
{




 FUNC_1(VAR_0, VAR_2);
 if (VAR_3->oldestCommitTsXid != VAR_1)
 {
  if (FUNC_3(VAR_3->oldestCommitTsXid, VAR_4))
   VAR_3->oldestCommitTsXid = VAR_4;
  if (FUNC_3(VAR_5, VAR_3->newestCommitTsXid))
   VAR_3->newestCommitTsXid = VAR_5;
 }
 else
 {
  FUNC_0(VAR_3->newestCommitTsXid == VAR_1);
  VAR_3->oldestCommitTsXid = VAR_4;
  VAR_3->newestCommitTsXid = VAR_5;
 }
 FUNC_2(VAR_0);
}
