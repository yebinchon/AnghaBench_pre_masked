
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct auxtrace_cache_entry {int hash; int key; } ;
struct auxtrace_cache {scalar_t__ limit; scalar_t__ cnt; int bits; int * hashtable; } ;


 int FUNC_0 (struct auxtrace_cache*) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct auxtrace_cache *VAR_0, u32 VAR_1,
   struct auxtrace_cache_entry *VAR_2)
{
 if (VAR_0->limit && ++VAR_0->cnt > VAR_0->limit)
  FUNC_0(VAR_0);

 VAR_2->key = VAR_1;
 FUNC_2(&VAR_2->hash, &VAR_0->hashtable[FUNC_1(VAR_1, VAR_0->bits)]);

 return 0;
}
