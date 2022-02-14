
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int dummy; } ;
struct module {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct module*) ;
 scalar_t__ FUNC_1 (struct module*) ;
 scalar_t__ FUNC_2 (struct process const*,struct module*) ;
 scalar_t__ FUNC_3 (struct process const*,struct module*) ;
 scalar_t__ FUNC_4 (struct module*) ;
 int FUNC_5 (struct process const*,struct module*) ;

BOOL FUNC_6(const struct process* VAR_4, struct module* VAR_5)
{
    BOOL VAR_6 = VAR_0;

    if (!(VAR_3 & VAR_1))
    {
        VAR_6 = FUNC_5(VAR_4, VAR_5);
        VAR_6 = FUNC_1(VAR_5) || VAR_6;

        VAR_6 = FUNC_3(VAR_4, VAR_5) || VAR_6;
        VAR_6 = FUNC_4(VAR_5) || VAR_6;


        VAR_6 = VAR_6 || FUNC_0(VAR_5);




    }

    if (FUNC_2(VAR_4, VAR_5) && !VAR_6)
        VAR_6 = VAR_2;

    return VAR_6;
}
