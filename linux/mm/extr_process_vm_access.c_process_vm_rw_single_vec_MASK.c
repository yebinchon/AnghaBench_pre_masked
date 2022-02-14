
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pages {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct task_struct*,struct mm_struct*,unsigned long,int,unsigned int,struct page**,int *,int*) ;
 scalar_t__ FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (struct page**,unsigned long,size_t,struct iov_iter*,int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_5,
        unsigned long VAR_6,
        struct iov_iter *VAR_7,
        struct page **VAR_8,
        struct mm_struct *VAR_9,
        struct task_struct *VAR_10,
        int VAR_11)
{
 unsigned long VAR_12 = VAR_5 & VAR_2;
 unsigned long VAR_13 = VAR_5 - VAR_12;
 unsigned long VAR_14;
 ssize_t VAR_15 = 0;
 unsigned long VAR_16 = VAR_4
  / sizeof(struct pages *);
 unsigned int VAR_17 = 0;


 if (VAR_6 == 0)
  return 0;
 VAR_14 = (VAR_5 + VAR_6 - 1) / VAR_3 - VAR_5 / VAR_3 + 1;

 if (VAR_11)
  VAR_17 |= VAR_1;

 while (!VAR_15 && VAR_14 && FUNC_2(VAR_7)) {
  int VAR_18 = FUNC_3(VAR_14, VAR_16);
  int VAR_19 = 1;
  size_t VAR_20;






  FUNC_0(&VAR_9->mmap_sem);
  VAR_18 = FUNC_1(VAR_10, VAR_9, VAR_12, VAR_18, VAR_17,
           VAR_8, ((void*)0), &VAR_19);
  if (VAR_19)
   FUNC_6(&VAR_9->mmap_sem);
  if (VAR_18 <= 0)
   return -VAR_0;

  VAR_20 = VAR_18 * VAR_3 - VAR_13;
  if (VAR_20 > VAR_6)
   VAR_20 = VAR_6;

  VAR_15 = FUNC_4(VAR_8,
      VAR_13, VAR_20, VAR_7,
      VAR_11);
  VAR_6 -= VAR_20;
  VAR_13 = 0;
  VAR_14 -= VAR_18;
  VAR_12 += VAR_18 * VAR_3;
  while (VAR_18)
   FUNC_5(VAR_8[--VAR_18]);
 }

 return VAR_15;
}
