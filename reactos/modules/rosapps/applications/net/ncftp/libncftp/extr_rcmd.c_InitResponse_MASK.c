
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msg; } ;
typedef TYPE_1__* ResponsePtr ;
typedef int Response ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;

ResponsePtr
FUNC_3(void)
{
 ResponsePtr VAR_0;

 VAR_0 = (ResponsePtr) FUNC_2(FUNC_1(1), sizeof(Response));
 if (VAR_0 != ((void*)0))
  FUNC_0(&VAR_0->msg);
 return (VAR_0);
}
