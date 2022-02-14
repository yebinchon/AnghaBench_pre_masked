
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* bts_parent; } ;
typedef TYPE_1__* BTStack ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(BTStack VAR_0)
{
 BTStack VAR_1;

 while (VAR_0 != ((void*)0))
 {
  VAR_1 = VAR_0;
  VAR_0 = VAR_0->bts_parent;
  FUNC_0(VAR_1);
 }
}
