
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relname; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;

char *
FUNC_7(Oid VAR_1)
{
 HeapTuple VAR_2;

 VAR_2 = FUNC_5(VAR_0, FUNC_3(VAR_1));
 if (FUNC_1(VAR_2))
 {
  Form_pg_class VAR_3 = (Form_pg_class) FUNC_0(VAR_2);
  char *VAR_4;

  VAR_4 = FUNC_6(FUNC_2(VAR_3->relname));
  FUNC_4(VAR_2);
  return VAR_4;
 }
 else
  return ((void*)0);
}
