
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; int conparentid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ,int,int *,int,int *) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static List *
FUNC_15(Relation VAR_11)
{
 Relation VAR_12;
 HeapTuple VAR_13;
 SysScanDesc VAR_14;
 ScanKeyData VAR_15[2];
 List *VAR_16 = VAR_10;





 if (FUNC_5(VAR_11) == VAR_10 ||
  FUNC_8(FUNC_4(VAR_11,
            VAR_8)))
  return VAR_10;


 VAR_12 = FUNC_14(VAR_5, VAR_0);
 FUNC_7(&VAR_15[0],
    VAR_1, VAR_3,
    VAR_7, FUNC_2(FUNC_6(VAR_11)));
 FUNC_7(&VAR_15[1],
    VAR_2, VAR_3,
    VAR_6, FUNC_0(VAR_4));


 VAR_14 = FUNC_10(VAR_12, VAR_9, 1, ((void*)0), 2, VAR_15);
 while ((VAR_13 = FUNC_12(VAR_14)) != ((void*)0))
 {
  Form_pg_constraint VAR_17 = (Form_pg_constraint) FUNC_1(VAR_13);




  if (!FUNC_3(VAR_17->conparentid))
   continue;

  VAR_16 = FUNC_9(VAR_16, VAR_17->oid);
 }

 FUNC_11(VAR_14);
 FUNC_13(VAR_12, VAR_0);

 return VAR_16;
}
