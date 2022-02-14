
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (float,float,int ) ;
 float FUNC_1 (double,double,double,double,double) ;

__attribute__((used)) static void FUNC_2(struct test_ctx *VAR_1)
{
    float VAR_2;

    VAR_2 = FUNC_1(16.0, 64.0, 2.40, 1.961, 16.0);
    FUNC_0(VAR_2, 2.40f, VAR_0);

    VAR_2 = FUNC_1(16.0, 64.0, 2.40, 1.961, 64.0);
    FUNC_0(VAR_2, 1.961f, VAR_0);

    VAR_2 = FUNC_1(16.0, 64.0, 1.961, 2.40, 64.0);
    FUNC_0(VAR_2, 2.40f, VAR_0);

    VAR_2 = FUNC_1(16.0, 64.0, 2.40, 1.961, 0.0);
    FUNC_0(VAR_2, 2.40f, VAR_0);


    VAR_2 = FUNC_1(16.0, 64.0, 2.40, 1.961, 32.0);
    float VAR_3 = (2.40 - 1.961) / 2 + 1.961;
    FUNC_0(VAR_2, VAR_3, VAR_0);
}
