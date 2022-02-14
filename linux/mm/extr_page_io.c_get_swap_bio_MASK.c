
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_end_io; TYPE_1__ bi_iter; } ;
typedef int gfp_t ;
typedef int bio_end_io_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,struct page*,int,int ) ;
 struct bio* FUNC_1 (int ,int) ;
 int FUNC_2 (struct bio*,struct block_device*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,struct block_device**) ;

__attribute__((used)) static struct bio *FUNC_5(gfp_t VAR_2,
    struct page *VAR_3, bio_end_io_t VAR_4)
{
 struct bio *VAR_5;

 VAR_5 = FUNC_1(VAR_2, 1);
 if (VAR_5) {
  struct block_device *VAR_6;

  VAR_5->bi_iter.bi_sector = FUNC_4(VAR_3, &VAR_6);
  FUNC_2(VAR_5, VAR_6);
  VAR_5->bi_iter.bi_sector <<= VAR_0 - 9;
  VAR_5->bi_end_io = VAR_4;

  FUNC_0(VAR_5, VAR_3, VAR_1 * FUNC_3(VAR_3), 0);
 }
 return VAR_5;
}
