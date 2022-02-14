
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int bdev; } ;
struct swap_extent {int start_page; int start_block; int nr_pages; } ;
typedef int sector_t ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int,int ,int ) ;
 struct swap_extent* FUNC_1 (struct swap_extent*) ;
 struct swap_extent* FUNC_2 (struct swap_info_struct*,int) ;

__attribute__((used)) static void FUNC_3(struct swap_info_struct *VAR_2,
     pgoff_t VAR_3, pgoff_t VAR_4)
{
 struct swap_extent *VAR_5 = FUNC_2(VAR_2, VAR_3);

 while (VAR_4) {
  pgoff_t VAR_6 = VAR_3 - VAR_5->start_page;
  sector_t VAR_7 = VAR_5->start_block + VAR_6;
  sector_t VAR_8 = VAR_5->nr_pages - VAR_6;

  if (VAR_8 > VAR_4)
   VAR_8 = VAR_4;
  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;

  VAR_7 <<= VAR_1 - 9;
  VAR_8 <<= VAR_1 - 9;
  if (FUNC_0(VAR_2->bdev, VAR_7,
     VAR_8, VAR_0, 0))
   break;

  VAR_5 = FUNC_1(VAR_5);
 }
}
