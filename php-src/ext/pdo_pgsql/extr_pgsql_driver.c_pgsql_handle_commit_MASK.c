
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int in_txn; } ;
typedef TYPE_1__ pdo_dbh_t ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_0)
{
 int VAR_1 = FUNC_0("COMMIT", VAR_0);



 if (!VAR_1) {
  VAR_0->in_txn = FUNC_1(VAR_0);
 }

 return VAR_1;
}
