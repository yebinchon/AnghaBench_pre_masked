
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int responseExtensions; } ;
struct TYPE_5__ {TYPE_1__ tbsResponseData; } ;
typedef TYPE_2__ OCSP_BASICRESP ;


 void* FUNC_0 (int ,int,int*,int*) ;

void *FUNC_1(OCSP_BASICRESP *VAR_0, int VAR_1, int *VAR_2,
                                  int *VAR_3)
{
    return FUNC_0(VAR_0->tbsResponseData.responseExtensions, VAR_1, VAR_2,
                          VAR_3);
}
