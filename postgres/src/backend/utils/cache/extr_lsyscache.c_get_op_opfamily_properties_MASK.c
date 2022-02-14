
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int amopstrategy; int amoprighttype; int amoplefttype; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_amop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;

void
FUNC_7(Oid VAR_4, Oid VAR_5, bool VAR_6,
         int *VAR_7,
         Oid *VAR_8,
         Oid *VAR_9)
{
 HeapTuple VAR_10;
 Form_pg_amop VAR_11;

 VAR_10 = FUNC_5(VAR_0,
       FUNC_3(VAR_4),
       FUNC_0(VAR_6 ? VAR_1 : VAR_2),
       FUNC_3(VAR_5));
 if (!FUNC_2(VAR_10))
  FUNC_6(VAR_3, "operator %u is not a member of opfamily %u",
    VAR_4, VAR_5);
 VAR_11 = (Form_pg_amop) FUNC_1(VAR_10);
 *VAR_7 = VAR_11->amopstrategy;
 *VAR_8 = VAR_11->amoplefttype;
 *VAR_9 = VAR_11->amoprighttype;
 FUNC_4(VAR_10);
}
