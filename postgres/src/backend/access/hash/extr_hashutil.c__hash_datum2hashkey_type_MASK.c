
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int * rd_indcollation; int * rd_opfamily; } ;
typedef TYPE_1__* Relation ;
typedef int RegProcedure ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

uint32
FUNC_6(Relation VAR_2, Datum VAR_3, Oid VAR_4)
{
 RegProcedure VAR_5;
 Oid VAR_6;


 VAR_5 = FUNC_5(VAR_2->rd_opfamily[0],
          VAR_4,
          VAR_4,
          VAR_1);
 if (!FUNC_2(VAR_5))
  FUNC_4(VAR_0, "missing support function %d(%u,%u) for index \"%s\"",
    VAR_1, VAR_4, VAR_4,
    FUNC_3(VAR_2));
 VAR_6 = VAR_2->rd_indcollation[0];

 return FUNC_0(FUNC_1(VAR_5, VAR_6, VAR_3));
}
