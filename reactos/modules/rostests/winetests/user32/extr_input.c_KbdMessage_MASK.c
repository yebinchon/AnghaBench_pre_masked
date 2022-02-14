
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int WORD ;
typedef int UINT ;
typedef int LPARAM ;
typedef size_t KEV ;


 int* VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_2( KEV VAR_18, WPARAM *VAR_19, LPARAM *VAR_20 )
{
    UINT VAR_21;
    int VAR_22 = VAR_3[VAR_18];
    WORD VAR_23;

    VAR_23 = FUNC_0(VAR_2[VAR_18]);
    if (VAR_1[VAR_18] & VAR_5) VAR_23 |= VAR_8;

    if (VAR_1[VAR_18] & VAR_6 )
    {
        VAR_21 = VAR_15;
        if( (VAR_4[VAR_13] & 0x80) && (
                (VAR_22 == VAR_13) || (VAR_22 == VAR_12) ||
                 !(VAR_4[VAR_12] & 0x80))) {
            if( VAR_11 == VAR_13 ||
                    (VAR_22 != VAR_13))
                VAR_21 = VAR_17;
            VAR_11 = 0;
        }
        VAR_4[VAR_22] &= ~0x80;
        VAR_23 |= VAR_9 | VAR_10;
    }
    else
    {
        if (VAR_4[VAR_22] & 0x80) VAR_23 |= VAR_9;
        if (!(VAR_4[VAR_22] & 0x80)) VAR_4[VAR_22] ^= 0x01;
        VAR_4[VAR_22] |= 0x80;
        VAR_0[VAR_22] |= 0x80;

        VAR_21 = VAR_14;
        if( (VAR_4[VAR_13] & 0x80) &&
                !(VAR_4[VAR_12] & 0x80)) {
            VAR_21 = VAR_16;
            VAR_11 = VAR_22;
        }
    }

    if (VAR_4[VAR_13] & 0x80) VAR_23 |= VAR_7;

    if( VAR_20) *VAR_20 = FUNC_1( 1, VAR_23 );
    if( VAR_19) *VAR_19 = VAR_22;
    return VAR_21;
}
