
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_22__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_31__ {TYPE_4__* namespace; } ;
struct TYPE_33__ {TYPE_6__* dataObj; TYPE_5__ dobj; } ;
typedef TYPE_7__ TableInfo ;
struct TYPE_26__ {int dump; } ;
struct TYPE_35__ {char* extconfig; char* extcondition; TYPE_1__ dobj; } ;
struct TYPE_34__ {int data; } ;
struct TYPE_27__ {int dumpId; } ;
struct TYPE_32__ {TYPE_22__ dobj; int filtercond; } ;
struct TYPE_28__ {int oid; } ;
struct TYPE_29__ {int dump; TYPE_2__ catId; } ;
struct TYPE_30__ {TYPE_3__ dobj; } ;
struct TYPE_25__ {int * head; } ;
struct TYPE_24__ {int * dopt; } ;
typedef TYPE_8__* PQExpBuffer ;
typedef int PGresult ;
typedef int Oid ;
typedef TYPE_9__ ExtensionInfo ;
typedef int DumpOptions ;
typedef TYPE_10__ Archive ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_10__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_22__*,int ) ;
 int FUNC_6 (char*) ;
 TYPE_8__* FUNC_7 () ;
 int FUNC_8 (TYPE_8__*) ;
 TYPE_7__* FUNC_9 (int ) ;
 int FUNC_10 (char**) ;
 int FUNC_11 (int *,TYPE_7__*) ;
 scalar_t__ FUNC_12 (char*,char***,int*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_8__*,char*) ;
 TYPE_11__ VAR_3 ;
 scalar_t__ FUNC_15 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_16 (char*) ;
 TYPE_11__ VAR_4 ;
 TYPE_11__ VAR_5 ;

void
FUNC_17(Archive *VAR_6, ExtensionInfo VAR_7[],
        int VAR_8)
{
 DumpOptions *VAR_9 = VAR_6->dopt;
 PQExpBuffer VAR_10;
 PGresult *VAR_11;
 int VAR_12,
    VAR_13;
 int VAR_14,
    VAR_15;


 if (VAR_8 == 0)
  return;
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
 {
  ExtensionInfo *VAR_16 = &(VAR_7[VAR_13]);
  char *VAR_17 = VAR_16->extconfig;
  char *VAR_18 = VAR_16->extcondition;
  char **VAR_19 = ((void*)0);
  char **VAR_20 = ((void*)0);
  int VAR_21;
  int VAR_22;

  if (FUNC_12(VAR_17, &VAR_19, &VAR_21) &&
   FUNC_12(VAR_18, &VAR_20, &VAR_22) &&
   VAR_21 == VAR_22)
  {
   int VAR_23;

   for (VAR_23 = 0; VAR_23 < VAR_21; VAR_23++)
   {
    TableInfo *VAR_24;
    Oid VAR_25 = FUNC_6(VAR_19[VAR_23]);
    bool VAR_26 =
    VAR_16->dobj.dump & VAR_1;

    VAR_24 = FUNC_9(VAR_25);
    if (VAR_24 == ((void*)0))
     continue;





    if (!(VAR_16->dobj.dump & VAR_1))
    {

     if (VAR_5.head != ((void*)0) &&
      FUNC_15(&VAR_5,
              VAR_25))
      VAR_26 = 1;


     if (VAR_24->dobj.namespace->dobj.dump &
      VAR_0)
      VAR_26 = 1;
    }


    if (VAR_4.head != ((void*)0) &&
     FUNC_15(&VAR_4,
             VAR_25))
     VAR_26 = 0;


    if (FUNC_15(&VAR_3,
             VAR_24->dobj.namespace->dobj.catId.oid))
     VAR_26 = 0;

    if (VAR_26)
    {
     FUNC_11(VAR_9, VAR_24);
     if (VAR_24->dataObj != ((void*)0))
     {
      if (FUNC_16(VAR_20[VAR_23]) > 0)
       VAR_24->dataObj->filtercond = FUNC_13(VAR_20[VAR_23]);
     }
    }
   }
  }
  if (VAR_19)
   FUNC_10(VAR_19);
  if (VAR_20)
   FUNC_10(VAR_20);
 }
 VAR_10 = FUNC_7();

 FUNC_14(VAR_10,
       "SELECT conrelid, confrelid "
       "FROM pg_constraint "
       "JOIN pg_depend ON (objid = confrelid) "
       "WHERE contype = 'f' "
       "AND refclassid = 'pg_extension'::regclass "
       "AND classid = 'pg_class'::regclass;");

 VAR_11 = FUNC_0(VAR_6, VAR_10->data, VAR_2);
 VAR_12 = FUNC_4(VAR_11);

 VAR_14 = FUNC_2(VAR_11, "conrelid");
 VAR_15 = FUNC_2(VAR_11, "confrelid");


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
 {
  Oid VAR_27,
     VAR_28;
  TableInfo *VAR_29,
       *VAR_30;

  VAR_27 = FUNC_6(FUNC_3(VAR_11, VAR_13, VAR_14));
  VAR_28 = FUNC_6(FUNC_3(VAR_11, VAR_13, VAR_15));
  VAR_30 = FUNC_9(VAR_27);
  VAR_29 = FUNC_9(VAR_28);

  if (VAR_29 == ((void*)0) ||
   VAR_29->dataObj == ((void*)0) ||
   VAR_30 == ((void*)0) ||
   VAR_30->dataObj == ((void*)0))
   continue;





  FUNC_5(&VAR_30->dataObj->dobj,
       VAR_29->dataObj->dobj.dumpId);
 }
 FUNC_1(VAR_11);
 FUNC_8(VAR_10);
}
