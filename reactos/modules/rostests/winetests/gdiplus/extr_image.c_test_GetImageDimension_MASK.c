
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double REAL ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;


 int FUNC_0 (double const,double const,int ,int ,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,double*,double*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (double const,double) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpBitmap *VAR_3;
    GpStatus VAR_4;
    const REAL VAR_5 = 10.0, VAR_6 = 20.0;
    REAL VAR_7,VAR_8;

    VAR_3 = (GpBitmap*)0xdeadbeef;
    VAR_4 = FUNC_0(VAR_5, VAR_6, 0, VAR_2,((void*)0), &VAR_3);
    FUNC_3(VAR_1,VAR_4);
    FUNC_5((GpBitmap*)0xdeadbeef != VAR_3, "Expected bitmap to not be 0xdeadbeef\n");
    FUNC_5(((void*)0) != VAR_3, "Expected bitmap to not be NULL\n");

    VAR_4 = FUNC_2(((void*)0),&VAR_7,&VAR_8);
    FUNC_3(VAR_0, VAR_4);

    VAR_4 = FUNC_2((GpImage*)VAR_3,((void*)0),&VAR_8);
    FUNC_3(VAR_0, VAR_4);

    VAR_4 = FUNC_2((GpImage*)VAR_3,&VAR_7,((void*)0));
    FUNC_3(VAR_0, VAR_4);

    VAR_7 = -1;
    VAR_8 = -1;
    VAR_4 = FUNC_2((GpImage*)VAR_3,&VAR_7,&VAR_8);
    FUNC_3(VAR_1, VAR_4);
    FUNC_4(VAR_5, VAR_7);
    FUNC_4(VAR_6, VAR_8);
    FUNC_1((GpImage*)VAR_3);
}
