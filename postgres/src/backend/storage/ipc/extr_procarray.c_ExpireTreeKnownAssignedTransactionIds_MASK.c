
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int latestCompletedXid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_4 ;

void
FUNC_5(TransactionId VAR_5, int VAR_6,
           TransactionId *VAR_7, TransactionId VAR_8)
{
 FUNC_0(VAR_4 >= VAR_2);




 FUNC_2(VAR_1, VAR_0);

 FUNC_1(VAR_5, VAR_6, VAR_7);


 if (FUNC_4(VAR_3->latestCompletedXid,
         VAR_8))
  VAR_3->latestCompletedXid = VAR_8;

 FUNC_3(VAR_1);
}
