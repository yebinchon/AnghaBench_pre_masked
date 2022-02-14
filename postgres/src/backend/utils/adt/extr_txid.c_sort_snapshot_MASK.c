
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int txid ;
struct TYPE_3__ {int nxip; int xip; } ;
typedef TYPE_1__ TxidSnapshot ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_2(TxidSnapshot *VAR_1)
{
 if (VAR_1->nxip > 1)
 {
  FUNC_0(VAR_1->xip, VAR_1->nxip, sizeof(txid), VAR_0);
  VAR_1->nxip = FUNC_1(VAR_1->xip, VAR_1->nxip, sizeof(txid), VAR_0);
 }
}
