
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct frame_state {int cfa_rule; int* rules; scalar_t__* regs; scalar_t__ cfa_offset; int cfa_reg; } ;
struct cpu_stack_walk {int dummy; } ;
typedef scalar_t__ ULONG_PTR ;
typedef int CONTEXT ;


 int VAR_0 ;
 unsigned int VAR_1 ;







 int VAR_2 ;
 int FUNC_0 (char*,void*) ;
 int FUNC_1 (int *,unsigned int,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (struct module const*,struct cpu_stack_walk*,unsigned char const*,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct cpu_stack_walk*,int *,unsigned int,scalar_t__,int ) ;
 int FUNC_5 (struct cpu_stack_walk*,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_6(const struct module* VAR_3, struct cpu_stack_walk* VAR_4,
                              CONTEXT *VAR_5, struct frame_state *VAR_6, ULONG_PTR* VAR_7)
{
    unsigned int VAR_8;
    ULONG_PTR VAR_9;
    CONTEXT VAR_10 = *VAR_5;

    switch (VAR_6->cfa_rule)
    {
    case 133:
        *VAR_7 = FUNC_2(VAR_3, VAR_4, (const unsigned char*)VAR_6->cfa_offset, VAR_5);
        if (!FUNC_5(VAR_4, *VAR_7, VAR_7, sizeof(*VAR_7)))
        {
            FUNC_0("Couldn't read memory at %p\n", (void*)*VAR_7);
            return;
        }
        break;
    case 128:
        *VAR_7 = FUNC_2(VAR_3, VAR_4, (const unsigned char*)VAR_6->cfa_offset, VAR_5);
        break;
    default:
        *VAR_7 = FUNC_3(VAR_5, VAR_6->cfa_reg) + VAR_6->cfa_offset;
        break;
    }
    if (!*VAR_7) return;

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
    {
        switch (VAR_6->rules[VAR_8])
        {
        case 129:
        case 130:
        case 131:
            break;
        case 134:
            FUNC_4(VAR_4, &VAR_10, VAR_8, *VAR_7 + VAR_6->regs[VAR_8], VAR_2);
            break;
        case 132:
            FUNC_1(&VAR_10, VAR_8, VAR_5, VAR_6->regs[VAR_8]);
            break;
        case 133:
            VAR_9 = FUNC_2(VAR_3, VAR_4, (const unsigned char*)VAR_6->regs[VAR_8], VAR_5);
            FUNC_4(VAR_4, &VAR_10, VAR_8, VAR_9, VAR_2);
            break;
        case 128:
            VAR_9 = FUNC_2(VAR_3, VAR_4, (const unsigned char*)VAR_6->regs[VAR_8], VAR_5);
            FUNC_4(VAR_4, &VAR_10, VAR_8, VAR_9, VAR_0);
            break;
        }
    }
    *VAR_5 = VAR_10;
}
