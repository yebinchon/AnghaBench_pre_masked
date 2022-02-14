
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
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
 int VAR_4 ;
 int FUNC_0 () ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (unsigned long) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static ssize_t FUNC_5(struct file *VAR_6, struct kobject *VAR_7,
          struct bin_attribute *VAR_8, char *VAR_9,
          loff_t VAR_10, size_t VAR_11)
{
 const u64 *VAR_12 = (u64 *)VAR_9;
 struct page *VAR_13;
 unsigned long VAR_14, VAR_15;
 int VAR_16;

 if (VAR_10 % VAR_1 || VAR_11 % VAR_1)
  return -VAR_3;

 VAR_14 = VAR_10 * VAR_2;
 if (VAR_14 >= VAR_5)
  return -VAR_4;

 VAR_15 = VAR_14 + VAR_11 * VAR_2;
 if (VAR_15 > VAR_5)
  VAR_15 = VAR_5;

 for (; VAR_14 < VAR_15; VAR_14++) {
  VAR_16 = VAR_14 % VAR_0;
  if ((*VAR_12 >> VAR_16) & 1) {
   VAR_13 = FUNC_2(VAR_14);
   if (VAR_13) {
    FUNC_1(VAR_13);
    FUNC_4(VAR_13);
    FUNC_3(VAR_13);
   }
  }
  if (VAR_16 == VAR_0 - 1)
   VAR_12++;
  FUNC_0();
 }
 return (char *)VAR_12 - VAR_9;
}
