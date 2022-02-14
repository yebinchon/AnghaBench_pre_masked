
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int Record; int CacheLink; } ;
typedef TYPE_1__* PRESOLVER_CACHE_ENTRY ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;

VOID
FUNC_5(PRESOLVER_CACHE_ENTRY VAR_1)
{
    FUNC_0("DnsIntCacheRemoveEntryItem %p\n", VAR_1);


    FUNC_4(&VAR_1->CacheLink);


    FUNC_1(VAR_1->Record, VAR_0);


    FUNC_3(FUNC_2(), 0, VAR_1);
}
