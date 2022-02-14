
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int dummy; } ;
struct rhash_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void* FUNC_3 (struct rhashtable*,void const*,struct rhash_head*) ;

void *FUNC_4(struct rhashtable *VAR_1, const void *VAR_2,
        struct rhash_head *VAR_3)
{
 void *VAR_4;

 do {
  FUNC_1();
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  FUNC_2();
 } while (FUNC_0(VAR_4) == -VAR_0);

 return VAR_4;
}
