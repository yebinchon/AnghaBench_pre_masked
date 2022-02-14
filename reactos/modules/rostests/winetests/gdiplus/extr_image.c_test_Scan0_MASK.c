
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int,int,int,int ,int *,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpBitmap *VAR_3;
    GpStatus VAR_4;
    BYTE VAR_5[360];

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_0(10, 10, 10, VAR_2, ((void*)0), &VAR_3);
    FUNC_2(VAR_1, VAR_4);
    FUNC_3(((void*)0) != VAR_3, "Expected bitmap to be initialized\n");
    if (VAR_4 == VAR_1)
        FUNC_1((GpImage*)VAR_3);

    VAR_3 = (GpBitmap*)0xdeadbeef;
    VAR_4 = FUNC_0(10, -10, 10, VAR_2, ((void*)0), &VAR_3);
    FUNC_2(VAR_0, VAR_4);
    FUNC_3( !VAR_3, "expected null bitmap\n" );

    VAR_3 = (GpBitmap*)0xdeadbeef;
    VAR_4 = FUNC_0(-10, 10, 10, VAR_2, ((void*)0), &VAR_3);
    FUNC_2(VAR_0, VAR_4);
    FUNC_3( !VAR_3, "expected null bitmap\n" );

    VAR_3 = (GpBitmap*)0xdeadbeef;
    VAR_4 = FUNC_0(10, 0, 10, VAR_2, ((void*)0), &VAR_3);
    FUNC_2(VAR_0, VAR_4);
    FUNC_3( !VAR_3, "expected null bitmap\n" );

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_0(10, 10, 12, VAR_2, VAR_5, &VAR_3);
    FUNC_2(VAR_1, VAR_4);
    FUNC_3(((void*)0) != VAR_3, "Expected bitmap to be initialized\n");
    if (VAR_4 == VAR_1)
        FUNC_1((GpImage*)VAR_3);

    VAR_3 = (GpBitmap*) 0xdeadbeef;
    VAR_4 = FUNC_0(10, 10, 10, VAR_2, VAR_5, &VAR_3);
    FUNC_2(VAR_0, VAR_4);
    FUNC_3( !VAR_3, "expected null bitmap\n" );

    VAR_3 = (GpBitmap*)0xdeadbeef;
    VAR_4 = FUNC_0(10, 10, 0, VAR_2, VAR_5, &VAR_3);
    FUNC_2(VAR_0, VAR_4);
    FUNC_3( VAR_3 == (GpBitmap*)0xdeadbeef, "expected deadbeef bitmap\n" );

    VAR_3 = ((void*)0);
    VAR_4 = FUNC_0(10, 10, -8, VAR_2, VAR_5, &VAR_3);
    FUNC_2(VAR_1, VAR_4);
    FUNC_3(((void*)0) != VAR_3, "Expected bitmap to be initialized\n");
    if (VAR_4 == VAR_1)
        FUNC_1((GpImage*)VAR_3);

    VAR_3 = (GpBitmap*)0xdeadbeef;
    VAR_4 = FUNC_0(10, 10, -10, VAR_2, VAR_5, &VAR_3);
    FUNC_2(VAR_0, VAR_4);
    FUNC_3( !VAR_3, "expected null bitmap\n" );
}
