
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int * opad; } ;
struct TYPE_5__ {TYPE_1__ p; int * md; } ;
typedef int PX_MD ;
typedef TYPE_2__ PX_HMAC ;


 int * FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_8(PX_HMAC *VAR_0, uint8 *VAR_1)
{
 PX_MD *VAR_2 = VAR_0->md;
 unsigned VAR_3,
    VAR_4;
 uint8 *VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_5(VAR_2);

 VAR_5 = FUNC_0(VAR_4);

 FUNC_3(VAR_2, VAR_5);

 FUNC_4(VAR_2);
 FUNC_6(VAR_2, VAR_0->p.opad, VAR_3);
 FUNC_6(VAR_2, VAR_5, VAR_4);
 FUNC_3(VAR_2, VAR_1);

 FUNC_7(VAR_5, 0, VAR_4);
 FUNC_1(VAR_5);
}
