
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int oldestClogXid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

void
FUNC_3(TransactionId VAR_3)
{
 FUNC_0(VAR_0, VAR_1);
 if (FUNC_2(VAR_2->oldestClogXid,
         VAR_3))
 {
  VAR_2->oldestClogXid = VAR_3;
 }
 FUNC_1(VAR_0);
}
