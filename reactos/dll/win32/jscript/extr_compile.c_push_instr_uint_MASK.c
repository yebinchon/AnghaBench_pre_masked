
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsop_t ;
typedef int compiler_ctx_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_2(compiler_ctx_t *VAR_2, jsop_t VAR_3, unsigned VAR_4)
{
    unsigned VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_3);
    if(!VAR_5)
        return VAR_0;

    FUNC_1(VAR_2, VAR_5, VAR_4);
    return VAR_1;
}
