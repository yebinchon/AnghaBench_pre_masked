
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {struct block_device* bdev; } ;
struct swap_extent {scalar_t__ start_page; scalar_t__ start_block; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ pgoff_t ;


 struct swap_extent* FUNC_0 (struct swap_info_struct*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct swap_info_struct* FUNC_2 (int ) ;

__attribute__((used)) static sector_t FUNC_3(swp_entry_t VAR_0, struct block_device **VAR_1)
{
 struct swap_info_struct *VAR_2;
 struct swap_extent *VAR_3;
 pgoff_t VAR_4;

 VAR_2 = FUNC_2(VAR_0);
 *VAR_1 = VAR_2->bdev;

 VAR_4 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_2, VAR_4);
 return VAR_3->start_block + (VAR_4 - VAR_3->start_page);
}
