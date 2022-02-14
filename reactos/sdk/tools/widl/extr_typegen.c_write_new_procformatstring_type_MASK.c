
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var_t ;
typedef int FILE ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned char FUNC_0 (int const*,int,unsigned short*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int VAR_9 ;
 int FUNC_2 (int *,int,char*,...) ;
 int FUNC_3 (char*,char*,unsigned short) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 unsigned int FUNC_6 (unsigned char) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static unsigned int FUNC_8(FILE *VAR_10, int VAR_11, const var_t *VAR_12,
                                                    int VAR_13, unsigned int *VAR_14)
{
    char VAR_15[128];
    unsigned int VAR_16, VAR_17;
    unsigned short VAR_18;
    unsigned char VAR_19 = FUNC_0( VAR_12, VAR_13, &VAR_18, &VAR_16, &VAR_17 );

    FUNC_5( VAR_15, "/* flags:" );
    if (VAR_18 & VAR_8) FUNC_4( VAR_15, " must size," );
    if (VAR_18 & VAR_7) FUNC_4( VAR_15, " must free," );
    if (VAR_18 & VAR_4) FUNC_4( VAR_15, " pipe," );
    if (VAR_18 & VAR_2) FUNC_4( VAR_15, " in," );
    if (VAR_18 & VAR_3) FUNC_4( VAR_15, " out," );
    if (VAR_18 & VAR_5) FUNC_4( VAR_15, " return," );
    if (VAR_18 & VAR_0) FUNC_4( VAR_15, " base type," );
    if (VAR_18 & VAR_1) FUNC_4( VAR_15, " by value," );
    if (VAR_18 & VAR_6) FUNC_4( VAR_15, " simple ref," );
    if (VAR_18 >> 13) FUNC_3( VAR_15 + FUNC_7(VAR_15), " srv size=%u,", (VAR_18 >> 13) * 8 );
    FUNC_5( VAR_15 + FUNC_7( VAR_15 ) - 1, " */" );
    FUNC_2( VAR_10, VAR_11, "NdrFcShort(0x%hx),\t%s\n", VAR_18, VAR_15 );
    FUNC_2( VAR_10, VAR_11, "NdrFcShort(0x%x),	/* stack offset = %u */\n",
                *VAR_14, *VAR_14 );
    if (VAR_18 & VAR_0)
    {
        FUNC_2( VAR_10, VAR_11, "0x%02x,	/* %s */\n", VAR_19, FUNC_6(VAR_19) );
        FUNC_2( VAR_10, VAR_11, "0x0,\n" );
    }
    else
        FUNC_2( VAR_10, VAR_11, "NdrFcShort(0x%x),	/* type offset = %u */\n",
                    VAR_17, VAR_17 );
    *VAR_14 += FUNC_1( VAR_16, VAR_9 );
    return 6;
}
