
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int prorettype; scalar_t__ proretset; } ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int StringInfo ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(StringInfo VAR_0, HeapTuple VAR_1)
{
 Form_pg_proc VAR_2 = (Form_pg_proc) FUNC_0(VAR_1);
 int VAR_3 = 0;
 StringInfoData VAR_4;

 FUNC_5(&VAR_4);

 if (VAR_2->proretset)
 {

  FUNC_3(&VAR_4, "TABLE(");
  VAR_3 = FUNC_6(&VAR_4, VAR_1, 1, 0);
  if (VAR_3 > 0)
   FUNC_2(&VAR_4, ')');
  else
   FUNC_7(&VAR_4);
 }

 if (VAR_3 == 0)
 {

  if (VAR_2->proretset)
   FUNC_3(&VAR_4, "SETOF ");
  FUNC_3(&VAR_4, FUNC_4(VAR_2->prorettype));
 }

 FUNC_1(VAR_0, VAR_4.data, VAR_4.len);
}
