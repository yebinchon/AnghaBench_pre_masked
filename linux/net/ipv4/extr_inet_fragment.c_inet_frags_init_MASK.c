
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_frags {int completion; int refcnt; int frags_cachep; int qsize; int frags_cache_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct inet_frags *VAR_1)
{
 VAR_1->frags_cachep = FUNC_1(VAR_1->frags_cache_name, VAR_1->qsize, 0, 0,
         ((void*)0));
 if (!VAR_1->frags_cachep)
  return -VAR_0;

 FUNC_2(&VAR_1->refcnt, 1);
 FUNC_0(&VAR_1->completion);
 return 0;
}
