
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* oid; void* tableoid; } ;
struct TYPE_13__ {void* name; int dump; int namespace; TYPE_1__ catId; int objType; } ;
struct TYPE_12__ {TYPE_4__ dobj; void* rolname; void* oprcode; int oprkind; } ;
struct TYPE_11__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ OprInfo ;
typedef int Archive ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 void* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,void*) ;
 int FUNC_11 (char*,void*) ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (int *) ;
 int FUNC_14 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_15 (void*) ;
 int VAR_3 ;

OprInfo *
FUNC_16(Archive *VAR_4, int *VAR_5)
{
 PGresult *VAR_6;
 int VAR_7;
 int VAR_8;
 PQExpBuffer VAR_9 = FUNC_8();
 OprInfo *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;






 FUNC_6(VAR_9, "SELECT tableoid, oid, oprname, "
       "oprnamespace, "
       "(%s oprowner) AS rolname, "
       "oprkind, "
       "oprcode::oid AS oprcode "
       "FROM pg_operator",
       VAR_3);

 VAR_6 = FUNC_1(VAR_4, VAR_9->data, VAR_2);

 VAR_7 = FUNC_5(VAR_6);
 *VAR_5 = VAR_7;

 VAR_10 = (OprInfo *) FUNC_12(VAR_7 * sizeof(OprInfo));

 VAR_11 = FUNC_3(VAR_6, "tableoid");
 VAR_12 = FUNC_3(VAR_6, "oid");
 VAR_13 = FUNC_3(VAR_6, "oprname");
 VAR_14 = FUNC_3(VAR_6, "oprnamespace");
 VAR_15 = FUNC_3(VAR_6, "rolname");
 VAR_16 = FUNC_3(VAR_6, "oprkind");
 VAR_17 = FUNC_3(VAR_6, "oprcode");

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  VAR_10[VAR_8].dobj.objType = VAR_0;
  VAR_10[VAR_8].dobj.catId.tableoid = FUNC_7(FUNC_4(VAR_6, VAR_8, VAR_11));
  VAR_10[VAR_8].dobj.catId.oid = FUNC_7(FUNC_4(VAR_6, VAR_8, VAR_12));
  FUNC_0(&VAR_10[VAR_8].dobj);
  VAR_10[VAR_8].dobj.name = FUNC_13(FUNC_4(VAR_6, VAR_8, VAR_13));
  VAR_10[VAR_8].dobj.namespace =
   FUNC_10(VAR_4,
        FUNC_7(FUNC_4(VAR_6, VAR_8, VAR_14)));
  VAR_10[VAR_8].rolname = FUNC_13(FUNC_4(VAR_6, VAR_8, VAR_15));
  VAR_10[VAR_8].oprkind = (FUNC_4(VAR_6, VAR_8, VAR_16))[0];
  VAR_10[VAR_8].oprcode = FUNC_7(FUNC_4(VAR_6, VAR_8, VAR_17));


  FUNC_14(&(VAR_10[VAR_8].dobj), VAR_4);


  VAR_10[VAR_8].dobj.dump &= ~VAR_1;

  if (FUNC_15(VAR_10[VAR_8].rolname) == 0)
   FUNC_11("owner of operator \"%s\" appears to be invalid",
         VAR_10[VAR_8].dobj.name);
 }

 FUNC_2(VAR_6);

 FUNC_9(VAR_9);

 return VAR_10;
}
