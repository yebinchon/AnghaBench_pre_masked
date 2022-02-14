
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int oid; } ;
struct TYPE_12__ {int name; TYPE_1__ catId; } ;
struct TYPE_13__ {TYPE_2__ dobj; } ;
typedef TYPE_3__ TableInfo ;
struct TYPE_14__ {int data; } ;
typedef TYPE_4__* PQExpBuffer ;
typedef int PGresult ;
typedef int Archive ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 char* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,char*,int) ;
 int FUNC_7 (TYPE_4__*,char*,int ) ;
 TYPE_4__* FUNC_8 () ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static PQExpBuffer
FUNC_11(Archive *VAR_1, TableInfo *VAR_2)
{
 PQExpBuffer VAR_3 = FUNC_8();
 PQExpBuffer VAR_4 = FUNC_8();
 PGresult *VAR_5;
 int VAR_6;


 FUNC_7(VAR_3,
       "SELECT pg_catalog.pg_get_viewdef('%u'::pg_catalog.oid) AS viewdef",
       VAR_2->dobj.catId.oid);

 VAR_5 = FUNC_1(VAR_1, VAR_3->data, VAR_0);

 if (FUNC_5(VAR_5) != 1)
 {
  if (FUNC_5(VAR_5) < 1)
   FUNC_10("query to obtain definition of view \"%s\" returned no data",
      VAR_2->dobj.name);
  else
   FUNC_10("query to obtain definition of view \"%s\" returned more than one definition",
      VAR_2->dobj.name);
 }

 VAR_6 = FUNC_3(VAR_5, 0, 0);

 if (VAR_6 == 0)
  FUNC_10("definition of view \"%s\" appears to be empty (length zero)",
     VAR_2->dobj.name);


 FUNC_0(FUNC_4(VAR_5, 0, 0)[VAR_6 - 1] == ';');
 FUNC_6(VAR_4, FUNC_4(VAR_5, 0, 0), VAR_6 - 1);

 FUNC_2(VAR_5);
 FUNC_9(VAR_3);

 return VAR_4;
}
