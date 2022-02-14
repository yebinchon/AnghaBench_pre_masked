
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
struct module {int dummy; } ;
typedef int ULONG64 ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct module*,struct symt const*,int ,int*) ;
 struct symt const* FUNC_1 (struct module*,int) ;

__attribute__((used)) static void FUNC_2(struct module* VAR_2, const struct symt* VAR_3, ULONG64* VAR_4)
{
    DWORD VAR_5;

    if (FUNC_0(VAR_2, VAR_3, VAR_0, VAR_4) && *VAR_4)
        return;

    if (FUNC_0(VAR_2, VAR_3, VAR_1, &VAR_5) &&
        FUNC_0(VAR_2, FUNC_1(VAR_2, VAR_5), VAR_0, VAR_4)) return;
    *VAR_4 = 0x1000;
}
