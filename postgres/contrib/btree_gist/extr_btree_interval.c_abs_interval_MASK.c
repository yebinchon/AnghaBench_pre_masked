
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ Interval ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

Interval *
FUNC_5(Interval *VAR_2)
{
 static Interval VAR_3 = {0, 0, 0};

 if (FUNC_0(FUNC_3(VAR_0,
           FUNC_4(VAR_2),
           FUNC_4(&VAR_3))))
  VAR_2 = FUNC_1(FUNC_2(VAR_1,
              FUNC_4(VAR_2)));

 return VAR_2;
}
