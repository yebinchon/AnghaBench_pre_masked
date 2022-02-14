
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * utilityStmt; } ;
struct TYPE_6__ {int portalContext; int queryEnv; int portalParams; int sourceText; int * holdSnapshot; } ;
typedef int * Snapshot ;
typedef TYPE_1__* Portal ;
typedef TYPE_2__ PlannedStmt ;
typedef int Node ;
typedef int DestReceiver ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,int ,int *,char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_9(Portal VAR_12, PlannedStmt *VAR_13,
     bool VAR_14, bool VAR_15,
     DestReceiver *VAR_16, char *VAR_17)
{
 Node *VAR_18 = VAR_13->utilityStmt;
 Snapshot VAR_19;
 if (!(FUNC_3(VAR_18, VAR_8) ||
    FUNC_3(VAR_18, VAR_4) ||
    FUNC_3(VAR_18, VAR_10) ||
    FUNC_3(VAR_18, VAR_11) ||
    FUNC_3(VAR_18, VAR_1) ||

    FUNC_3(VAR_18, VAR_2) ||
    FUNC_3(VAR_18, VAR_3) ||
    FUNC_3(VAR_18, VAR_5) ||
    FUNC_3(VAR_18, VAR_9) ||
    FUNC_3(VAR_18, VAR_0)))
 {
  VAR_19 = FUNC_2();

  if (VAR_15)
  {
   VAR_19 = FUNC_8(VAR_19);
   VAR_12->holdSnapshot = VAR_19;
  }
  FUNC_7(VAR_19);

  VAR_19 = FUNC_1();
 }
 else
  VAR_19 = ((void*)0);

 FUNC_6(VAR_13,
       VAR_12->sourceText,
       VAR_14 ? VAR_7 : VAR_6,
       VAR_12->portalParams,
       VAR_12->queryEnv,
       VAR_16,
       VAR_17);


 FUNC_4(VAR_12->portalContext);






 if (VAR_19 != ((void*)0) && FUNC_0() &&
  VAR_19 == FUNC_1())
  FUNC_5();
}
