
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nestLevel; int creationNamespace; int searchPath; } ;
typedef TYPE_1__ OverrideStackEntry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(void)
{
 OverrideStackEntry *VAR_9;


 if (VAR_8 == VAR_1)
  FUNC_1(VAR_0, "bogus PopOverrideSearchPath call");
 VAR_9 = (OverrideStackEntry *) FUNC_2(VAR_8);
 if (VAR_9->nestLevel != FUNC_0())
  FUNC_1(VAR_0, "bogus PopOverrideSearchPath call");


 VAR_8 = FUNC_3(VAR_8);
 FUNC_4(VAR_9->searchPath);
 FUNC_5(VAR_9);


 if (VAR_8)
 {
  VAR_9 = (OverrideStackEntry *) FUNC_2(VAR_8);
  VAR_3 = VAR_9->searchPath;
  VAR_2 = VAR_9->creationNamespace;
  VAR_4 = 0;
 }
 else
 {

  VAR_3 = VAR_6;
  VAR_2 = VAR_5;
  VAR_4 = VAR_7;
 }
}
