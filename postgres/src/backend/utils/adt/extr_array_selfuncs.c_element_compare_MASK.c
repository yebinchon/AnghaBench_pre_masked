
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typcollation; int cmp_proc_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int FmgrInfo ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 Datum VAR_3 = *((const Datum *) VAR_0);
 Datum VAR_4 = *((const Datum *) VAR_1);
 TypeCacheEntry *VAR_5 = (TypeCacheEntry *) VAR_2;
 FmgrInfo *VAR_6 = &VAR_5->cmp_proc_finfo;
 Datum VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_5->typcollation, VAR_3, VAR_4);
 return FUNC_0(VAR_7);
}
