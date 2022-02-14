
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ TransactionId ;
struct TYPE_2__ {scalar_t__ oldestCommitTsXid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

void
FUNC_3(TransactionId VAR_4)
{
 FUNC_0(VAR_0, VAR_2);
 if (VAR_3->oldestCommitTsXid != VAR_1 &&
  FUNC_2(VAR_3->oldestCommitTsXid, VAR_4))
  VAR_3->oldestCommitTsXid = VAR_4;
 FUNC_1(VAR_0);
}
