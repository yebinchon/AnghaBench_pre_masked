
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int se; int vscore; int vsapi; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct priv *VAR_0)
{


    if (FUNC_0(&VAR_0->se))
        return -1;
    VAR_0->vsapi = FUNC_2();
    VAR_0->vscore = FUNC_1(VAR_0->se);
    return 0;
}
