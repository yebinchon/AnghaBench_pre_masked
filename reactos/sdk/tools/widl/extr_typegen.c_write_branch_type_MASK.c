
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int typestring_offset; } ;
typedef TYPE_1__ type_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 unsigned char FUNC_1 (TYPE_1__ const*) ;
 unsigned char FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *,int,char*,...) ;
 int FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_2, const type_t *VAR_3, unsigned int *VAR_4)
{
    if (VAR_3 == ((void*)0))
    {
        FUNC_3(VAR_2, 2, "NdrFcShort(0x0),\t/* No type */\n");
    }
    else
    {
        if (FUNC_5(VAR_3) == VAR_0 || FUNC_5(VAR_3) == VAR_1)
        {
            unsigned char VAR_5;
            if (FUNC_5(VAR_3) == VAR_0)
                VAR_5 = FUNC_1(VAR_3);
            else
                VAR_5 = FUNC_2(VAR_3);
            FUNC_3(VAR_2, 2, "NdrFcShort(0x80%02x),\t/* Simple arm type: %s */\n",
                       VAR_5, FUNC_4(VAR_5));
        }
        else if (VAR_3->typestring_offset)
        {
            short VAR_6 = VAR_3->typestring_offset - *VAR_4;
            FUNC_3(VAR_2, 2, "NdrFcShort(0x%hx),\t/* Offset= %d (%d) */\n",
                       VAR_6, VAR_6, VAR_3->typestring_offset);
        }
        else
            FUNC_0("write_branch_type: type unimplemented %d\n", FUNC_5(VAR_3));
    }

    *VAR_4 += 2;
}
