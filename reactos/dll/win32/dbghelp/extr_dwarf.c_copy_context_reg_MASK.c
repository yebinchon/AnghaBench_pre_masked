
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_2__ {unsigned int (* map_dwarf_register ) (int ,int ) ;int * (* fetch_context_reg ) (int *,unsigned int,unsigned int*) ;} ;
typedef int CONTEXT ;


 int FUNC_0 (char*,int ,unsigned int,int ,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,int *,unsigned int) ;
 unsigned int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *,unsigned int,unsigned int*) ;
 int * FUNC_5 (int *,unsigned int,unsigned int*) ;

__attribute__((used)) static void FUNC_6(CONTEXT *VAR_2, ULONG_PTR VAR_3, CONTEXT* VAR_4, ULONG_PTR VAR_5)
{
    unsigned VAR_6 = VAR_1->map_dwarf_register(VAR_3, VAR_0), VAR_7;
    unsigned VAR_8 = VAR_1->map_dwarf_register(VAR_5, VAR_0), VAR_9;
    ULONG_PTR* VAR_10 = VAR_1->fetch_context_reg(VAR_2, VAR_6, &VAR_7);
    ULONG_PTR* VAR_11 = VAR_1->fetch_context_reg(VAR_4, VAR_8, &VAR_9);

    if (VAR_7 != VAR_9)
    {
        FUNC_0("Cannot copy register %lu/%u => %lu/%u because of size mismatch (%u => %u)\n",
              VAR_5, VAR_8, VAR_3, VAR_6, VAR_9, VAR_7);
        return;
    }
    FUNC_1(VAR_10, VAR_11, VAR_7);
}
