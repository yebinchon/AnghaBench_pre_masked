
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* orderByData; struct TYPE_4__* keyData; } ;
typedef TYPE_1__* IndexScanDesc ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(IndexScanDesc VAR_0)
{
 if (VAR_0->keyData != ((void*)0))
  FUNC_0(VAR_0->keyData);
 if (VAR_0->orderByData != ((void*)0))
  FUNC_0(VAR_0->orderByData);

 FUNC_0(VAR_0);
}
