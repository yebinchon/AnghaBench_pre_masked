
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_3__ {scalar_t__ relkind; int oid; } ;
typedef int Relation ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_7 ;
 int FUNC_9 (int ,TYPE_1__*,int) ;

__attribute__((used)) static List *
FUNC_10(int VAR_8)
{
 List *VAR_9 = VAR_2;
 Relation VAR_10;
 TableScanDesc VAR_11;
 HeapTuple VAR_12;

 VAR_10 = FUNC_8(VAR_6, VAR_0);

 VAR_11 = FUNC_5(VAR_10, 0, ((void*)0));

 while ((VAR_12 = FUNC_2(VAR_11, VAR_1)) != ((void*)0))
 {
  Form_pg_class VAR_13 = (Form_pg_class) FUNC_0(VAR_12);
  MemoryContext VAR_14;
  Oid VAR_15 = VAR_13->oid;


  if (!FUNC_9(VAR_15, VAR_13, VAR_8))
   continue;






  if (VAR_13->relkind != VAR_5 &&
   VAR_13->relkind != VAR_3 &&
   VAR_13->relkind != VAR_4)
   continue;






  VAR_14 = FUNC_1(VAR_7);
  VAR_9 = FUNC_3(VAR_9, FUNC_4(((void*)0),
               VAR_15,
               VAR_2));
  FUNC_1(VAR_14);
 }

 FUNC_7(VAR_11);
 FUNC_6(VAR_10, VAR_0);

 return VAR_9;
}
