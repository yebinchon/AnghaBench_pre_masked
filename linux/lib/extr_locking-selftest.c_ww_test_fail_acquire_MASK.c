
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ctx; } ;
struct TYPE_9__ {int stamp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_5;

 FUNC_2(&VAR_3);
 VAR_3.stamp++;

 VAR_5 = FUNC_3(&VAR_2, &VAR_3);

 if (FUNC_1(!VAR_2.ctx) ||
     FUNC_1(VAR_5))
  return;


 VAR_5 = FUNC_3(&VAR_2, &VAR_3);
 FUNC_1(VAR_5 != -VAR_0);

 VAR_5 = FUNC_4(&VAR_2);
 FUNC_1(VAR_5);

 VAR_4 = VAR_3;
 VAR_4+;
 VAR_5 = FUNC_3(&VAR_2, &VAR_4);
 FUNC_1(VAR_5 != -VAR_1);
 FUNC_5(&VAR_2);

 if (FUNC_4(&VAR_2))
  FUNC_5(&VAR_2);




}
