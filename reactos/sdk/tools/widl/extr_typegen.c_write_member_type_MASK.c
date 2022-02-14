
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned int typestring_offset; } ;
typedef TYPE_1__ type_t ;
typedef int attr_list_t ;
typedef int FILE ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (int *,int,char*,...) ;
 int FUNC_6 (unsigned char) ;
 scalar_t__ FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (int *,TYPE_1__ const*,unsigned int*) ;

__attribute__((used)) static void FUNC_9(FILE *VAR_4, const type_t *VAR_5,
                              int VAR_6, const attr_list_t *VAR_7,
                              const type_t *VAR_8, unsigned int *VAR_9,
                              unsigned int *VAR_10)
{
    if (FUNC_3(VAR_8) && !FUNC_2(VAR_8))
    {
        unsigned int VAR_11;
        short VAR_12;

        if (FUNC_7(VAR_8) == VAR_3 && FUNC_1(VAR_7, VAR_0))
        {
            VAR_11 = *VAR_9;
            *VAR_9 += 8;
        }
        else
        {
            VAR_11 = VAR_8->typestring_offset;
        }
        VAR_12 = VAR_11 - (*VAR_10 + 2);

        FUNC_5(VAR_4, 2, "0x4c,\t/* FC_EMBEDDED_COMPLEX */\n");



        FUNC_5(VAR_4, 2, "0x0,\n");
        FUNC_5(VAR_4, 2, "NdrFcShort(0x%hx),\t/* Offset= %hd (%u) */\n",
                   VAR_12, VAR_12, VAR_11);
        *VAR_10 += 4;
    }
    else if (FUNC_4(VAR_8) || FUNC_2(VAR_8))
    {
        unsigned char VAR_13 = VAR_6 ? VAR_2 : VAR_1;
        FUNC_5(VAR_4, 2, "0x%x,\t/* %s */\n", VAR_13, FUNC_6(VAR_13));
        *VAR_10 += 1;
    }
    else if (!FUNC_8(VAR_4, VAR_8, VAR_10))
        FUNC_0("Unsupported member type %d\n", FUNC_7(VAR_8));
}
