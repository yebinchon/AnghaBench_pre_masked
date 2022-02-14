
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {unsigned long ra_pages; unsigned long start; unsigned long size; unsigned long async_size; scalar_t__ prev_pos; } ;
struct file {int dummy; } ;
struct backing_dev_info {unsigned long io_pages; } ;
struct address_space {int host; } ;
typedef unsigned long pgoff_t ;


 unsigned long long VAR_0 ;
 unsigned long FUNC_0 (struct address_space*,struct file*,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 void* FUNC_2 (struct file_ra_state*,unsigned long) ;
 struct backing_dev_info* FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 unsigned long FUNC_5 (struct address_space*,unsigned long,unsigned long) ;
 unsigned long FUNC_6 (struct file_ra_state*,struct address_space*,struct file*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct address_space*,struct file_ra_state*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_10(struct address_space *VAR_1,
     struct file_ra_state *VAR_2, struct file *VAR_3,
     bool VAR_4, pgoff_t VAR_5,
     unsigned long VAR_6)
{
 struct backing_dev_info *VAR_7 = FUNC_3(VAR_1->host);
 unsigned long VAR_8 = VAR_2->ra_pages;
 unsigned long VAR_9;
 pgoff_t VAR_10;





 if (VAR_6 > VAR_8 && VAR_7->io_pages > VAR_8)
  VAR_8 = FUNC_4(VAR_6, VAR_7->io_pages);




 if (!VAR_5)
  goto initial_readahead;





 if ((VAR_5 == (VAR_2->start + VAR_2->size - VAR_2->async_size) ||
      VAR_5 == (VAR_2->start + VAR_2->size))) {
  VAR_2->start += VAR_2->size;
  VAR_2->size = FUNC_2(VAR_2, VAR_8);
  VAR_2->async_size = VAR_2->size;
  goto readit;
 }







 if (VAR_4) {
  pgoff_t VAR_11;

  FUNC_7();
  VAR_11 = FUNC_5(VAR_1, VAR_5 + 1, VAR_8);
  FUNC_8();

  if (!VAR_11 || VAR_11 - VAR_5 > VAR_8)
   return 0;

  VAR_2->start = VAR_11;
  VAR_2->size = VAR_11 - VAR_5;
  VAR_2->size += VAR_6;
  VAR_2->size = FUNC_2(VAR_2, VAR_8);
  VAR_2->async_size = VAR_2->size;
  goto readit;
 }




 if (VAR_6 > VAR_8)
  goto initial_readahead;






 VAR_10 = (unsigned long long)VAR_2->prev_pos >> VAR_0;
 if (VAR_5 - VAR_10 <= 1UL)
  goto initial_readahead;





 if (FUNC_9(VAR_1, VAR_2, VAR_5, VAR_6, VAR_8))
  goto readit;





 return FUNC_0(VAR_1, VAR_3, VAR_5, VAR_6, 0);

initial_readahead:
 VAR_2->start = VAR_5;
 VAR_2->size = FUNC_1(VAR_6, VAR_8);
 VAR_2->async_size = VAR_2->size > VAR_6 ? VAR_2->size - VAR_6 : VAR_2->size;

readit:






 if (VAR_5 == VAR_2->start && VAR_2->size == VAR_2->async_size) {
  VAR_9 = FUNC_2(VAR_2, VAR_8);
  if (VAR_2->size + VAR_9 <= VAR_8) {
   VAR_2->async_size = VAR_9;
   VAR_2->size += VAR_9;
  } else {
   VAR_2->size = VAR_8;
   VAR_2->async_size = VAR_8 >> 1;
  }
 }

 return FUNC_6(VAR_2, VAR_1, VAR_3);
}
