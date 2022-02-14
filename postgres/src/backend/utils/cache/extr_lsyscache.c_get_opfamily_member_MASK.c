
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_2__ {int amopopr; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_amop ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;

Oid
FUNC_6(Oid VAR_2, Oid VAR_3, Oid VAR_4,
     int16 VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_amop VAR_7;
 Oid VAR_8;

 VAR_6 = FUNC_5(VAR_0,
       FUNC_3(VAR_2),
       FUNC_3(VAR_3),
       FUNC_3(VAR_4),
       FUNC_2(VAR_5));
 if (!FUNC_1(VAR_6))
  return VAR_1;
 VAR_7 = (Form_pg_amop) FUNC_0(VAR_6);
 VAR_8 = VAR_7->amopopr;
 FUNC_4(VAR_6);
 return VAR_8;
}
