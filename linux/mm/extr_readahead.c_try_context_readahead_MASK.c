
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {unsigned long start; int async_size; int size; } ;
struct address_space {int dummy; } ;
typedef unsigned long pgoff_t ;


 unsigned long FUNC_0 (struct address_space*,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct address_space *VAR_0,
     struct file_ra_state *VAR_1,
     pgoff_t VAR_2,
     unsigned long VAR_3,
     unsigned long VAR_4)
{
 pgoff_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_4);





 if (VAR_5 <= VAR_3)
  return 0;





 if (VAR_5 >= VAR_2)
  VAR_5 *= 2;

 VAR_1->start = VAR_2;
 VAR_1->size = FUNC_1(VAR_5 + VAR_3, VAR_4);
 VAR_1->async_size = 1;

 return 1;
}
