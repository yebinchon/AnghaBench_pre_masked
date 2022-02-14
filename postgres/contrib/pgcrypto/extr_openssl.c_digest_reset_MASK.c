
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int algo; int ctx; } ;
struct TYPE_5__ {scalar_t__ ptr; } ;
struct TYPE_6__ {TYPE_1__ p; } ;
typedef TYPE_2__ PX_MD ;
typedef TYPE_3__ OSSLDigest ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_1(PX_MD *VAR_0)
{
 OSSLDigest *VAR_1 = (OSSLDigest *) VAR_0->p.ptr;

 FUNC_0(VAR_1->ctx, VAR_1->algo, ((void*)0));
}
