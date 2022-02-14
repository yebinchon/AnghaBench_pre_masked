
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef int attr_list_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 unsigned char FUNC_1 (int ,int const*,int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int,char*,...) ;
 int FUNC_4 (int *,int *,unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned int,int *) ;

__attribute__((used)) static unsigned int FUNC_7(FILE *VAR_7,
                                            const attr_list_t *VAR_8,
                                            type_t *VAR_9,
                                            int VAR_10,
                                            unsigned int *VAR_11)
{
    unsigned int VAR_12 = *VAR_11;
    unsigned char VAR_13 = FUNC_1( VAR_6, VAR_8, VAR_9 );

    FUNC_4(VAR_7, VAR_9, VAR_12);

    if (VAR_13 & 0x80)
    {
        int VAR_14 = FUNC_2( VAR_9, VAR_8, VAR_10 );
        if (!VAR_14) VAR_14 = VAR_1;
        *VAR_11 += 4;
        FUNC_3(VAR_7, 2,"0x%x, 0x0,\t/* %s */\n", VAR_14, FUNC_5(VAR_14) );
        FUNC_3(VAR_7, 2, "NdrFcShort(0x2),\t /* Offset= 2 (%u) */\n", *VAR_11);
        FUNC_3(VAR_7, 0, "/* %2u */\n", *VAR_11);
    }

    FUNC_3(VAR_7, 2, "0x%02x,\t/* FC_BIND_CONTEXT */\n", VAR_0);
    FUNC_3(VAR_7, 2, "0x%x,\t/* Context flags: ", VAR_13);

    if (((VAR_13 & 0x21) != 0x21) && (VAR_13 & VAR_2))
        FUNC_3(VAR_7, 0, "can't be null, ");
    if (VAR_13 & VAR_4)
        FUNC_3(VAR_7, 0, "serialize, ");
    if (VAR_13 & VAR_3)
        FUNC_3(VAR_7, 0, "no serialize, ");
    if (VAR_13 & VAR_5)
        FUNC_3(VAR_7, 0, "strict, ");
    if ((VAR_13 & 0x21) == 0x20)
        FUNC_3(VAR_7, 0, "out, ");
    if ((VAR_13 & 0x21) == 0x21)
        FUNC_3(VAR_7, 0, "return, ");
    if (VAR_13 & 0x40)
        FUNC_3(VAR_7, 0, "in, ");
    if (VAR_13 & 0x80)
        FUNC_3(VAR_7, 0, "via ptr, ");
    FUNC_3(VAR_7, 0, "*/\n");
    FUNC_3(VAR_7, 2, "0x%x,\t/* rundown routine */\n", FUNC_0( VAR_9 ));
    FUNC_3(VAR_7, 2, "0, /* FIXME: param num */\n");
    *VAR_11 += 4;

    FUNC_6( VAR_9, VAR_12, VAR_7 );
    return VAR_12;
}
