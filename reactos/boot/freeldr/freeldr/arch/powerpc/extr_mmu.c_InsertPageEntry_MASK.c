
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;

BOOLEAN FUNC_4( int VAR_2, int VAR_3, int VAR_4, int VAR_5 ) {
    int VAR_6, VAR_7, VAR_8;
    int VAR_9 = VAR_5 ? VAR_5 : FUNC_1();
    int VAR_10 = FUNC_2( (VAR_2 >> 28) & 0xf );
    int VAR_11 = VAR_10 & 0xfffffff;
    int VAR_12 = VAR_9 & ~0xffff;
    int VAR_13 = ((VAR_9 & 0x1ff) << 10) | 0x3ff;
    int VAR_14 = (VAR_11 << 28) | (VAR_2 & 0xfffffff);
    int VAR_15 = (VAR_11 & 0x7ffff) ^ ((VAR_14 >> 12) & 0xffff);
    int VAR_16 = ((VAR_13 & VAR_15) * 64) + VAR_12;

    for( VAR_6 = 0; VAR_6 < 8; VAR_6++ ) {
    VAR_7 = FUNC_0( VAR_16 + (VAR_6 * 8) );

    if( (VAR_4 != VAR_6) && (VAR_7 & 0x80000000) ) continue;

    VAR_7 = (1 << 31) | (VAR_11 << 7) | ((VAR_2 >> 22) & 0x3f);
    VAR_8 = VAR_3 & ~0xfff;

    FUNC_3( VAR_16 + (VAR_6 * 8), VAR_7 );
    FUNC_3( VAR_16 + (VAR_6 * 8) + 4, VAR_8 );

    return VAR_1;
    }

    return VAR_0;
}
