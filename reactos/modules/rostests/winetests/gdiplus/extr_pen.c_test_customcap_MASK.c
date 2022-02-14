
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GpStatus ;
typedef int GpPen ;
typedef int GpCustomLineCap ;
typedef int ARGB ;


 int FUNC_0 (int ,float,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpPen *VAR_3;
    GpStatus VAR_4;
    GpCustomLineCap *VAR_5;

    VAR_4 = FUNC_0((ARGB)0xffff00ff, 10.0f, VAR_2, &VAR_3);
    FUNC_6(VAR_1, VAR_4);


    VAR_4 = FUNC_3(((void*)0), ((void*)0));
    FUNC_6(VAR_0, VAR_4);
    VAR_4 = FUNC_3(VAR_3, ((void*)0));
    FUNC_6(VAR_0, VAR_4);
    VAR_4 = FUNC_3(((void*)0), &VAR_5);
    FUNC_6(VAR_0, VAR_4);

    VAR_4 = FUNC_2(((void*)0), ((void*)0));
    FUNC_6(VAR_0, VAR_4);
    VAR_4 = FUNC_2(VAR_3, ((void*)0));
    FUNC_6(VAR_0, VAR_4);
    VAR_4 = FUNC_2(((void*)0), &VAR_5);
    FUNC_6(VAR_0, VAR_4);


    VAR_4 = FUNC_5(((void*)0), ((void*)0));
    FUNC_6(VAR_0, VAR_4);
    VAR_4 = FUNC_5(VAR_3, ((void*)0));
    FUNC_6(VAR_0, VAR_4);

    VAR_4 = FUNC_4(((void*)0), ((void*)0));
    FUNC_6(VAR_0, VAR_4);
    VAR_4 = FUNC_4(VAR_3, ((void*)0));
    FUNC_6(VAR_0, VAR_4);


    VAR_5 = (GpCustomLineCap*)0xdeadbeef;
    VAR_4 = FUNC_2(VAR_3, &VAR_5);
    FUNC_6(VAR_1, VAR_4);
    FUNC_7(VAR_5 == ((void*)0),"Expect CustomCap == NULL\n");

    VAR_5 = (GpCustomLineCap*)0xdeadbeef;
    VAR_4 = FUNC_3(VAR_3, &VAR_5);
    FUNC_6(VAR_1, VAR_4);
    FUNC_7(VAR_5 == ((void*)0),"Expect CustomCap == NULL\n");

    FUNC_1(VAR_3);
}
