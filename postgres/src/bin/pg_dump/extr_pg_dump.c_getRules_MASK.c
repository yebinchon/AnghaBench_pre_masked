
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_15__ {void* oid; void* tableoid; } ;
struct TYPE_14__ {int dumpId; int dump; int namespace; TYPE_1__ catId; int name; int objType; } ;
struct TYPE_19__ {scalar_t__ relkind; TYPE_11__ dobj; } ;
struct TYPE_18__ {int remoteVersion; } ;
struct TYPE_17__ {int data; } ;
struct TYPE_16__ {char ev_type; int is_instead; char ev_enabled; int separate; TYPE_7__* ruletable; TYPE_11__ dobj; } ;
typedef TYPE_2__ RuleInfo ;
typedef TYPE_3__* PQExpBuffer ;
typedef int PGresult ;
typedef void* Oid ;
typedef TYPE_4__ Archive ;


 int FUNC_0 (TYPE_11__*) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_4__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (TYPE_11__*,int ) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 void* FUNC_8 (char*) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (char*,void*,void*) ;
 TYPE_7__* FUNC_12 (void*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (char*) ;

RuleInfo *
FUNC_15(Archive *VAR_4, int *VAR_5)
{
 PGresult *VAR_6;
 int VAR_7;
 int VAR_8;
 PQExpBuffer VAR_9 = FUNC_9();
 RuleInfo *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_4->remoteVersion >= 80300)
 {
  FUNC_7(VAR_9, "SELECT "
        "tableoid, oid, rulename, "
        "ev_class AS ruletable, ev_type, is_instead, "
        "ev_enabled "
        "FROM pg_rewrite "
        "ORDER BY oid");
 }
 else
 {
  FUNC_7(VAR_9, "SELECT "
        "tableoid, oid, rulename, "
        "ev_class AS ruletable, ev_type, is_instead, "
        "'O'::char AS ev_enabled "
        "FROM pg_rewrite "
        "ORDER BY oid");
 }

 VAR_6 = FUNC_1(VAR_4, VAR_9->data, VAR_1);

 VAR_7 = FUNC_5(VAR_6);

 *VAR_5 = VAR_7;

 VAR_10 = (RuleInfo *) FUNC_13(VAR_7 * sizeof(RuleInfo));

 VAR_11 = FUNC_3(VAR_6, "tableoid");
 VAR_12 = FUNC_3(VAR_6, "oid");
 VAR_13 = FUNC_3(VAR_6, "rulename");
 VAR_14 = FUNC_3(VAR_6, "ruletable");
 VAR_15 = FUNC_3(VAR_6, "ev_type");
 VAR_16 = FUNC_3(VAR_6, "is_instead");
 VAR_17 = FUNC_3(VAR_6, "ev_enabled");

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  Oid VAR_18;

  VAR_10[VAR_8].dobj.objType = VAR_0;
  VAR_10[VAR_8].dobj.catId.tableoid = FUNC_8(FUNC_4(VAR_6, VAR_8, VAR_11));
  VAR_10[VAR_8].dobj.catId.oid = FUNC_8(FUNC_4(VAR_6, VAR_8, VAR_12));
  FUNC_0(&VAR_10[VAR_8].dobj);
  VAR_10[VAR_8].dobj.name = FUNC_14(FUNC_4(VAR_6, VAR_8, VAR_13));
  VAR_18 = FUNC_8(FUNC_4(VAR_6, VAR_8, VAR_14));
  VAR_10[VAR_8].ruletable = FUNC_12(VAR_18);
  if (VAR_10[VAR_8].ruletable == ((void*)0))
   FUNC_11("failed sanity check, parent table with OID %u of pg_rewrite entry with OID %u not found",
      VAR_18, VAR_10[VAR_8].dobj.catId.oid);
  VAR_10[VAR_8].dobj.namespace = VAR_10[VAR_8].ruletable->dobj.namespace;
  VAR_10[VAR_8].dobj.dump = VAR_10[VAR_8].ruletable->dobj.dump;
  VAR_10[VAR_8].ev_type = *(FUNC_4(VAR_6, VAR_8, VAR_15));
  VAR_10[VAR_8].is_instead = *(FUNC_4(VAR_6, VAR_8, VAR_16)) == 't';
  VAR_10[VAR_8].ev_enabled = *(FUNC_4(VAR_6, VAR_8, VAR_17));
  if (VAR_10[VAR_8].ruletable)
  {







   if ((VAR_10[VAR_8].ruletable->relkind == VAR_3 ||
     VAR_10[VAR_8].ruletable->relkind == VAR_2) &&
    VAR_10[VAR_8].ev_type == '1' && VAR_10[VAR_8].is_instead)
   {
    FUNC_6(&VAR_10[VAR_8].ruletable->dobj,
         VAR_10[VAR_8].dobj.dumpId);

    VAR_10[VAR_8].separate = 0;
   }
   else
   {
    FUNC_6(&VAR_10[VAR_8].dobj,
         VAR_10[VAR_8].ruletable->dobj.dumpId);
    VAR_10[VAR_8].separate = 1;
   }
  }
  else
   VAR_10[VAR_8].separate = 1;
 }

 FUNC_2(VAR_6);

 FUNC_10(VAR_9);

 return VAR_10;
}
