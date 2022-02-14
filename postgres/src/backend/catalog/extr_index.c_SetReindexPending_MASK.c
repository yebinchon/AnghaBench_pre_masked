
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(List *VAR_2)
{

 if (VAR_1)
  FUNC_1(VAR_0, "cannot reindex while reindexing");
 if (FUNC_0())
  FUNC_1(VAR_0, "cannot modify reindex state during a parallel operation");
 VAR_1 = FUNC_2(VAR_2);
}
