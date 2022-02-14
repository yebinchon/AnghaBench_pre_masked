
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int requestedParams; } ;
typedef TYPE_1__ ZSTD_CStream ;
typedef unsigned long long U64 ;


 int FUNC_0 (int *,int) ;
 unsigned long long VAR_0 ;
 size_t FUNC_1 (TYPE_1__*,int *,int ,int *,int ,unsigned long long const) ;

size_t FUNC_2(ZSTD_CStream* VAR_1, int VAR_2, unsigned long long VAR_3)
{
    U64 const VAR_4 = (VAR_3==0) ? VAR_0 : VAR_3;
    FUNC_0(&VAR_1->requestedParams, VAR_2);
    return FUNC_1(VAR_1, ((void*)0), 0, ((void*)0), VAR_1->requestedParams, VAR_4);
}
