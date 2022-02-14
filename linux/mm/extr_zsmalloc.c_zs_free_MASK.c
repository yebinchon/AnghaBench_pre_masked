
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {int dummy; } ;
struct zs_pool {struct size_class** size_class; } ;
struct size_class {int lock; } ;
struct page {int dummy; } ;
typedef enum fullness_group { ____Placeholder_fullness_group } fullness_group ;


 int VAR_0 ;
 int FUNC_0 (struct zs_pool*,unsigned long) ;
 int FUNC_1 (struct size_class*,struct zspage*) ;
 int FUNC_2 (struct zs_pool*,struct size_class*,struct zspage*) ;
 struct zspage* FUNC_3 (struct page*) ;
 int FUNC_4 (struct zspage*,int*,int*) ;
 unsigned long FUNC_5 (unsigned long) ;
 int FUNC_6 (struct zspage*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct zspage*) ;
 int FUNC_9 (struct zspage*) ;
 int FUNC_10 (struct size_class*,unsigned long) ;
 int FUNC_11 (unsigned long,struct page**,unsigned int*) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (unsigned long) ;

void FUNC_17(struct zs_pool *VAR_1, unsigned long VAR_2)
{
 struct zspage *VAR_3;
 struct page *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;
 int VAR_7;
 struct size_class *VAR_8;
 enum fullness_group VAR_9;
 bool VAR_10;

 if (FUNC_15(!VAR_2))
  return;

 FUNC_12(VAR_2);
 VAR_5 = FUNC_5(VAR_2);
 FUNC_11(VAR_5, &VAR_4, &VAR_6);
 VAR_3 = FUNC_3(VAR_4);

 FUNC_8(VAR_3);

 FUNC_4(VAR_3, &VAR_7, &VAR_9);
 VAR_8 = VAR_1->size_class[VAR_7];

 FUNC_13(&VAR_8->lock);
 FUNC_10(VAR_8, VAR_5);
 VAR_9 = FUNC_1(VAR_8, VAR_3);
 if (VAR_9 != VAR_0) {
  FUNC_9(VAR_3);
  goto out;
 }

 VAR_10 = FUNC_6(VAR_3);
 FUNC_9(VAR_3);

 if (FUNC_7(!VAR_10))
  FUNC_2(VAR_1, VAR_8, VAR_3);
out:

 FUNC_14(&VAR_8->lock);
 FUNC_16(VAR_2);
 FUNC_0(VAR_1, VAR_2);
}
