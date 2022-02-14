
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {void* oid; void* tableoid; } ;
struct TYPE_18__ {int dump; void* name; TYPE_1__ catId; int objType; } ;
struct TYPE_17__ {int remoteVersion; } ;
struct TYPE_16__ {TYPE_5__ dobj; int evtenabled; void* evtfname; void* evttags; void* evtowner; void* evtevent; void* evtname; } ;
struct TYPE_15__ {int data; } ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGresult ;
typedef TYPE_3__ EventTriggerInfo ;
typedef TYPE_4__ Archive ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_4__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 void* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*,TYPE_4__*) ;
 int VAR_3 ;

EventTriggerInfo *
FUNC_13(Archive *VAR_4, int *VAR_5)
{
 int VAR_6;
 PQExpBuffer VAR_7;
 PGresult *VAR_8;
 EventTriggerInfo *VAR_9;
 int VAR_10,
    VAR_11,
    VAR_12,
    VAR_13,
    VAR_14,
    VAR_15,
    VAR_16,
    VAR_17;
 int VAR_18;


 if (VAR_4->remoteVersion < 90300)
 {
  *VAR_5 = 0;
  return ((void*)0);
 }

 VAR_7 = FUNC_8();

 FUNC_6(VAR_7,
       "SELECT e.tableoid, e.oid, evtname, evtenabled, "
       "evtevent, (%s evtowner) AS evtowner, "
       "array_to_string(array("
       "select quote_literal(x) "
       " from unnest(evttags) as t(x)), ', ') as evttags, "
       "e.evtfoid::regproc as evtfname "
       "FROM pg_event_trigger e "
       "ORDER BY e.oid",
       VAR_3);

 VAR_8 = FUNC_1(VAR_4, VAR_7->data, VAR_2);

 VAR_18 = FUNC_5(VAR_8);

 *VAR_5 = VAR_18;

 VAR_9 = (EventTriggerInfo *) FUNC_10(VAR_18 * sizeof(EventTriggerInfo));

 VAR_10 = FUNC_3(VAR_8, "tableoid");
 VAR_11 = FUNC_3(VAR_8, "oid");
 VAR_12 = FUNC_3(VAR_8, "evtname");
 VAR_13 = FUNC_3(VAR_8, "evtevent");
 VAR_14 = FUNC_3(VAR_8, "evtowner");
 VAR_15 = FUNC_3(VAR_8, "evttags");
 VAR_16 = FUNC_3(VAR_8, "evtfname");
 VAR_17 = FUNC_3(VAR_8, "evtenabled");

 for (VAR_6 = 0; VAR_6 < VAR_18; VAR_6++)
 {
  VAR_9[VAR_6].dobj.objType = VAR_0;
  VAR_9[VAR_6].dobj.catId.tableoid = FUNC_7(FUNC_4(VAR_8, VAR_6, VAR_10));
  VAR_9[VAR_6].dobj.catId.oid = FUNC_7(FUNC_4(VAR_8, VAR_6, VAR_11));
  FUNC_0(&VAR_9[VAR_6].dobj);
  VAR_9[VAR_6].dobj.name = FUNC_11(FUNC_4(VAR_8, VAR_6, VAR_12));
  VAR_9[VAR_6].evtname = FUNC_11(FUNC_4(VAR_8, VAR_6, VAR_12));
  VAR_9[VAR_6].evtevent = FUNC_11(FUNC_4(VAR_8, VAR_6, VAR_13));
  VAR_9[VAR_6].evtowner = FUNC_11(FUNC_4(VAR_8, VAR_6, VAR_14));
  VAR_9[VAR_6].evttags = FUNC_11(FUNC_4(VAR_8, VAR_6, VAR_15));
  VAR_9[VAR_6].evtfname = FUNC_11(FUNC_4(VAR_8, VAR_6, VAR_16));
  VAR_9[VAR_6].evtenabled = *(FUNC_4(VAR_8, VAR_6, VAR_17));


  FUNC_12(&(VAR_9[VAR_6].dobj), VAR_4);


  VAR_9[VAR_6].dobj.dump &= ~VAR_1;
 }

 FUNC_2(VAR_8);

 FUNC_9(VAR_7);

 return VAR_9;
}
