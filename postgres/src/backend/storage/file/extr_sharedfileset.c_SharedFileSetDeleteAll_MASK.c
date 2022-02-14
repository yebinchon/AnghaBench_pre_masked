
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ntablespaces; int * tablespaces; } ;
typedef TYPE_1__ SharedFileSet ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;

void
FUNC_2(SharedFileSet *VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3;






 for (VAR_3 = 0; VAR_3 < VAR_1->ntablespaces; ++VAR_3)
 {
  FUNC_1(VAR_2, VAR_1, VAR_1->tablespaces[VAR_3]);
  FUNC_0(VAR_2);
 }
}
