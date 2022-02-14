
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rd_pkindex; int rd_indexvalid; } ;
typedef TYPE_1__* Relation ;
typedef int Oid ;
typedef int List ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

Oid
FUNC_3(Relation VAR_0)
{
 List *VAR_1;

 if (!VAR_0->rd_indexvalid)
 {

  VAR_1 = FUNC_1(VAR_0);
  FUNC_2(VAR_1);
  FUNC_0(VAR_0->rd_indexvalid);
 }

 return VAR_0->rd_pkindex;
}
