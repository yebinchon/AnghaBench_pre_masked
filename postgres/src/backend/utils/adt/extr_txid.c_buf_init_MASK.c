
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* txid ;
struct TYPE_2__ {scalar_t__ nxip; void* xmax; void* xmin; } ;
typedef TYPE_1__ TxidSnapshot ;
typedef int StringInfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static StringInfo
FUNC_3(txid VAR_0, txid VAR_1)
{
 TxidSnapshot VAR_2;
 StringInfo VAR_3;

 VAR_2.xmin = VAR_0;
 VAR_2.xmax = VAR_1;
 VAR_2.nxip = 0;

 VAR_3 = FUNC_2();
 FUNC_1(VAR_3, (char *) &VAR_2, FUNC_0(0));
 return VAR_3;
}
