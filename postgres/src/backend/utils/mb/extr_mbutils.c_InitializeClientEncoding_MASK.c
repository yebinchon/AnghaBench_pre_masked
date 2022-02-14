
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;

void
FUNC_7(void)
{
 FUNC_0(!VAR_2);
 VAR_2 = 1;

 if (FUNC_2(VAR_3) < 0 ||
  FUNC_3(VAR_3) < 0)
 {




  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("conversion between %s and %s is not supported",
      VAR_4[VAR_3].name,
      FUNC_1())));
 }
}
