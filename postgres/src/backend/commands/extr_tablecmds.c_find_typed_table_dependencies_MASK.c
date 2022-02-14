
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_2__ {int oid; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_class ;
typedef scalar_t__ DropBehavior ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int * VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*) ;
 int * FUNC_7 (int ,int ) ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static List *
FUNC_13(Oid VAR_10, const char *VAR_11, DropBehavior VAR_12)
{
 Relation VAR_13;
 ScanKeyData VAR_14[1];
 TableScanDesc VAR_15;
 HeapTuple VAR_16;
 List *VAR_17 = VAR_8;

 VAR_13 = FUNC_12(VAR_9, VAR_0);

 FUNC_2(&VAR_14[0],
    VAR_1,
    VAR_2, VAR_6,
    FUNC_1(VAR_10));

 VAR_15 = FUNC_9(VAR_13, 1, VAR_14);

 while ((VAR_16 = FUNC_7(VAR_15, VAR_7)) != ((void*)0))
 {
  Form_pg_class VAR_18 = (Form_pg_class) FUNC_0(VAR_16);

  if (VAR_12 == VAR_3)
   FUNC_3(VAR_5,
     (FUNC_4(VAR_4),
      FUNC_6("cannot alter type \"%s\" because it is the type of a typed table",
       VAR_11),
      FUNC_5("Use ALTER ... CASCADE to alter the typed tables too.")));
  else
   VAR_17 = FUNC_8(VAR_17, VAR_18->oid);
 }

 FUNC_11(VAR_15);
 FUNC_10(VAR_13, VAR_0);

 return VAR_17;
}
