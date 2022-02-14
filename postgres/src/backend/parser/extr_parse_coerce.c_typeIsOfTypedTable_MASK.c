
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reloftype; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_class ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_7(Oid VAR_2, Oid VAR_3)
{
 Oid VAR_4 = FUNC_6(VAR_2);
 bool VAR_5 = 0;

 if (VAR_4)
 {
  HeapTuple VAR_6;
  Form_pg_class VAR_7;

  VAR_6 = FUNC_4(VAR_1, FUNC_2(VAR_4));
  if (!FUNC_1(VAR_6))
   FUNC_5(VAR_0, "cache lookup failed for relation %u", VAR_4);

  VAR_7 = (Form_pg_class) FUNC_0(VAR_6);
  if (VAR_7->reloftype == VAR_3)
   VAR_5 = 1;

  FUNC_3(VAR_6);
 }

 return VAR_5;
}
