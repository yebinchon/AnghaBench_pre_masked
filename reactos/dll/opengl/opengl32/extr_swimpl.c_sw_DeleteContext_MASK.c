
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_context {int gl_ctx; } ;
typedef int GLDISPATCHTABLE ;
typedef scalar_t__ DHGLRC ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct sw_context*) ;
 int * FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (void*) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;

BOOL FUNC_7(DHGLRC VAR_1)
{
    struct sw_context* VAR_2 = (struct sw_context*)VAR_1;

    void* VAR_3 = FUNC_3();
    const GLDISPATCHTABLE* VAR_4 = FUNC_2();


    FUNC_6(VAR_2->gl_ctx);

    FUNC_1(FUNC_0(), 0, VAR_2);


    FUNC_4(VAR_4);
    FUNC_5(VAR_3);

    return VAR_0;
}
