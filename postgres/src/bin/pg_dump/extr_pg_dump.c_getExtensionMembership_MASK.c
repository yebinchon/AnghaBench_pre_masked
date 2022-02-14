
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {void* oid; void* tableoid; } ;
struct TYPE_13__ {scalar_t__ oid; } ;
struct TYPE_14__ {TYPE_1__ catId; } ;
struct TYPE_17__ {TYPE_2__ dobj; } ;
struct TYPE_16__ {TYPE_5__* ext; TYPE_6__ catId; } ;
struct TYPE_15__ {int data; } ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef scalar_t__ Oid ;
typedef TYPE_4__ ExtensionMemberId ;
typedef TYPE_5__ ExtensionInfo ;
typedef TYPE_6__ CatalogId ;
typedef int Archive ;


 int * FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 void* FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_5__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_4__*,int) ;

void
FUNC_13(Archive *VAR_1, ExtensionInfo VAR_2[],
        int VAR_3)
{
 PQExpBuffer VAR_4;
 PGresult *VAR_5;
 int VAR_6,
    VAR_7,
    VAR_8;
 int VAR_9,
    VAR_10,
    VAR_11;
 ExtensionMemberId *VAR_12;
 ExtensionInfo *VAR_13;


 if (VAR_3 == 0)
  return;

 VAR_4 = FUNC_7();


 FUNC_5(VAR_4, "SELECT "
       "classid, objid, refobjid "
       "FROM pg_depend "
       "WHERE refclassid = 'pg_extension'::regclass "
       "AND deptype = 'e' "
       "ORDER BY 3");

 VAR_5 = FUNC_0(VAR_1, VAR_4->data, VAR_0);

 VAR_6 = FUNC_4(VAR_5);

 VAR_9 = FUNC_2(VAR_5, "classid");
 VAR_10 = FUNC_2(VAR_5, "objid");
 VAR_11 = FUNC_2(VAR_5, "refobjid");

 VAR_12 = (ExtensionMemberId *) FUNC_11(VAR_6 * sizeof(ExtensionMemberId));
 VAR_7 = 0;
 VAR_13 = ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  CatalogId VAR_14;
  Oid VAR_15;

  VAR_14.tableoid = FUNC_6(FUNC_3(VAR_5, VAR_8, VAR_9));
  VAR_14.oid = FUNC_6(FUNC_3(VAR_5, VAR_8, VAR_10));
  VAR_15 = FUNC_6(FUNC_3(VAR_5, VAR_8, VAR_11));

  if (VAR_13 == ((void*)0) ||
   VAR_13->dobj.catId.oid != VAR_15)
   VAR_13 = FUNC_9(VAR_15);

  if (VAR_13 == ((void*)0))
  {

   FUNC_10("could not find referenced extension %u", VAR_15);
   continue;
  }

  VAR_12[VAR_7].catId = VAR_14;
  VAR_12[VAR_7].ext = VAR_13;
  VAR_7++;
 }

 FUNC_1(VAR_5);


 FUNC_12(VAR_12, VAR_7);

 FUNC_8(VAR_4);
}
