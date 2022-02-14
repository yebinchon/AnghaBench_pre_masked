
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seqstart; int seqmin; int seqmax; int seqincrement; int seqcycle; int seqcache; } ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_sequence ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,int *,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

List *
FUNC_10(Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_sequence VAR_6;
 List *VAR_7 = VAR_2;

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (!FUNC_1(VAR_5))
  FUNC_4(VAR_0, "cache lookup failed for sequence %u", VAR_4);
 VAR_6 = (Form_pg_sequence) FUNC_0(VAR_5);


 VAR_7 = FUNC_5(VAR_7,
       FUNC_6("cache", (Node *) FUNC_7(FUNC_9(VAR_1, VAR_6->seqcache)), -1));
 VAR_7 = FUNC_5(VAR_7,
       FUNC_6("cycle", (Node *) FUNC_8(VAR_6->seqcycle), -1));
 VAR_7 = FUNC_5(VAR_7,
       FUNC_6("increment", (Node *) FUNC_7(FUNC_9(VAR_1, VAR_6->seqincrement)), -1));
 VAR_7 = FUNC_5(VAR_7,
       FUNC_6("maxvalue", (Node *) FUNC_7(FUNC_9(VAR_1, VAR_6->seqmax)), -1));
 VAR_7 = FUNC_5(VAR_7,
       FUNC_6("minvalue", (Node *) FUNC_7(FUNC_9(VAR_1, VAR_6->seqmin)), -1));
 VAR_7 = FUNC_5(VAR_7,
       FUNC_6("start", (Node *) FUNC_7(FUNC_9(VAR_1, VAR_6->seqstart)), -1));

 FUNC_2(VAR_5);

 return VAR_7;
}
