
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int acc; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned int const) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int,unsigned int const,int ,int *) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,unsigned int const) ;
 int FUNC_8 (TYPE_1__*,unsigned int const) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_5)
{
    const unsigned VAR_6 = FUNC_4(VAR_5, 0);
    jsval_t VAR_7;

    FUNC_0("%d\n", VAR_6);

    VAR_7 = FUNC_8(VAR_5, VAR_6);



    if(FUNC_5(VAR_7))
        return FUNC_9(VAR_5, VAR_4, ((void*)0));
    else if(!FUNC_6(VAR_7))
        return FUNC_9(VAR_5, VAR_2, ((void*)0));
    else if(!FUNC_3(VAR_7))
        return FUNC_9(VAR_5, VAR_3, ((void*)0));

    FUNC_1(VAR_5);
    return FUNC_2(VAR_5, FUNC_3(VAR_7), ((void*)0), VAR_0 | VAR_1,
                           VAR_6, FUNC_7(VAR_5, VAR_6), &VAR_5->acc);
}
