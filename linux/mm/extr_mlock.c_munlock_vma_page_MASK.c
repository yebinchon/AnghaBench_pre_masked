
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {int lru_lock; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,struct page*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct page*,int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 TYPE_1__* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

unsigned int FUNC_14(struct page *VAR_1)
{
 int VAR_2;
 pg_data_t *VAR_3 = FUNC_10(VAR_1);


 FUNC_0(!FUNC_1(VAR_1));

 FUNC_4(FUNC_2(VAR_1), VAR_1);






 FUNC_12(&VAR_3->lru_lock);

 if (!FUNC_3(VAR_1)) {

  VAR_2 = 1;
  goto unlock_out;
 }

 VAR_2 = FUNC_9(VAR_1);
 FUNC_5(FUNC_11(VAR_1), VAR_0, -VAR_2);

 if (FUNC_6(VAR_1, 1)) {
  FUNC_13(&VAR_3->lru_lock);
  FUNC_7(VAR_1);
  goto out;
 }
 FUNC_8(VAR_1);

unlock_out:
 FUNC_13(&VAR_3->lru_lock);

out:
 return VAR_2 - 1;
}
