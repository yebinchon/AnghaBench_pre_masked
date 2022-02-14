
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ptr; } ;
struct TYPE_8__ {TYPE_1__ p; } ;
typedef TYPE_2__ SHA1_CTX ;
typedef TYPE_2__ PX_MD ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(PX_MD *VAR_0)
{
 SHA1_CTX *VAR_1 = (SHA1_CTX *) VAR_0->p.ptr;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(VAR_1);
 FUNC_0(VAR_0);
}
