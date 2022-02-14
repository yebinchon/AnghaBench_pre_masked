
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xid ;
typedef int txid ;
struct TYPE_5__ {int nxip; } ;
typedef TYPE_1__ TxidSnapshot ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_2__* StringInfo ;


 int FUNC_0 (TYPE_2__*,char*,int) ;

__attribute__((used)) static void
FUNC_1(StringInfo VAR_0, txid VAR_1)
{
 TxidSnapshot *VAR_2 = (TxidSnapshot *) VAR_0->data;


 VAR_2->nxip++;

 FUNC_0(VAR_0, (char *) &VAR_1, sizeof(VAR_1));
}
