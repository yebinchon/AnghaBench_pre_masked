
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct page {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef size_t loff_t ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_5, struct kobject *VAR_6,
         struct bin_attribute *VAR_7, char *VAR_8,
         loff_t VAR_9, size_t VAR_10)
{
 u64 *VAR_11 = (u64 *)VAR_8;
 struct page *VAR_12;
 unsigned long VAR_13, VAR_14;
 int VAR_15;

 if (VAR_9 % VAR_1 || VAR_10 % VAR_1)
  return -VAR_3;

 VAR_13 = VAR_9 * VAR_2;
 if (VAR_13 >= VAR_4)
  return 0;

 VAR_14 = VAR_13 + VAR_10 * VAR_2;
 if (VAR_14 > VAR_4)
  VAR_14 = VAR_4;

 for (; VAR_13 < VAR_14; VAR_13++) {
  VAR_15 = VAR_13 % VAR_0;
  if (!VAR_15)
   *VAR_11 = 0ULL;
  VAR_12 = FUNC_2(VAR_13);
  if (VAR_12) {
   if (FUNC_3(VAR_12)) {





    FUNC_1(VAR_12);
    if (FUNC_3(VAR_12))
     *VAR_11 |= 1ULL << VAR_15;
   }
   FUNC_4(VAR_12);
  }
  if (VAR_15 == VAR_0 - 1)
   VAR_11++;
  FUNC_0();
 }
 return (char *)VAR_11 - VAR_8;
}
