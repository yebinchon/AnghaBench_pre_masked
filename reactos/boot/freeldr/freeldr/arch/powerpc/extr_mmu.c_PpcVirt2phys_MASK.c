
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int*,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

int FUNC_7( int VAR_0, int VAR_1 ) {
    int VAR_2 = FUNC_3();
    int VAR_3 = VAR_1 ? 0x20 : 0x10;
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

    int VAR_16, VAR_17, VAR_18, VAR_19;

    if( VAR_2 & VAR_3 ) {
    VAR_7 = FUNC_6( VAR_0 >> 28 );
    VAR_16 = VAR_7 & 0xfffffff;

    VAR_10 = (VAR_16 << 28) | (VAR_0 & 0xfffffff);
    if( VAR_7 & 0x80000000 ) {
        return VAR_10;
    }

    for( VAR_4 = 0; VAR_4 < 4; VAR_4++ ) {
        FUNC_2( VAR_4, VAR_1, &VAR_5, &VAR_6 );
        if( FUNC_0( VAR_5, VAR_6, VAR_0 ) ) {
        return FUNC_1( VAR_5, VAR_6, VAR_0 );
        }
    }

    VAR_8 = FUNC_5();

    VAR_9 = VAR_8 & ~0xffff;
    VAR_12 = ((VAR_8 & 0x1ff) << 10) | 0x3ff;
    VAR_11 = (VAR_16 & 0x7ffff) ^ ((VAR_10 >> 12) & 0xffff);


    for( VAR_17 = 0; VAR_17 < 0x80; VAR_17 += 64, VAR_11 ^= 0x7ffff ) {
        VAR_15 = ((VAR_12 & VAR_11) * 64) + VAR_9;

        for( VAR_4 = 0; VAR_4 < 8; VAR_4++ ) {
        VAR_13 = FUNC_4( VAR_15 + (VAR_4 * 8) );
        VAR_14 = FUNC_4( VAR_15 + (VAR_4 * 8) + 4 );

        VAR_18 = (VAR_13 >> 7) & 0xffffff;
        VAR_19 = VAR_13 & 0x3f;

        if( (VAR_13 & 64) != VAR_17 ) continue;
        if( VAR_18 != (VAR_16 & 0xffffff) ) continue;
        if( VAR_19 != ((VAR_0 >> 22) & 0x3f) ) continue;

        return (VAR_14 & 0xfffff000) | (VAR_0 & 0xfff);
        }
    }
    return -1;
    } else {
    return VAR_0;
    }
}
