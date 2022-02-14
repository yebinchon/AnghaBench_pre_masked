
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef scalar_t__* PVOID ;
typedef scalar_t__* PCHAR ;


 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (scalar_t__,int ,int,int) ;
 scalar_t__* VAR_0 ;

VOID FUNC_2( PVOID VAR_1 ) {
    int VAR_2,VAR_3;
    ULONG VAR_4,VAR_5,VAR_6;
    PCHAR VAR_7 = VAR_1;
    int VAR_8 = 0;

    FUNC_0( &VAR_4, &VAR_5, &VAR_6 );

    for( VAR_2 = 0; VAR_2 < VAR_5; VAR_2++ ) {
    for( VAR_3 = 0; VAR_3 < VAR_4; VAR_3++ ) {
        VAR_8 = (VAR_3 * 2) + (VAR_2 * VAR_4 * 2);
        if( VAR_7[VAR_8] != VAR_0[VAR_8] ) {
        VAR_0[VAR_8] = VAR_7[VAR_8];
        FUNC_1(VAR_7[VAR_8],0,VAR_3+1,VAR_2+1);
        }
    }
    }
}
