
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int headPage; int tailXid; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* VAR_3 ;

void
FUNC_6(void)
{
 int VAR_4;

 FUNC_0(VAR_1, VAR_0);


 if (VAR_3->headPage < 0)
 {
  FUNC_1(VAR_1);
  return;
 }

 if (FUNC_5(VAR_3->tailXid))
 {

  VAR_4 = FUNC_2(VAR_3->tailXid);
 }
 else
 {
  VAR_4 = VAR_3->headPage;
  VAR_3->headPage = -1;
 }

 FUNC_1(VAR_1);


 FUNC_4(VAR_2, VAR_4);
 FUNC_3(VAR_2, 1);
}
