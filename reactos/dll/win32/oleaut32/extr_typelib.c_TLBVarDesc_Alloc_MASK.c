
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TLBVarDesc ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static TLBVarDesc *FUNC_2(UINT VAR_0)
{
    TLBVarDesc *VAR_1;

    VAR_1 = FUNC_1(sizeof(TLBVarDesc) * VAR_0);
    if(!VAR_1)
        return ((void*)0);

    while(VAR_0){
        FUNC_0(&VAR_1[VAR_0-1]);
        --VAR_0;
    }

    return VAR_1;
}
