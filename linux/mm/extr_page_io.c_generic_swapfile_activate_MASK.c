
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {unsigned long max; unsigned long pages; unsigned long highest_bit; } ;
struct inode {unsigned int i_blkbits; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int sector_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct swap_info_struct*,unsigned long,int,unsigned int) ;
 unsigned int FUNC_1 (struct inode*,unsigned int) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (struct inode*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct swap_info_struct *VAR_3,
    struct file *VAR_4,
    sector_t *VAR_5)
{
 struct address_space *VAR_6 = VAR_4->f_mapping;
 struct inode *VAR_7 = VAR_6->host;
 unsigned VAR_8;
 unsigned long VAR_9;
 unsigned VAR_10;
 sector_t VAR_11;
 sector_t VAR_12;
 sector_t VAR_13 = -1;
 sector_t VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;

 VAR_10 = VAR_7->i_blkbits;
 VAR_8 = VAR_2 >> VAR_10;





 VAR_11 = 0;
 VAR_9 = 0;
 VAR_12 = FUNC_3(VAR_7) >> VAR_10;
 while ((VAR_11 + VAR_8) <= VAR_12 &&
   VAR_9 < VAR_3->max) {
  unsigned VAR_17;
  sector_t VAR_18;

  FUNC_2();

  VAR_18 = FUNC_1(VAR_7, VAR_11);
  if (VAR_18 == 0)
   goto bad_bmap;




  if (VAR_18 & (VAR_8 - 1)) {
   VAR_11++;
   goto reprobe;
  }

  for (VAR_17 = 1; VAR_17 < VAR_8;
     VAR_17++) {
   sector_t VAR_19;

   VAR_19 = FUNC_1(VAR_7, VAR_11 + VAR_17);
   if (VAR_19 == 0)
    goto bad_bmap;
   if (VAR_19 != VAR_18 + VAR_17) {

    VAR_11++;
    goto reprobe;
   }
  }

  VAR_18 >>= (VAR_1 - VAR_10);
  if (VAR_9) {
   if (VAR_18 < VAR_13)
    VAR_13 = VAR_18;
   if (VAR_18 > VAR_14)
    VAR_14 = VAR_18;
  }




  VAR_16 = FUNC_0(VAR_3, VAR_9, 1, VAR_18);
  if (VAR_16 < 0)
   goto out;
  VAR_15 += VAR_16;
  VAR_9++;
  VAR_11 += VAR_8;
reprobe:
  continue;
 }
 VAR_16 = VAR_15;
 *VAR_5 = 1 + VAR_14 - VAR_13;
 if (VAR_9 == 0)
  VAR_9 = 1;
 VAR_3->max = VAR_9;
 VAR_3->pages = VAR_9 - 1;
 VAR_3->highest_bit = VAR_9 - 1;
out:
 return VAR_16;
bad_bmap:
 FUNC_4("swapon: swapfile has holes\n");
 VAR_16 = -VAR_0;
 goto out;
}
