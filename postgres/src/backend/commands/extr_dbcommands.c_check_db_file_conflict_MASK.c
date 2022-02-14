
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int TableScanDesc ;
struct TYPE_2__ {scalar_t__ oid; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_tablespace ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static bool
FUNC_9(Oid VAR_4)
{
 bool VAR_5 = 0;
 Relation VAR_6;
 TableScanDesc VAR_7;
 HeapTuple VAR_8;

 VAR_6 = FUNC_8(VAR_3, VAR_0);
 VAR_7 = FUNC_5(VAR_6, 0, ((void*)0));
 while ((VAR_8 = FUNC_2(VAR_7, VAR_1)) != ((void*)0))
 {
  Form_pg_tablespace VAR_9 = (Form_pg_tablespace) FUNC_0(VAR_8);
  Oid VAR_10 = VAR_9->oid;
  char *VAR_11;
  struct stat VAR_12;


  if (VAR_10 == VAR_2)
   continue;

  VAR_11 = FUNC_1(VAR_4, VAR_10);

  if (FUNC_3(VAR_11, &VAR_12) == 0)
  {

   FUNC_4(VAR_11);
   VAR_5 = 1;
   break;
  }

  FUNC_4(VAR_11);
 }

 FUNC_7(VAR_7);
 FUNC_6(VAR_6, VAR_0);

 return VAR_5;
}
