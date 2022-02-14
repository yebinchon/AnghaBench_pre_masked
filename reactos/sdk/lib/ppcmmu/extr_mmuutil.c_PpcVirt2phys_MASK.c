
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vaddr_t ;


 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int*,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

int FUNC_7( vaddr_t VAR_0, int VAR_1 ) {
    int VAR_2 = FUNC_3();
    int VAR_3 = VAR_1 ? 0x20 : 0x10;
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21;

    if( VAR_2 & VAR_3 ) {
 VAR_7 = FUNC_6( VAR_0 >> 28 );
 VAR_18 = VAR_7 & 0xfffffff;
 VAR_10 = VAR_18 >> 4;
 VAR_11 = (VAR_18 << 28) | (VAR_0 & 0xfffffff);
 if( VAR_7 & 0x80000000 ) {
     return VAR_11;
 }

 for( VAR_4 = 0; VAR_4 < 4; VAR_4++ ) {
     FUNC_2( VAR_4, VAR_1, &VAR_5, &VAR_6 );
     if( FUNC_0( VAR_5, VAR_6, VAR_0 ) ) {
  return FUNC_1( VAR_5, VAR_6, VAR_0 );
     }
 }

 VAR_8 = FUNC_5();

 VAR_9 = VAR_8 & ~0xffff;
 VAR_14 = ((VAR_8 & 0x1ff) << 10) | 0x3ff;
 VAR_13 = (VAR_18 & 0x7ffff) ^ ((VAR_11 >> 12) & 0xffff);
 VAR_12 = VAR_14 + 1;

 for( VAR_19 = 0; VAR_19 < 0x80; VAR_19 += 64, VAR_13 ^= 0x7ffff ) {
     VAR_17 = ((VAR_14 & VAR_13) * 64) + VAR_9;

     for( VAR_4 = 0; VAR_4 < 8; VAR_4++ ) {
  VAR_15 = FUNC_4( VAR_17 + (VAR_4 * 8) );
  VAR_16 = FUNC_4( VAR_17 + (VAR_4 * 8) + 4 );

  VAR_20 = (VAR_15 >> 7) & 0xffffff;
  VAR_21 = VAR_15 & 0x3f;

  if( (VAR_15 & 64) != VAR_19 ) continue;
  if( VAR_20 != (VAR_18 & 0xffffff) ) continue;
  if( VAR_21 != ((VAR_0 >> 22) & 0x3f) ) continue;

  return (VAR_16 & 0xfffff000) | (VAR_0 & 0xfff);
     }
 }
 return -1;
    } else {
 return VAR_0;
    }
}
