
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * domainData; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int Oid ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;

bool
FUNC_1(Oid VAR_1)
{
 TypeCacheEntry *VAR_2;





 VAR_2 = FUNC_0(VAR_1, VAR_0);

 return (VAR_2->domainData != ((void*)0));
}
