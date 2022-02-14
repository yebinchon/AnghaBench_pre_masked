
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_2__ {int commitTsActive; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 TYPE_1__* VAR_4 ;

void
FUNC_7(TransactionId VAR_5)
{
 int VAR_6;






 FUNC_0(!VAR_2);
 if (!VAR_4->commitTsActive)
  return;





 if (FUNC_4(VAR_5) != 0 &&
  !FUNC_3(VAR_5, VAR_1))
  return;

 VAR_6 = FUNC_5(VAR_5);

 FUNC_1(VAR_0, VAR_3);


 FUNC_6(VAR_6, !VAR_2);

 FUNC_2(VAR_0);
}
