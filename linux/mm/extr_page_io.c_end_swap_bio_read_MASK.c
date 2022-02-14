
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {struct task_struct* bi_private; TYPE_1__ bi_iter; scalar_t__ bi_status; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct task_struct*,int *) ;
 int FUNC_6 (struct bio*) ;
 struct page* FUNC_7 (struct bio*) ;
 int FUNC_8 (struct bio*) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (char*,int ,int ,unsigned long long) ;
 int FUNC_11 (struct task_struct*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static void FUNC_14(struct bio *VAR_0)
{
 struct page *VAR_1 = FUNC_7(VAR_0);
 struct task_struct *VAR_2 = VAR_0->bi_private;

 if (VAR_0->bi_status) {
  FUNC_3(VAR_1);
  FUNC_0(VAR_1);
  FUNC_10("Read-error on swap-device (%u:%u:%llu)\n",
    FUNC_1(FUNC_6(VAR_0)), FUNC_2(FUNC_6(VAR_0)),
    (unsigned long long)VAR_0->bi_iter.bi_sector);
  goto out;
 }

 FUNC_4(VAR_1);
 FUNC_12(VAR_1);
out:
 FUNC_13(VAR_1);
 FUNC_5(VAR_0->bi_private, ((void*)0));
 FUNC_8(VAR_0);
 if (VAR_2) {
  FUNC_9(VAR_2);
  FUNC_11(VAR_2);
 }
}
