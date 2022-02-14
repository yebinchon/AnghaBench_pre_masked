
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int acc; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int const,int const) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int,unsigned int const,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 unsigned int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,unsigned int const) ;
 int FUNC_8 (TYPE_1__*,unsigned int const) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_3)
{
    const unsigned VAR_4 = FUNC_5(VAR_3, 0);
    const int VAR_5 = FUNC_4(VAR_3, 1);
    jsval_t VAR_6;

    FUNC_0("%d %d\n", VAR_4, VAR_5);

    VAR_6 = FUNC_8(VAR_3, VAR_4);
    if(!FUNC_6(VAR_6))
        return FUNC_9(VAR_3, VAR_2, ((void*)0));

    FUNC_1(VAR_3);
    return FUNC_2(VAR_3, FUNC_3(VAR_6), ((void*)0), VAR_1 | VAR_0,
                           VAR_4, FUNC_7(VAR_3, VAR_4), VAR_5 ? &VAR_3->acc : ((void*)0));
}
