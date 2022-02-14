
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_8__ {int temp_cxt; scalar_t__ has_returning; int query; int conn; int p_nums; int p_name; int ctidAttno; } ;
struct TYPE_7__ {scalar_t__ ri_FdwState; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef TYPE_2__ PgFdwModifyState ;
typedef int PGresult ;
typedef int * ItemPointer ;
typedef int EState ;
typedef int Datum ;
typedef scalar_t__ CmdType ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,char const**,int *,int *,int ) ;
 int FUNC_9 (int ) ;
 char** FUNC_10 (TYPE_2__*,int *,int *) ;
 int FUNC_11 (int ,char*) ;
 int * FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *,int ,int,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_16(EState *VAR_6,
        ResultRelInfo *VAR_7,
        CmdType VAR_8,
        TupleTableSlot *VAR_9,
        TupleTableSlot *VAR_10)
{
 PgFdwModifyState *VAR_11 = (PgFdwModifyState *) VAR_7->ri_FdwState;
 ItemPointer VAR_12 = ((void*)0);
 const char **VAR_13;
 PGresult *VAR_14;
 int VAR_15;


 FUNC_0(VAR_8 == VAR_1 ||
     VAR_8 == VAR_2 ||
     VAR_8 == VAR_0);


 if (!VAR_11->p_name)
  FUNC_14(VAR_11);




 if (VAR_8 == VAR_2 || VAR_8 == VAR_0)
 {
  Datum VAR_16;
  bool VAR_17;

  VAR_16 = FUNC_2(VAR_10,
          VAR_11->ctidAttno,
          &VAR_17);

  if (VAR_17)
   FUNC_11(VAR_3, "ctid is NULL");
  VAR_12 = (ItemPointer) FUNC_1(VAR_16);
 }


 VAR_13 = FUNC_10(VAR_11, VAR_12, VAR_9);




 if (!FUNC_8(VAR_11->conn,
        VAR_11->p_name,
        VAR_11->p_nums,
        VAR_13,
        ((void*)0),
        ((void*)0),
        0))
  FUNC_13(VAR_3, ((void*)0), VAR_11->conn, 0, VAR_11->query);







 VAR_14 = FUNC_12(VAR_11->conn, VAR_11->query);
 if (FUNC_7(VAR_14) !=
  (VAR_11->has_returning ? VAR_5 : VAR_4))
  FUNC_13(VAR_3, VAR_14, VAR_11->conn, 1, VAR_11->query);


 if (VAR_11->has_returning)
 {
  VAR_15 = FUNC_6(VAR_14);
  if (VAR_15 > 0)
   FUNC_15(VAR_11, VAR_9, VAR_14);
 }
 else
  VAR_15 = FUNC_9(FUNC_5(VAR_14));


 FUNC_4(VAR_14);

 FUNC_3(VAR_11->temp_cxt);




 return (VAR_15 > 0) ? VAR_9 : ((void*)0);
}
