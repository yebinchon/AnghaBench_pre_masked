
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int ** VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
    int VAR_6;
 VAR_3 = ((void*)0);
 VAR_4 = ((void*)0);


    FUNC_5(0);

    FUNC_3(VAR_0, &VAR_2);

    for ( VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++ )
        FUNC_7(VAR_1[VAR_6]);

    for ( VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++ ) {
        FUNC_4(VAR_1[VAR_6]);
        VAR_1[VAR_6] = ((void*)0);
    }

    FUNC_2();

    FUNC_6();

    FUNC_1();

    return 0;
}
