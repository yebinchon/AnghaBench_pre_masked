
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rolcreatedb; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_authid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static bool
FUNC_7(void)
{
 bool VAR_1 = 0;
 HeapTuple VAR_2;


 if (FUNC_6())
  return 1;

 VAR_2 = FUNC_5(VAR_0, FUNC_3(FUNC_1()));
 if (FUNC_2(VAR_2))
 {
  VAR_1 = ((Form_pg_authid) FUNC_0(VAR_2))->rolcreatedb;
  FUNC_4(VAR_2);
 }
 return VAR_1;
}
