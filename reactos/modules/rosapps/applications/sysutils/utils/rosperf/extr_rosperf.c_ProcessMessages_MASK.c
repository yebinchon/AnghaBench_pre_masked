
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ message; int wParam; } ;
typedef TYPE_1__ MSG ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
  MSG VAR_2;

  while (FUNC_1(&VAR_2, ((void*)0), 0, 0, VAR_0))
    {
      if (VAR_1 == VAR_2.message)
        {
          FUNC_3(VAR_2.wParam);
        }
      FUNC_2(&VAR_2);
      FUNC_0(&VAR_2);
    }
}
