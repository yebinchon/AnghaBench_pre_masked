
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int datname; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_database ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;

char *
FUNC_7(Oid VAR_1)
{
 HeapTuple VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_5(VAR_0, FUNC_3(VAR_1));
 if (FUNC_1(VAR_2))
 {
  VAR_3 = FUNC_6(FUNC_2(((Form_pg_database) FUNC_0(VAR_2))->datname));
  FUNC_4(VAR_2);
 }
 else
  VAR_3 = ((void*)0);

 return VAR_3;
}
