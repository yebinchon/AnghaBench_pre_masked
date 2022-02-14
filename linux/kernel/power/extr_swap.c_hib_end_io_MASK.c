
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct hib_bio_batch {int wait; int count; scalar_t__ error; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {scalar_t__ bi_status; TYPE_1__ bi_iter; struct hib_bio_batch* bi_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 struct page* FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (char*,int ,int ,unsigned long long) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct bio *VAR_3)
{
 struct hib_bio_batch *VAR_4 = VAR_3->bi_private;
 struct page *VAR_5 = FUNC_5(VAR_3);

 if (VAR_3->bi_status) {
  FUNC_9("Read-error on swap-device (%u:%u:%Lu)\n",
    FUNC_0(FUNC_4(VAR_3)), FUNC_1(FUNC_4(VAR_3)),
    (unsigned long long)VAR_3->bi_iter.bi_sector);
 }

 if (FUNC_3(VAR_3) == VAR_1)
  FUNC_10(VAR_5);
 else if (VAR_2)
  FUNC_7((unsigned long)FUNC_8(VAR_5),
       (unsigned long)FUNC_8(VAR_5) + VAR_0);

 if (VAR_3->bi_status && !VAR_4->error)
  VAR_4->error = VAR_3->bi_status;
 if (FUNC_2(&VAR_4->count))
  FUNC_11(&VAR_4->wait);

 FUNC_6(VAR_3);
}
