
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_28__ {char tgenabled; int oid; int tgname; int tgtype; scalar_t__ tgisinternal; } ;
struct TYPE_27__ {int t_self; } ;
struct TYPE_26__ {int nparts; int * oids; } ;
struct TYPE_25__ {TYPE_1__* rd_rel; } ;
struct TYPE_24__ {scalar_t__ relkind; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* PartitionDesc ;
typedef int LOCKMODE ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* Form_pg_trigger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ) ;
 char* FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_9 ;
 TYPE_3__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_11 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,char const*,...) ;
 TYPE_4__* FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*) ;
 TYPE_2__* FUNC_18 (int ,int ) ;
 int FUNC_19 () ;
 int FUNC_20 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_21 (int ) ;
 TYPE_4__* FUNC_22 (int ) ;
 int FUNC_23 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_24 (int ,int ) ;

void
FUNC_25(Relation VAR_13, const char *VAR_14,
      char VAR_15, bool VAR_16, LOCKMODE VAR_17)
{
 Relation VAR_18;
 int VAR_19;
 ScanKeyData VAR_20[2];
 SysScanDesc VAR_21;
 HeapTuple VAR_22;
 bool VAR_23;
 bool VAR_24;


 VAR_18 = FUNC_24(VAR_11, VAR_10);

 FUNC_11(&VAR_20[0],
    VAR_1,
    VAR_2, VAR_7,
    FUNC_7(FUNC_10(VAR_13)));
 if (VAR_14)
 {
  FUNC_11(&VAR_20[1],
     VAR_0,
     VAR_2, VAR_6,
     FUNC_0(VAR_14));
  VAR_19 = 2;
 }
 else
  VAR_19 = 1;

 VAR_21 = FUNC_20(VAR_18, VAR_12, 1,
        ((void*)0), VAR_19, VAR_20);

 VAR_23 = VAR_24 = 0;

 while (FUNC_4(VAR_22 = FUNC_22(VAR_21)))
 {
  Form_pg_trigger VAR_25 = (Form_pg_trigger) FUNC_3(VAR_22);

  if (VAR_25->tgisinternal)
  {

   if (VAR_16)
    continue;
   if (!FUNC_19())
    FUNC_13(VAR_5,
      (FUNC_14(VAR_3),
       FUNC_15("permission denied: \"%s\" is a system trigger",
        FUNC_6(VAR_25->tgname))));
  }

  VAR_23 = 1;

  if (VAR_25->tgenabled != VAR_15)
  {

   HeapTuple VAR_26 = FUNC_16(VAR_22);
   Form_pg_trigger VAR_27 = (Form_pg_trigger) FUNC_3(VAR_26);

   VAR_27->tgenabled = VAR_15;

   FUNC_2(VAR_18, &VAR_26->t_self, VAR_26);

   FUNC_17(VAR_26);





   if (VAR_13->rd_rel->relkind == VAR_9 &&
    (FUNC_12(VAR_25->tgtype)))
   {
    PartitionDesc VAR_28 = FUNC_8(VAR_13);
    int VAR_29;

    for (VAR_29 = 0; VAR_29 < VAR_28->nparts; VAR_29++)
    {
     Relation VAR_30;

     VAR_30 = FUNC_18(VAR_28->oids[VAR_29], VAR_17);
     FUNC_25(VAR_30, FUNC_6(VAR_25->tgname),
           VAR_15, VAR_16, VAR_17);
     FUNC_23(VAR_30, VAR_8);
    }
   }

   VAR_24 = 1;
  }

  FUNC_5(VAR_11,
          VAR_25->oid, 0);
 }

 FUNC_21(VAR_21);

 FUNC_23(VAR_18, VAR_10);

 if (VAR_14 && !VAR_23)
  FUNC_13(VAR_5,
    (FUNC_14(VAR_4),
     FUNC_15("trigger \"%s\" for table \"%s\" does not exist",
      VAR_14, FUNC_9(VAR_13))));






 if (VAR_24)
  FUNC_1(VAR_13);
}
