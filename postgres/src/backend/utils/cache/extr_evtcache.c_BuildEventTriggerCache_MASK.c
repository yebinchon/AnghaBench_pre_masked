
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ctl ;
struct TYPE_14__ {int triggerlist; } ;
struct TYPE_13__ {scalar_t__ enabled; int ntags; int tag; int fnoid; } ;
struct TYPE_12__ {scalar_t__ evtenabled; int evtfoid; int evtevent; } ;
struct TYPE_11__ {int keysize; int entrysize; int * hcxt; } ;
typedef int SysScanDesc ;
typedef int Relation ;
typedef int * MemoryContext ;
typedef int HeapTuple ;
typedef int HTAB ;
typedef TYPE_1__ HASHCTL ;
typedef TYPE_2__* Form_pg_event_trigger ;
typedef int EventTriggerEvent ;
typedef TYPE_3__ EventTriggerCacheItem ;
typedef TYPE_4__ EventTriggerCacheEntry ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,char*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int ) ;
 int VAR_21 ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_22 ;
 int * FUNC_11 (char*,int,TYPE_1__*,int) ;
 TYPE_4__* FUNC_12 (int *,int *,int ,int*) ;
 int FUNC_13 (int ,int ,int ,int*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 TYPE_3__* FUNC_18 (int) ;
 int VAR_23 ;
 int FUNC_19 (int ,int ,int,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 int FUNC_23 (int ,int ,int *,int ,int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int ) ;

__attribute__((used)) static void
FUNC_26(void)
{
 HASHCTL VAR_24;
 HTAB *VAR_25;
 MemoryContext VAR_26;
 Relation VAR_27;
 Relation VAR_28;
 SysScanDesc VAR_29;

 if (VAR_12 != ((void*)0))
 {





  FUNC_7(VAR_12);
 }
 else
 {





  if (VAR_3 == ((void*)0))
   FUNC_2();
  VAR_12 =
   FUNC_0(VAR_3,
          "EventTriggerCache",
          VAR_0);
  FUNC_1(VAR_6,
           VAR_21,
           (Datum) 0);
 }


 VAR_26 = FUNC_8(VAR_12);


 VAR_13 = VAR_4;


 FUNC_6(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.keysize = sizeof(EventTriggerEvent);
 VAR_24.entrysize = sizeof(EventTriggerCacheEntry);
 VAR_24.hcxt = VAR_12;
 VAR_25 = FUNC_11("Event Trigger Cache", 32, &VAR_24,
      VAR_19 | VAR_17 | VAR_18);




 VAR_27 = FUNC_21(VAR_15, VAR_1);
 VAR_28 = FUNC_15(VAR_14, VAR_1);
 VAR_29 = FUNC_23(VAR_27, VAR_28, ((void*)0), 0, ((void*)0));





 for (;;)
 {
  HeapTuple VAR_30;
  Form_pg_event_trigger VAR_31;
  char *VAR_32;
  EventTriggerEvent VAR_33;
  EventTriggerCacheItem *VAR_34;
  Datum VAR_35;
  bool VAR_36;
  EventTriggerCacheEntry *VAR_37;
  bool VAR_38;


  VAR_30 = FUNC_25(VAR_29, VAR_16);
  if (!FUNC_5(VAR_30))
   break;


  VAR_31 = (Form_pg_event_trigger) FUNC_4(VAR_30);
  if (VAR_31->evtenabled == VAR_22)
   continue;


  VAR_32 = FUNC_9(VAR_31->evtevent);
  if (FUNC_22(VAR_32, "ddl_command_start") == 0)
   VAR_33 = VAR_8;
  else if (FUNC_22(VAR_32, "ddl_command_end") == 0)
   VAR_33 = VAR_7;
  else if (FUNC_22(VAR_32, "sql_drop") == 0)
   VAR_33 = VAR_9;
  else if (FUNC_22(VAR_32, "table_rewrite") == 0)
   VAR_33 = VAR_10;
  else
   continue;


  VAR_34 = FUNC_18(sizeof(EventTriggerCacheItem));
  VAR_34->fnoid = VAR_31->evtfoid;
  VAR_34->enabled = VAR_31->evtenabled;


  VAR_35 = FUNC_13(VAR_30, VAR_2,
          FUNC_10(VAR_27), &VAR_36);
  if (!VAR_36)
  {
   VAR_34->ntags = FUNC_3(VAR_35, &VAR_34->tag);
   FUNC_19(VAR_34->tag, VAR_34->ntags, sizeof(char *), VAR_23);
  }


  VAR_37 = FUNC_12(VAR_25, &VAR_33, VAR_20, &VAR_38);
  if (VAR_38)
   VAR_37->triggerlist = FUNC_16(VAR_37->triggerlist, VAR_34);
  else
   VAR_37->triggerlist = FUNC_17(VAR_34);
 }


 FUNC_24(VAR_29);
 FUNC_14(VAR_28, VAR_1);
 FUNC_20(VAR_27, VAR_1);


 FUNC_8(VAR_26);


 VAR_11 = VAR_25;







 if (VAR_13 == VAR_4)
  VAR_13 = VAR_5;
}
