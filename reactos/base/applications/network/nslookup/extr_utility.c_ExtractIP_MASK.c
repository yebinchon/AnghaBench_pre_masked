
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UCHAR ;
typedef char* PCHAR ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*) ;

int FUNC_2( PCHAR VAR_0, PCHAR VAR_1, USHORT VAR_2 )
{
    int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;

    VAR_5 = VAR_2;

    VAR_6 = (UCHAR)VAR_0[VAR_5];
    VAR_4 += 1;
    VAR_5 += 1;

    FUNC_0( &VAR_1[VAR_3], "%d.", VAR_6 );
    VAR_3 += FUNC_1( &VAR_1[VAR_3] );

    VAR_6 = (UCHAR)VAR_0[VAR_5];
    VAR_4 += 1;
    VAR_5 += 1;

    FUNC_0( &VAR_1[VAR_3], "%d.", VAR_6 );
    VAR_3 += FUNC_1( &VAR_1[VAR_3] );

    VAR_6 = (UCHAR)VAR_0[VAR_5];
    VAR_4 += 1;
    VAR_5 += 1;

    FUNC_0( &VAR_1[VAR_3], "%d.", VAR_6 );
    VAR_3 += FUNC_1( &VAR_1[VAR_3] );

    VAR_6 = (UCHAR)VAR_0[VAR_5];
    VAR_4 += 1;
    VAR_5 += 1;

    FUNC_0( &VAR_1[VAR_3], "%d", VAR_6 );
    VAR_3 += FUNC_1( &VAR_1[VAR_3] );

    VAR_1[VAR_3] = '\0';

    return VAR_4;
}
