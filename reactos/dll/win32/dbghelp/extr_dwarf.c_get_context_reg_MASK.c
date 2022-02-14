
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_2__ {unsigned int (* map_dwarf_register ) (int ,int ) ;int * (* fetch_context_reg ) (int *,unsigned int,unsigned int*) ;} ;
typedef int CONTEXT ;


 int FUNC_0 (char*,int ,unsigned int,unsigned int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *,unsigned int,unsigned int*) ;

__attribute__((used)) static ULONG_PTR FUNC_3(CONTEXT *VAR_2, ULONG_PTR VAR_3)
{
    unsigned VAR_4 = VAR_1->map_dwarf_register(VAR_3, VAR_0), VAR_5;
    ULONG_PTR* VAR_6 = VAR_1->fetch_context_reg(VAR_2, VAR_4, &VAR_5);

    if (VAR_5 != sizeof(ULONG_PTR))
    {
        FUNC_0("reading register %lu/%u of wrong size %u\n", VAR_3, VAR_4, VAR_5);
        return 0;
    }
    return *VAR_6;
}
