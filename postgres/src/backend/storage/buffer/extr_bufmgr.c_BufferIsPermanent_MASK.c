
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
typedef TYPE_1__ BufferDesc ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

bool
FUNC_6(Buffer VAR_1)
{
 BufferDesc *VAR_2;


 if (FUNC_1(VAR_1))
  return 0;


 FUNC_0(FUNC_3(VAR_1));
 FUNC_0(FUNC_2(VAR_1));
 VAR_2 = FUNC_4(VAR_1 - 1);
 return (FUNC_5(&VAR_2->state) & VAR_0) != 0;
}
