
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int compile_ctx_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int FUNC_2 (int *,int ,unsigned int) ;
 unsigned int FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(compile_ctx_t *VAR_2, unsigned VAR_3)
{
    unsigned VAR_4 = FUNC_3(VAR_2);

    if(VAR_4) {
        HRESULT VAR_5;

        VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_4);
        if(FUNC_0(VAR_5))
            return VAR_5;
    }

    return FUNC_1(VAR_2, VAR_0, VAR_3);
}
