
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pronargs; } ;
typedef int List ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static List *
FUNC_6(List *VAR_1, HeapTuple VAR_2)
{
 Form_pg_proc VAR_3 = (Form_pg_proc) FUNC_0(VAR_2);
 int VAR_4 = FUNC_5(VAR_1);
 List *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_2(VAR_2);


 VAR_6 = VAR_4 + FUNC_5(VAR_5) - VAR_3->pronargs;
 if (VAR_6 < 0)
  FUNC_1(VAR_0, "not enough default arguments");
 if (VAR_6 > 0)
  VAR_5 = FUNC_4(VAR_5, VAR_6);


 return FUNC_3(VAR_1, VAR_5);
}
