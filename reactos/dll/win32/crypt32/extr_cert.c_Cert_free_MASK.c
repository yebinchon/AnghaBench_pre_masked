
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int context_t ;
struct TYPE_3__ {int pCertInfo; int pbCertEncoded; } ;
struct TYPE_4__ {TYPE_1__ ctx; } ;
typedef TYPE_2__ cert_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(context_t *VAR_0)
{
    cert_t *VAR_1 = (cert_t*)VAR_0;

    FUNC_0(VAR_1->ctx.pbCertEncoded);
    FUNC_1(VAR_1->ctx.pCertInfo);
}
