
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sltg_typelib {TYPE_2__* typelib; } ;
typedef int library_block_start ;
struct TYPE_4__ {int cval; } ;
typedef TYPE_1__ expr_t ;
struct TYPE_5__ {int attrs; } ;
typedef int SIZE_T ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (struct sltg_typelib*,int*) ;
 int FUNC_7 (struct sltg_typelib*) ;
 int FUNC_8 (struct sltg_typelib*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct sltg_typelib*) ;
 int FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_13(struct sltg_typelib *VAR_4)
{
    int VAR_5;
    int *VAR_6;

    FUNC_6(VAR_4, &VAR_5);
    FUNC_10(VAR_4);

    VAR_6 = (int *)(VAR_1 + VAR_2);
    FUNC_1("name_table_offset = %#lx\n", (SIZE_T)VAR_2);
    FUNC_5(&VAR_5, sizeof(VAR_5));

    FUNC_7(VAR_4);

    *VAR_6 = VAR_2 - VAR_5;
    FUNC_1("*name_table_offset = %#x\n", *VAR_6);

    FUNC_8(VAR_4);
    FUNC_9();

    if (FUNC_12(VAR_3, ".res"))
    {
        char VAR_7[13] = "#1";

        expr_t *VAR_8 = FUNC_3(VAR_4->typelib->attrs, VAR_0);
        if (VAR_8)
            FUNC_11(VAR_7, "#%d", VAR_8->cval);
        FUNC_0("TYPELIB", VAR_7);
        FUNC_4(VAR_4->typelib);
    }
    else FUNC_2(VAR_3);
}
