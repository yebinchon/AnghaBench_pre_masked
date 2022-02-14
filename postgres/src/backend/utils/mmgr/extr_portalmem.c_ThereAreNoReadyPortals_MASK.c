
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; } ;
struct TYPE_3__ {TYPE_2__* portal; } ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

bool
FUNC_2(void)
{
 HASH_SEQ_STATUS VAR_2;
 PortalHashEnt *VAR_3;

 FUNC_0(&VAR_2, VAR_1);

 while ((VAR_3 = (PortalHashEnt *) FUNC_1(&VAR_2)) != ((void*)0))
 {
  Portal VAR_4 = VAR_3->portal;

  if (VAR_4->status == VAR_0)
   return 0;
 }

 return 1;
}
