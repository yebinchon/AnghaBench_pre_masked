
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dest_dboid; int src_dboid; } ;
typedef TYPE_1__ createdb_failure_params ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, Datum VAR_3)
{
 createdb_failure_params *VAR_4 = (createdb_failure_params *) FUNC_0(VAR_3);






 FUNC_1(VAR_0, VAR_4->src_dboid, 0, VAR_1);


 FUNC_2(VAR_4->dest_dboid);
}
