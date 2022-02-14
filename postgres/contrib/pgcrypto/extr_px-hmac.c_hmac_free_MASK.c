
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* opad; TYPE_2__* ipad; } ;
struct TYPE_7__ {TYPE_1__ p; int md; } ;
typedef TYPE_2__ PX_HMAC ;


 int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_4(PX_HMAC *VAR_0)
{
 unsigned VAR_1;

 VAR_1 = FUNC_1(VAR_0->md);
 FUNC_2(VAR_0->md);

 FUNC_3(VAR_0->p.ipad, 0, VAR_1);
 FUNC_3(VAR_0->p.opad, 0, VAR_1);
 FUNC_0(VAR_0->p.ipad);
 FUNC_0(VAR_0->p.opad);
 FUNC_0(VAR_0);
}
