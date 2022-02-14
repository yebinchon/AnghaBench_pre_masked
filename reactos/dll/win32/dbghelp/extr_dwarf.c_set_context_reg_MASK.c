
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct cpu_stack_walk {int dummy; } ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_2__ {unsigned int (* map_dwarf_register ) (scalar_t__,int ) ;scalar_t__* (* fetch_context_reg ) (int *,unsigned int,unsigned int*) ;} ;
typedef int CONTEXT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,scalar_t__,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (char*,void*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (scalar_t__*,char*,unsigned int) ;
 unsigned int FUNC_3 (scalar_t__,int ) ;
 scalar_t__* FUNC_4 (int *,unsigned int,unsigned int*) ;
 int FUNC_5 (struct cpu_stack_walk*,scalar_t__,char*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct cpu_stack_walk* VAR_2, CONTEXT *VAR_3, ULONG_PTR VAR_4,
                            ULONG_PTR VAR_5, BOOL VAR_6)
{
    unsigned VAR_7 = VAR_1->map_dwarf_register(VAR_4, VAR_0), VAR_8;
    ULONG_PTR* VAR_9 = VAR_1->fetch_context_reg(VAR_3, VAR_7, &VAR_8);

    if (VAR_6)
    {
        char VAR_10[16];

        if (VAR_8 > sizeof(VAR_10))
        {
            FUNC_0("register %lu/%u size is too wide: %u\n", VAR_4, VAR_7, VAR_8);
            return;
        }
        if (!FUNC_5(VAR_2, VAR_5, VAR_10, VAR_8))
        {
            FUNC_1("Couldn't read memory at %p\n", (void*)VAR_5);
            return;
        }
        FUNC_2(VAR_9, VAR_10, VAR_8);
    }
    else
    {
        if (VAR_8 != sizeof(ULONG_PTR))
        {
            FUNC_0("assigning to register %lu/%u of wrong size %u\n", VAR_4, VAR_7, VAR_8);
            return;
        }
        *VAR_9 = VAR_5;
    }
}
