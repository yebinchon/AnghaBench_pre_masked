
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int attname; } ;
struct TYPE_14__ {scalar_t__ classid; scalar_t__ objid; scalar_t__ objsubid; } ;
struct TYPE_13__ {TYPE_1__* rd_rel; int rd_att; } ;
struct TYPE_12__ {scalar_t__ relkind; scalar_t__ reltype; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_depend ;
typedef TYPE_4__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 char const* FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_7 (int ,scalar_t__) ;
 scalar_t__ VAR_15 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,char const*,char const*,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 TYPE_2__* FUNC_17 (int ,int ) ;

void
FUNC_18(Oid VAR_16, Relation VAR_17,
         const char *VAR_18)
{
 Relation VAR_19;
 ScanKeyData VAR_20[2];
 SysScanDesc VAR_21;
 HeapTuple VAR_22;


 FUNC_8();





 VAR_19 = FUNC_17(VAR_5, VAR_0);

 FUNC_6(&VAR_20[0],
    VAR_1,
    VAR_3, VAR_8,
    FUNC_3(VAR_15));
 FUNC_6(&VAR_20[1],
    VAR_2,
    VAR_3, VAR_8,
    FUNC_3(VAR_16));

 VAR_21 = FUNC_14(VAR_19, VAR_4, 1,
         ((void*)0), 2, VAR_20);

 while (FUNC_1(VAR_22 = FUNC_16(VAR_21)))
 {
  Form_pg_depend VAR_23 = (Form_pg_depend) FUNC_0(VAR_22);
  Relation VAR_24;
  Form_pg_attribute VAR_25;


  if (VAR_23->classid == VAR_15)
  {






   FUNC_18(VAR_23->objid,
            VAR_17, VAR_18);
   continue;
  }



  if (VAR_23->classid != VAR_14 ||
   VAR_23->objsubid <= 0)
   continue;

  VAR_24 = FUNC_13(VAR_23->objid, VAR_0);
  VAR_25 = FUNC_7(VAR_24->rd_att, VAR_23->objsubid - 1);

  if (VAR_24->rd_rel->relkind == VAR_13 ||
   VAR_24->rd_rel->relkind == VAR_11 ||
   VAR_24->rd_rel->relkind == VAR_12)
  {
   if (VAR_18)
    FUNC_9(VAR_7,
      (FUNC_10(VAR_6),
       FUNC_11("cannot alter type \"%s\" because column \"%s.%s\" uses it",
        VAR_18,
        FUNC_5(VAR_24),
        FUNC_2(VAR_25->attname))));
   else if (VAR_17->rd_rel->relkind == VAR_9)
    FUNC_9(VAR_7,
      (FUNC_10(VAR_6),
       FUNC_11("cannot alter type \"%s\" because column \"%s.%s\" uses it",
        FUNC_5(VAR_17),
        FUNC_5(VAR_24),
        FUNC_2(VAR_25->attname))));
   else if (VAR_17->rd_rel->relkind == VAR_10)
    FUNC_9(VAR_7,
      (FUNC_10(VAR_6),
       FUNC_11("cannot alter foreign table \"%s\" because column \"%s.%s\" uses its row type",
        FUNC_5(VAR_17),
        FUNC_5(VAR_24),
        FUNC_2(VAR_25->attname))));
   else
    FUNC_9(VAR_7,
      (FUNC_10(VAR_6),
       FUNC_11("cannot alter table \"%s\" because column \"%s.%s\" uses its row type",
        FUNC_5(VAR_17),
        FUNC_5(VAR_24),
        FUNC_2(VAR_25->attname))));
  }
  else if (FUNC_4(VAR_24->rd_rel->reltype))
  {




   FUNC_18(VAR_24->rd_rel->reltype,
            VAR_17, VAR_18);
  }

  FUNC_12(VAR_24, VAR_0);
 }

 FUNC_15(VAR_21);

 FUNC_12(VAR_19, VAR_0);
}
