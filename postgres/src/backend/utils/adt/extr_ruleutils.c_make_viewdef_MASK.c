
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_3__ {scalar_t__ commandType; } ;
typedef int StringInfo ;
typedef int Relation ;
typedef TYPE_1__ Query ;
typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 char FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,int,int*) ;
 char* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,char) ;
 int FUNC_9 (TYPE_1__*,int ,int *,int ,int,int,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(StringInfo VAR_3, HeapTuple VAR_4, TupleDesc VAR_5,
    int VAR_6, int VAR_7)
{
 Query *VAR_8;
 char VAR_9;
 Oid VAR_10;
 bool VAR_11;
 char *VAR_12;
 char *VAR_13;
 List *VAR_14 = VAR_2;
 Relation VAR_15;
 int VAR_16;
 Datum VAR_17;
 bool VAR_18;




 VAR_16 = FUNC_5(VAR_5, "ev_type");
 VAR_17 = FUNC_6(VAR_4, VAR_5, VAR_16, &VAR_18);
 FUNC_0(!VAR_18);
 VAR_9 = FUNC_2(VAR_17);

 VAR_16 = FUNC_5(VAR_5, "ev_class");
 VAR_17 = FUNC_6(VAR_4, VAR_5, VAR_16, &VAR_18);
 FUNC_0(!VAR_18);
 VAR_10 = FUNC_3(VAR_17);

 VAR_16 = FUNC_5(VAR_5, "is_instead");
 VAR_17 = FUNC_6(VAR_4, VAR_5, VAR_16, &VAR_18);
 FUNC_0(!VAR_18);
 VAR_11 = FUNC_1(VAR_17);


 VAR_16 = FUNC_5(VAR_5, "ev_qual");
 VAR_12 = FUNC_7(VAR_4, VAR_5, VAR_16);

 VAR_16 = FUNC_5(VAR_5, "ev_action");
 VAR_13 = FUNC_7(VAR_4, VAR_5, VAR_16);
 if (VAR_13 != ((void*)0))
  VAR_14 = (List *) FUNC_13(VAR_13);

 if (FUNC_11(VAR_14) != 1)
 {

  return;
 }

 VAR_8 = (Query *) FUNC_10(VAR_14);

 if (VAR_9 != '1' || !VAR_11 ||
  FUNC_12(VAR_12, "<>") != 0 || VAR_8->commandType != VAR_1)
 {

  return;
 }

 VAR_15 = FUNC_15(VAR_10, VAR_0);

 FUNC_9(VAR_8, VAR_3, VAR_2, FUNC_4(VAR_15),
      VAR_6, VAR_7, 0);
 FUNC_8(VAR_3, ';');

 FUNC_14(VAR_15, VAR_0);
}
