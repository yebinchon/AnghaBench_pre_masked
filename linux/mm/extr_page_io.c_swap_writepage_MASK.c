
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*,struct writeback_control*,int ) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

int FUNC_6(struct page *VAR_1, struct writeback_control *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_4(VAR_1)) {
  FUNC_5(VAR_1);
  goto out;
 }
 if (FUNC_2(VAR_1) == 0) {
  FUNC_3(VAR_1);
  FUNC_5(VAR_1);
  FUNC_1(VAR_1);
  goto out;
 }
 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
out:
 return VAR_3;
}
