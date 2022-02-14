
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ st_procpid; } ;
typedef TYPE_1__ PgBackendStatus ;
typedef int Datum ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ volatile*) ;
 int FUNC_2 (TYPE_1__ volatile*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, Datum VAR_3)
{
 volatile PgBackendStatus *VAR_4 = VAR_0;







 if (FUNC_0(VAR_1))
  FUNC_3(1);






 FUNC_1(VAR_4);

 VAR_4->st_procpid = 0;

 FUNC_2(VAR_4);
}
