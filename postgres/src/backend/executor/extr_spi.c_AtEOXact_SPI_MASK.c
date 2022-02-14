
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ internal_xact; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

void
FUNC_5(bool VAR_4)
{

 if (VAR_3 && VAR_3->internal_xact)
  return;

 if (VAR_4 && VAR_2 != -1)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_4("transaction left non-empty SPI stack"),
     FUNC_3("Check for missing \"SPI_finish\" calls.")));

 FUNC_0();
}
