
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tupdesc; } ;
typedef TYPE_1__ RecordCacheEntry ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 RecordCacheEntry *VAR_3 = (RecordCacheEntry *) VAR_0;
 RecordCacheEntry *VAR_4 = (RecordCacheEntry *) VAR_1;

 return FUNC_0(VAR_3->tupdesc, VAR_4->tupdesc) ? 0 : 1;
}
