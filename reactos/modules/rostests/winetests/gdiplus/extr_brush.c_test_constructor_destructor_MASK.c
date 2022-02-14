
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpSolidFill ;
typedef int GpBrush ;
typedef int ARGB ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    GpStatus VAR_2;
    GpSolidFill *VAR_3 = ((void*)0);

    VAR_2 = FUNC_0((ARGB)0xdeadbeef, &VAR_3);
    FUNC_2(VAR_1, VAR_2);
    FUNC_3(VAR_3 != ((void*)0), "Expected brush to be initialized\n");

    VAR_2 = FUNC_1(((void*)0));
    FUNC_2(VAR_0, VAR_2);

    VAR_2 = FUNC_1((GpBrush*) VAR_3);
    FUNC_2(VAR_1, VAR_2);
}
