
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dest_tsoid; int dest_dboid; } ;
typedef TYPE_1__ movedb_failure_params ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, Datum VAR_1)
{
 movedb_failure_params *VAR_2 = (movedb_failure_params *) FUNC_0(VAR_1);
 char *VAR_3;


 VAR_3 = FUNC_1(VAR_2->dest_dboid, VAR_2->dest_tsoid);

 (void) FUNC_2(VAR_3, 1);
}
