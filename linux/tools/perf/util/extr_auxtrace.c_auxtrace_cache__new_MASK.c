
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct auxtrace_cache {size_t sz; size_t entry_size; unsigned int limit; unsigned int bits; struct hlist_head* hashtable; } ;


 int FUNC_0 (struct hlist_head*) ;
 struct hlist_head* FUNC_1 (size_t,int) ;
 int FUNC_2 (struct auxtrace_cache*) ;
 struct auxtrace_cache* FUNC_3 (int) ;

struct auxtrace_cache *FUNC_4(unsigned int VAR_0, size_t VAR_1,
        unsigned int VAR_2)
{
 struct auxtrace_cache *VAR_3;
 struct hlist_head *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_3 = FUNC_3(sizeof(struct auxtrace_cache));
 if (!VAR_3)
  return ((void*)0);

 VAR_5 = 1UL << VAR_0;

 VAR_4 = FUNC_1(VAR_5, sizeof(struct hlist_head));
 if (!VAR_4)
  goto out_free;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_0(&VAR_4[VAR_6]);

 VAR_3->hashtable = VAR_4;
 VAR_3->sz = VAR_5;
 VAR_3->entry_size = VAR_1;
 VAR_3->limit = (VAR_3->sz * VAR_2) / 100;
 VAR_3->bits = VAR_0;

 return VAR_3;

out_free:
 FUNC_2(VAR_3);
 return ((void*)0);
}
