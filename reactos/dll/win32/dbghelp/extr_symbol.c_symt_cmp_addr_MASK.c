
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
typedef int ULONG64 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct symt const*,int *) ;

int FUNC_2(const void* VAR_0, const void* VAR_1)
{
    const struct symt* VAR_2 = *(const struct symt* const *)VAR_0;
    const struct symt* VAR_3 = *(const struct symt* const *)VAR_1;
    ULONG64 VAR_4, VAR_5;

    FUNC_1(VAR_2, &VAR_4);
    FUNC_1(VAR_3, &VAR_5);
    return FUNC_0(VAR_4, VAR_5);
}
