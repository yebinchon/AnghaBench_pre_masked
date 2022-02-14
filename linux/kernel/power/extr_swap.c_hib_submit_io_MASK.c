
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct hib_bio_batch {int count; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {struct hib_bio_batch* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*,struct page*,int,int ) ;
 struct bio* FUNC_2 (int,int) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,unsigned long long) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct bio*) ;
 struct page* FUNC_9 (void*) ;

__attribute__((used)) static int FUNC_10(int VAR_6, int VAR_7, pgoff_t VAR_8, void *VAR_9,
  struct hib_bio_batch *VAR_10)
{
 struct page *VAR_11 = FUNC_9(VAR_9);
 struct bio *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_2(VAR_1 | VAR_3, 1);
 VAR_12->bi_iter.bi_sector = VAR_8 * (VAR_2 >> 9);
 FUNC_4(VAR_12, VAR_5);
 FUNC_5(VAR_12, VAR_6, VAR_7);

 if (FUNC_1(VAR_12, VAR_11, VAR_2, 0) < VAR_2) {
  FUNC_6("Adding page to bio failed at %llu\n",
         (unsigned long long)VAR_12->bi_iter.bi_sector);
  FUNC_3(VAR_12);
  return -VAR_0;
 }

 if (VAR_10) {
  VAR_12->bi_end_io = VAR_4;
  VAR_12->bi_private = VAR_10;
  FUNC_0(&VAR_10->count);
  FUNC_7(VAR_12);
 } else {
  VAR_13 = FUNC_8(VAR_12);
  FUNC_3(VAR_12);
 }

 return VAR_13;
}
