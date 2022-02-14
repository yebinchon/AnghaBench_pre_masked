
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
struct detached_freelist {int cnt; int tail; int freelist; int page; int s; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (struct kmem_cache*,size_t,void**,struct detached_freelist*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;

void FUNC_4(struct kmem_cache *VAR_1, size_t VAR_2, void **VAR_3)
{
 if (FUNC_0(!VAR_2))
  return;

 do {
  struct detached_freelist VAR_4;

  VAR_2 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4);
  if (!VAR_4.page)
   continue;

  FUNC_3(VAR_4.s, VAR_4.page, VAR_4.freelist, VAR_4.tail, VAR_4.cnt,VAR_0);
 } while (FUNC_2(VAR_2));
}
