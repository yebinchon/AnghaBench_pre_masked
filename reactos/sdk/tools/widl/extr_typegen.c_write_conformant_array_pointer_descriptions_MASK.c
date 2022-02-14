
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef int attr_list_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char*,unsigned short,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int *,int const*,int ,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_7(
    FILE *VAR_3, const attr_list_t *VAR_4, type_t *VAR_5,
    unsigned int VAR_6, unsigned int *VAR_7)
{
    int VAR_8 = 0;

    if (FUNC_1(VAR_5) && !FUNC_4(VAR_5))
    {
        unsigned int VAR_9 = 0;


        VAR_8 = FUNC_6(
            ((void*)0), VAR_4, FUNC_3(VAR_5), ((void*)0), ((void*)0), &VAR_9);
        if (VAR_8 > 0)
        {
            unsigned int VAR_10;
            unsigned int VAR_11 = VAR_6;
            unsigned int VAR_12 = VAR_6;

            VAR_10 = FUNC_5(FUNC_3(VAR_5));

            if (VAR_10 > VAR_2)
                FUNC_0("array size of %u bytes is too large\n", VAR_10);

            FUNC_2(VAR_3, 2, "0x%02x, /* FC_VARIABLE_REPEAT */\n", VAR_1);
            FUNC_2(VAR_3, 2, "0x%02x, /* FC_FIXED_OFFSET */\n", VAR_0);
            FUNC_2(VAR_3, 2, "NdrFcShort(0x%hx),\t/* Increment = %d */\n", (unsigned short)VAR_10, VAR_10);
            FUNC_2(VAR_3, 2, "NdrFcShort(0x%hx),\t/* Offset to array = %d */\n", (unsigned short)VAR_6, VAR_6);
            FUNC_2(VAR_3, 2, "NdrFcShort(0x%hx),\t/* Number of pointers = %d */\n", (unsigned short)VAR_8, VAR_8);
            *VAR_7 += 8;

            VAR_8 = FUNC_6(
                VAR_3, VAR_4, FUNC_3(VAR_5),
                &VAR_11, &VAR_12,
                VAR_7);
        }
    }

    return VAR_8;
}
