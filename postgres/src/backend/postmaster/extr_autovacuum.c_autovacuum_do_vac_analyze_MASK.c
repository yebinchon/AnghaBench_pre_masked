
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int at_params; int at_relid; int at_relname; int at_nspname; } ;
typedef TYPE_1__ autovac_table ;
typedef int VacuumRelation ;
typedef int RangeVar ;
typedef int List ;
typedef int BufferAccessStrategy ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int) ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int *,int ,int) ;

__attribute__((used)) static void
FUNC_5(autovac_table *VAR_1, BufferAccessStrategy VAR_2)
{
 RangeVar *VAR_3;
 VacuumRelation *VAR_4;
 List *VAR_5;


 FUNC_0(VAR_1);


 VAR_3 = FUNC_2(VAR_1->at_nspname, VAR_1->at_relname, -1);
 VAR_4 = FUNC_3(VAR_3, VAR_1->at_relid, VAR_0);
 VAR_5 = FUNC_1(VAR_4);

 FUNC_4(VAR_5, &VAR_1->at_params, VAR_2, 1);
}
