
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int bdev; } ;
struct swap_extent {int start_block; scalar_t__ nr_pages; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int ,int ) ;
 int FUNC_1 () ;
 struct swap_extent* FUNC_2 (struct swap_info_struct*) ;
 struct swap_extent* FUNC_3 (struct swap_extent*) ;

__attribute__((used)) static int FUNC_4(struct swap_info_struct *VAR_2)
{
 struct swap_extent *VAR_3;
 sector_t VAR_4;
 sector_t VAR_5;
 int VAR_6 = 0;


 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = (VAR_3->start_block + 1) << (VAR_1 - 9);
 VAR_5 = ((sector_t)VAR_3->nr_pages - 1) << (VAR_1 - 9);
 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_2->bdev, VAR_4,
    VAR_5, VAR_0, 0);
  if (VAR_6)
   return VAR_6;
  FUNC_1();
 }

 for (VAR_3 = FUNC_3(VAR_3); VAR_3; VAR_3 = FUNC_3(VAR_3)) {
  VAR_4 = VAR_3->start_block << (VAR_1 - 9);
  VAR_5 = (sector_t)VAR_3->nr_pages << (VAR_1 - 9);

  VAR_6 = FUNC_0(VAR_2->bdev, VAR_4,
    VAR_5, VAR_0, 0);
  if (VAR_6)
   break;

  FUNC_1();
 }
 return VAR_6;
}
