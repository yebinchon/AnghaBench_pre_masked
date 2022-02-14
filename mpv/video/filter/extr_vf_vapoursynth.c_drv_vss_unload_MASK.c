
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int * vscore; int * vsapi; int * se; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_0)
{
    if (VAR_0->se)
        FUNC_0(VAR_0->se);
    VAR_0->se = ((void*)0);
    VAR_0->vsapi = ((void*)0);
    VAR_0->vscore = ((void*)0);
}
