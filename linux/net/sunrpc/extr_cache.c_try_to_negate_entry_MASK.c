
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_head {int flags; } ;
struct cache_detail {int hash_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cache_head*,scalar_t__,struct cache_detail*) ;
 int FUNC_1 (struct cache_head*,struct cache_detail*) ;
 int FUNC_2 (struct cache_head*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct cache_detail *VAR_4, struct cache_head *VAR_5)
{
 int VAR_6;

 FUNC_5(&VAR_4->hash_lock);
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 == -VAR_2) {
  FUNC_4(VAR_0, &VAR_5->flags);
  FUNC_0(VAR_5, FUNC_3()+VAR_1,
       VAR_4);
  VAR_6 = -VAR_3;
 }
 FUNC_6(&VAR_4->hash_lock);
 FUNC_1(VAR_5, VAR_4);
 return VAR_6;
}
