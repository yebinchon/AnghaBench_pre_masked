
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (double) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    UINT VAR_9;

    FUNC_1("\n");

    if(!FUNC_0(&VAR_9, sizeof(VAR_9)))
        return VAR_0;

    if(VAR_8)
        *VAR_8 = FUNC_2((double)VAR_9/(double)VAR_2);
    return VAR_1;
}
