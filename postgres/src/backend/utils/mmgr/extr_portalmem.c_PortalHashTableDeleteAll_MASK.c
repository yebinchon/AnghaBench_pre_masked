
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_5__ {TYPE_2__* portal; } ;
typedef TYPE_1__ PortalHashEnt ;
typedef TYPE_2__* Portal ;
typedef int HASH_SEQ_STATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(void)
{
 HASH_SEQ_STATUS VAR_2;
 PortalHashEnt *VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(&VAR_2, VAR_1);
 while ((VAR_3 = FUNC_2(&VAR_2)) != ((void*)0))
 {
  Portal VAR_4 = VAR_3->portal;


  if (VAR_4->status == VAR_0)
   continue;

  FUNC_0(VAR_4, 0);


  FUNC_3(&VAR_2);
  FUNC_1(&VAR_2, VAR_1);
 }
}
