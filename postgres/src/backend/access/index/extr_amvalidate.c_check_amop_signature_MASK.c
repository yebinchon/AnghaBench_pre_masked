
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ oprresult; char oprkind; scalar_t__ oprleft; scalar_t__ oprright; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_operator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

bool
FUNC_6(Oid VAR_2, Oid VAR_3, Oid VAR_4, Oid VAR_5)
{
 bool VAR_6 = 1;
 HeapTuple VAR_7;
 Form_pg_operator VAR_8;

 VAR_7 = FUNC_4(VAR_1, FUNC_2(VAR_2));
 if (!FUNC_1(VAR_7))
  FUNC_5(VAR_0, "cache lookup failed for operator %u", VAR_2);
 VAR_8 = (Form_pg_operator) FUNC_0(VAR_7);

 if (VAR_8->oprresult != VAR_3 || VAR_8->oprkind != 'b' ||
  VAR_8->oprleft != VAR_4 || VAR_8->oprright != VAR_5)
  VAR_6 = 0;

 FUNC_3(VAR_7);
 return VAR_6;
}
