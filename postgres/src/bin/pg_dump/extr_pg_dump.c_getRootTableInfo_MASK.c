
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ispartition; int numParents; struct TYPE_4__** parents; } ;
typedef TYPE_1__ TableInfo ;


 int FUNC_0 (int) ;

__attribute__((used)) static TableInfo *
FUNC_1(TableInfo *VAR_0)
{
 TableInfo *VAR_1;

 FUNC_0(VAR_0->ispartition);
 FUNC_0(VAR_0->numParents == 1);

 VAR_1 = VAR_0->parents[0];
 while (VAR_1->ispartition)
 {
  FUNC_0(VAR_1->numParents == 1);
  VAR_1 = VAR_1->parents[0];
 }

 return VAR_1;
}
