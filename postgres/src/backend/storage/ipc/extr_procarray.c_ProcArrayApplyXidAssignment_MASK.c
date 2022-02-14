
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int lastOverflowedXid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_8(TransactionId VAR_6,
       int VAR_7, TransactionId *VAR_8)
{
 TransactionId VAR_9;
 int VAR_10;

 FUNC_0(VAR_5 >= VAR_3);

 VAR_9 = FUNC_6(VAR_6, VAR_7, VAR_8);
 FUNC_4(VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_5(VAR_8[VAR_10], VAR_6);


 if (VAR_5 == VAR_3)
  return;




 FUNC_2(VAR_2, VAR_1);




 FUNC_1(VAR_0, VAR_7, VAR_8);




 if (FUNC_7(VAR_4->lastOverflowedXid, VAR_9))
  VAR_4->lastOverflowedXid = VAR_9;

 FUNC_3(VAR_2);
}
