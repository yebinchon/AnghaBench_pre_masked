
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ memid; } ;
struct TYPE_6__ {TYPE_1__ vardesc; } ;
typedef TYPE_2__ TLBVarDesc ;
typedef scalar_t__ MEMBERID ;



__attribute__((used)) static inline TLBVarDesc *FUNC_0(TLBVarDesc *VAR_0,
        UINT VAR_1, MEMBERID VAR_2)
{
    while(VAR_1){
        if(VAR_0->vardesc.memid == VAR_2)
            return VAR_0;
        ++VAR_0;
        --VAR_1;
    }
    return ((void*)0);
}
