
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt_ht {int symt; } ;
struct module {int dummy; } ;
typedef int ULONG64 ;


 int FUNC_0 (struct module*,unsigned int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline unsigned FUNC_2(struct module* VAR_0, unsigned VAR_1, const struct symt_ht* VAR_2)
{
    unsigned VAR_3 = 0, VAR_4 = VAR_1 / 2;
    ULONG64 VAR_5;

    if (!VAR_1) return 0;
    FUNC_1(&VAR_2->symt, &VAR_5);
    do
    {
        switch (FUNC_0(VAR_0, VAR_4, VAR_5))
        {
        case 0: return VAR_4;
        case -1: VAR_3 = VAR_4 + 1; break;
        case 1: VAR_1 = VAR_4; break;
        }
        VAR_4 = VAR_3 + (VAR_1 - VAR_3) / 2;
    } while (VAR_3 < VAR_1);
    return VAR_4;
}
