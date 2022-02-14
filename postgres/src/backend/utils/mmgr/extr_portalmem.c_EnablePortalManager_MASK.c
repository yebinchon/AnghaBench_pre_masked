
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entrysize; int keysize; } ;
typedef int PortalHashEnt ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (char*,int ,TYPE_1__*,int ) ;

void
FUNC_3(void)
{
 HASHCTL VAR_7;

 FUNC_1(VAR_6 == ((void*)0));

 VAR_6 = FUNC_0(VAR_5,
            "TopPortalContext",
            VAR_0);

 VAR_7.keysize = VAR_2;
 VAR_7.entrysize = sizeof(PortalHashEnt);





 VAR_4 = FUNC_2("Portal hash", VAR_3,
          &VAR_7, VAR_1);
}
