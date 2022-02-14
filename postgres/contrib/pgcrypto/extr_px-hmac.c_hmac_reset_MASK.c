
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ipad; } ;
struct TYPE_5__ {TYPE_1__ p; int * md; } ;
typedef int PX_MD ;
typedef TYPE_2__ PX_HMAC ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_3(PX_HMAC *VAR_0)
{
 PX_MD *VAR_1 = VAR_0->md;
 unsigned VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_0->p.ipad, VAR_2);
}
