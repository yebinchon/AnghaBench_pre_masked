
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; scalar_t__ bi_status; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct bio*) ;
 struct page* FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (char*,int ,int ,unsigned long long) ;
 int FUNC_9 (struct page*) ;

void FUNC_10(struct bio *VAR_0)
{
 struct page *VAR_1 = FUNC_5(VAR_0);

 if (VAR_0->bi_status) {
  FUNC_3(VAR_1);
  FUNC_9(VAR_1);
  FUNC_8("Write-error on swap-device (%u:%u:%llu)\n",
    FUNC_1(FUNC_4(VAR_0)), FUNC_2(FUNC_4(VAR_0)),
    (unsigned long long)VAR_0->bi_iter.bi_sector);
  FUNC_0(VAR_1);
 }
 FUNC_7(VAR_1);
 FUNC_6(VAR_0);
}
