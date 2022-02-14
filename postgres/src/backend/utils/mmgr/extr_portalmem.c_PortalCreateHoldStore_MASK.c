
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cursorOptions; int * holdStore; int * holdContext; int * holdSnapshot; } ;
typedef TYPE_1__* Portal ;
typedef int * MemoryContext ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (int,int,int ) ;
 int VAR_3 ;

void
FUNC_4(Portal VAR_4)
{
 MemoryContext VAR_5;

 FUNC_1(VAR_4->holdContext == ((void*)0));
 FUNC_1(VAR_4->holdStore == ((void*)0));
 FUNC_1(VAR_4->holdSnapshot == ((void*)0));





 VAR_4->holdContext =
  FUNC_0(VAR_2,
         "PortalHoldContext",
         VAR_0);







 VAR_5 = FUNC_2(VAR_4->holdContext);

 VAR_4->holdStore =
  FUNC_3(VAR_4->cursorOptions & VAR_1,
         1, VAR_3);

 FUNC_2(VAR_5);
}
