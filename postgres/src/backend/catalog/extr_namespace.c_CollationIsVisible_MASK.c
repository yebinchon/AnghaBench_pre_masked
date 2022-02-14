
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ collnamespace; int collname; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_collation ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 () ;

bool
FUNC_10(Oid VAR_4)
{
 HeapTuple VAR_5;
 Form_pg_collation VAR_6;
 Oid VAR_7;
 bool VAR_8;

 VAR_5 = FUNC_6(VAR_0, FUNC_4(VAR_4));
 if (!FUNC_2(VAR_5))
  FUNC_7(VAR_1, "cache lookup failed for collation %u", VAR_4);
 VAR_6 = (Form_pg_collation) FUNC_1(VAR_5);

 FUNC_9();






 VAR_7 = VAR_6->collnamespace;
 if (VAR_7 != VAR_2 &&
  !FUNC_8(VAR_3, VAR_7))
  VAR_8 = 0;
 else
 {







  char *VAR_9 = FUNC_3(VAR_6->collname);

  VAR_8 = (FUNC_0(VAR_9) == VAR_4);
 }

 FUNC_5(VAR_5);

 return VAR_8;
}
