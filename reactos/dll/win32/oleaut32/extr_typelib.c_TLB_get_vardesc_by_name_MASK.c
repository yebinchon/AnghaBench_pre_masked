
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int Name; } ;
typedef TYPE_1__ TLBVarDesc ;
typedef int OLECHAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;

__attribute__((used)) static inline TLBVarDesc *FUNC_2(TLBVarDesc *VAR_0,
        UINT VAR_1, const OLECHAR *VAR_2)
{
    while(VAR_1){
        if(!FUNC_1(FUNC_0(VAR_0->Name), VAR_2))
            return VAR_0;
        ++VAR_0;
        --VAR_1;
    }
    return ((void*)0);
}
