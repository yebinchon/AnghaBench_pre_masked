
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dump; } ;
struct TYPE_6__ {char relkind; TYPE_1__ dobj; } ;
typedef TYPE_2__ TableInfo ;
typedef int DumpOptions ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(DumpOptions *VAR_1, TableInfo *VAR_2, int VAR_3, char VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
 {
  if (VAR_2[VAR_5].dobj.dump & VAR_0 &&
   (!VAR_4 || VAR_2[VAR_5].relkind == VAR_4))
   FUNC_0(VAR_1, &(VAR_2[VAR_5]));
 }
}
