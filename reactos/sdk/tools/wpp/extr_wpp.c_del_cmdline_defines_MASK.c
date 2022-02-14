
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct define {int name; scalar_t__ value; struct define* next; } ;


 struct define* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void)
{
    struct define *VAR_1;

    for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {
        if (VAR_1->value) FUNC_0( VAR_1->name );
    }
}
