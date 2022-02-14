
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwInfoStatus; int dwErrorStatus; } ;
typedef TYPE_1__ CERT_TRUST_STATUS ;



__attribute__((used)) static inline void FUNC_0(CERT_TRUST_STATUS *VAR_0,
 const CERT_TRUST_STATUS *VAR_1)
{

    VAR_0->dwErrorStatus |= VAR_1->dwErrorStatus;



    VAR_0->dwInfoStatus |= (VAR_1->dwInfoStatus & 0xfffffff0);
}
