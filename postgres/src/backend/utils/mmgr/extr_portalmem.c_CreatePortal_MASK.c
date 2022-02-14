
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int atStart; int atEnd; int visible; int name; int portalContext; int creation_time; int cursorOptions; int strategy; int createSubid; int activeSubid; int cleanup; int status; int resowner; } ;
typedef TYPE_1__* Portal ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char const*) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,char const*) ;

Portal
FUNC_15(const char *VAR_10, bool VAR_11, bool VAR_12)
{
 Portal VAR_13;

 FUNC_1(FUNC_7(VAR_10));

 VAR_13 = FUNC_4(VAR_10);
 if (FUNC_10(VAR_13))
 {
  if (!VAR_11)
   FUNC_12(VAR_4,
     (FUNC_13(VAR_3),
      FUNC_14("cursor \"%s\" already exists", VAR_10)));
  if (!VAR_12)
   FUNC_12(VAR_9,
     (FUNC_13(VAR_3),
      FUNC_14("closing existing cursor \"%s\"",
       VAR_10)));
  FUNC_8(VAR_13, 0);
 }


 VAR_13 = (Portal) FUNC_5(VAR_8, sizeof *VAR_13);


 VAR_13->portalContext = FUNC_0(VAR_8,
              "PortalContext",
              VAR_0);


 VAR_13->resowner = FUNC_11(VAR_2,
             "Portal");


 VAR_13->status = VAR_6;
 VAR_13->cleanup = VAR_7;
 VAR_13->createSubid = FUNC_3();
 VAR_13->activeSubid = VAR_13->createSubid;
 VAR_13->strategy = VAR_5;
 VAR_13->cursorOptions = VAR_1;
 VAR_13->atStart = 1;
 VAR_13->atEnd = 1;
 VAR_13->visible = 1;
 VAR_13->creation_time = FUNC_2();


 FUNC_9(VAR_13, VAR_10);


 FUNC_6(VAR_13->portalContext, VAR_13->name);

 return VAR_13;
}
