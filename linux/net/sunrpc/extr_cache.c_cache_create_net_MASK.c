
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct hlist_head {int dummy; } ;
struct cache_detail {int hash_size; struct net* net; int * hash_table; } ;


 int VAR_0 ;
 struct cache_detail* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct cache_detail*) ;
 struct cache_detail* FUNC_4 (struct cache_detail const*,int,int ) ;

struct cache_detail *FUNC_5(const struct cache_detail *VAR_2, struct net *VAR_3)
{
 struct cache_detail *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_2, sizeof(struct cache_detail), VAR_1);
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_4->hash_table = FUNC_2(VAR_4->hash_size, sizeof(struct hlist_head),
     VAR_1);
 if (VAR_4->hash_table == ((void*)0)) {
  FUNC_3(VAR_4);
  return FUNC_0(-VAR_0);
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->hash_size; VAR_5++)
  FUNC_1(&VAR_4->hash_table[VAR_5]);
 VAR_4->net = VAR_3;
 return VAR_4;
}
