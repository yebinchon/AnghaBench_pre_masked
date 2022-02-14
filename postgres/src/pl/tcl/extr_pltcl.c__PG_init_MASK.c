
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pltcl_proc_ptr ;
typedef int pltcl_proc_key ;
typedef int pltcl_interp_desc ;
typedef int hash_ctl ;
struct TYPE_6__ {int serviceModeHookProc; int alertNotifierProc; int finalizeNotifierProc; int initNotifierProc; int deleteFileHandlerProc; int createFileHandlerProc; int waitForEventProc; int setTimerProc; } ;
typedef TYPE_1__ Tcl_NotifierProcs ;
struct TYPE_7__ {int keysize; int entrysize; } ;
typedef int Oid ;
typedef TYPE_2__ HASHCTL ;


 int FUNC_0 (char*,int ,int *,int *,int *,int ,int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (char*,int,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void
FUNC_10(void)
{
 Tcl_NotifierProcs VAR_20;
 HASHCTL VAR_21;


 if (VAR_16)
  return;

 FUNC_9(VAR_5);
 VAR_20.setTimerProc = VAR_12;
 VAR_20.waitForEventProc = VAR_13;
 VAR_20.createFileHandlerProc = VAR_7;
 VAR_20.deleteFileHandlerProc = VAR_8;
 VAR_20.initNotifierProc = VAR_10;
 VAR_20.finalizeNotifierProc = VAR_9;
 VAR_20.alertNotifierProc = VAR_6;
 VAR_20.serviceModeHookProc = VAR_11;
 FUNC_4(&VAR_20);





 if ((VAR_14 = FUNC_1()) == ((void*)0))
  FUNC_5(VAR_0, "could not create master Tcl interpreter");
 if (FUNC_3(VAR_14) == VAR_4)
  FUNC_5(VAR_0, "could not initialize master Tcl interpreter");




 FUNC_8(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.keysize = sizeof(Oid);
 VAR_21.entrysize = sizeof(pltcl_interp_desc);
 VAR_15 = FUNC_7("PL/Tcl interpreters",
         8,
         &VAR_21,
         VAR_2 | VAR_1);




 FUNC_8(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.keysize = sizeof(pltcl_proc_key);
 VAR_21.entrysize = sizeof(pltcl_proc_ptr);
 VAR_17 = FUNC_7("PL/Tcl functions",
          100,
          &VAR_21,
          VAR_2 | VAR_1);




 FUNC_0("pltcl.start_proc",
          FUNC_6("PL/Tcl function to call once when pltcl is first used."),
          ((void*)0),
          &VAR_18,
          ((void*)0),
          VAR_3, 0,
          ((void*)0), ((void*)0), ((void*)0));
 FUNC_0("pltclu.start_proc",
          FUNC_6("PL/TclU function to call once when pltclu is first used."),
          ((void*)0),
          &VAR_19,
          ((void*)0),
          VAR_3, 0,
          ((void*)0), ((void*)0), ((void*)0));

 VAR_16 = 1;
}
