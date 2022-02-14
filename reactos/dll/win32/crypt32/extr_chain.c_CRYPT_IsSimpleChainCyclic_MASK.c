
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cElement; TYPE_2__** rgpElement; } ;
struct TYPE_5__ {int dwErrorStatus; } ;
struct TYPE_6__ {TYPE_1__ TrustStatus; } ;
typedef TYPE_3__ CERT_SIMPLE_CHAIN ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline BOOL FUNC_0(const CERT_SIMPLE_CHAIN *VAR_2)
{
    if (VAR_2->cElement)
        return VAR_2->rgpElement[VAR_2->cElement - 1]->TrustStatus.dwErrorStatus
         & VAR_0;
    else
        return VAR_1;
}
