
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef int txid ;
struct TYPE_3__ {int last_xid; scalar_t__ epoch; } ;
typedef TYPE_1__ TxidEpoch ;
typedef int TransactionId ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static txid
FUNC_3(TransactionId VAR_0, const TxidEpoch *VAR_1)
{
 uint64 VAR_2;


 if (!FUNC_1(VAR_0))
  return (txid) VAR_0;


 VAR_2 = (uint64) VAR_1->epoch;
 if (VAR_0 > VAR_1->last_xid &&
  FUNC_2(VAR_0, VAR_1->last_xid))
  VAR_2--;
 else if (VAR_0 < VAR_1->last_xid &&
    FUNC_0(VAR_0, VAR_1->last_xid))
  VAR_2++;

 return (VAR_2 << 32) | VAR_0;
}
