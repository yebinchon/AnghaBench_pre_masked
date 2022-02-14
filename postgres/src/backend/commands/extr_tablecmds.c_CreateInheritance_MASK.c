
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_18__ {scalar_t__ inhparent; scalar_t__ inhseqno; } ;
struct TYPE_17__ {TYPE_1__* rd_rel; } ;
struct TYPE_16__ {scalar_t__ relkind; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_inherits ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,TYPE_2__*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_16 (int ,int ) ;

__attribute__((used)) static void
FUNC_17(Relation VAR_9, Relation VAR_10)
{
 Relation VAR_11;
 SysScanDesc VAR_12;
 ScanKeyData VAR_13;
 HeapTuple VAR_14;
 int32 VAR_15;


 VAR_11 = FUNC_16(VAR_5, VAR_8);
 FUNC_7(&VAR_13,
    VAR_0,
    VAR_1, VAR_4,
    FUNC_4(FUNC_6(VAR_9)));
 VAR_12 = FUNC_12(VAR_11, VAR_6,
         1, ((void*)0), 1, &VAR_13);


 VAR_15 = 0;
 while (FUNC_1(VAR_14 = FUNC_14(VAR_12)))
 {
  Form_pg_inherits VAR_16 = (Form_pg_inherits) FUNC_0(VAR_14);

  if (VAR_16->inhparent == FUNC_6(VAR_10))
   FUNC_9(VAR_3,
     (FUNC_10(VAR_2),
      FUNC_11("relation \"%s\" would be inherited from more than once",
       FUNC_5(VAR_10))));

  if (VAR_16->inhseqno > VAR_15)
   VAR_15 = VAR_16->inhseqno;
 }
 FUNC_13(VAR_12);


 FUNC_2(VAR_9, VAR_10);


 FUNC_3(VAR_9, VAR_10);




 FUNC_8(FUNC_6(VAR_9),
        FUNC_6(VAR_10),
        VAR_15 + 1,
        VAR_11,
        VAR_10->rd_rel->relkind ==
        VAR_7);


 FUNC_15(VAR_11, VAR_8);
}
