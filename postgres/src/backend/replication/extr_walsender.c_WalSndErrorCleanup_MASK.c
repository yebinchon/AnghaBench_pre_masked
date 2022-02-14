
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ws_file; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

void
FUNC_8(void)
{
 FUNC_1();
 FUNC_0();
 FUNC_6();

 if (VAR_5->ws_file >= 0)
 {
  FUNC_5(VAR_5->ws_file);
  VAR_5->ws_file = -1;
 }

 if (VAR_0 != ((void*)0))
  FUNC_3();

 FUNC_2();

 VAR_4 = 0;

 if (VAR_3 || VAR_2)
  FUNC_7(0);


 FUNC_4(VAR_1);
}
