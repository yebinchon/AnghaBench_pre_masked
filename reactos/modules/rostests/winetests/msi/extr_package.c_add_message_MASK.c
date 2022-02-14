
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct externalui_message {int dummy; } ;


 int FUNC_0 () ;
 struct externalui_message* FUNC_1 (int ,int ,int) ;
 struct externalui_message* FUNC_2 (int ,int ,struct externalui_message*,int) ;
 int FUNC_3 (struct externalui_message*) ;
 struct externalui_message* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(const struct externalui_message *VAR_3)
{
    if (!VAR_0)
    {
        VAR_2 = 10;
        VAR_0 = FUNC_1(FUNC_0(), 0, VAR_2 * sizeof(*VAR_0));
    }
    if (VAR_1 == VAR_2)
    {
        VAR_2 *= 2;
        VAR_0 = FUNC_2(FUNC_0(), 0, VAR_0, VAR_2 * sizeof(*VAR_0));
    }

    FUNC_3(VAR_0);

    VAR_0[VAR_1++] = *VAR_3;
}
