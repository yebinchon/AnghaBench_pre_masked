
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int numPrepXacts; int * prepXacts; } ;
typedef int GlobalTransactionData ;
typedef int * GlobalTransaction ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(GlobalTransaction *VAR_3)
{
 GlobalTransaction VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_0(VAR_2, VAR_0);

 if (VAR_1->numPrepXacts == 0)
 {
  FUNC_1(VAR_2);

  *VAR_3 = ((void*)0);
  return 0;
 }

 VAR_5 = VAR_1->numPrepXacts;
 VAR_4 = (GlobalTransaction) FUNC_3(sizeof(GlobalTransactionData) * VAR_5);
 *VAR_3 = VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_2(VAR_4 + VAR_6, VAR_1->prepXacts[VAR_6],
      sizeof(GlobalTransactionData));

 FUNC_1(VAR_2);

 return VAR_5;
}
