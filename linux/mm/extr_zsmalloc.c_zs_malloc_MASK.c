
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {int dummy; } ;
struct zs_pool {int pages_allocated; struct size_class** size_class; } ;
struct size_class {int lock; int objs_per_zspage; int pages_per_zspage; int index; } ;
typedef int gfp_t ;
typedef enum fullness_group { ____Placeholder_fullness_group } fullness_group ;


 int VAR_0 ;
 int FUNC_0 (struct zs_pool*,struct zspage*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 struct zspage* FUNC_1 (struct zs_pool*,struct size_class*,int ) ;
 int FUNC_2 (int ,int *) ;
 unsigned long FUNC_3 (struct zs_pool*,int ) ;
 int FUNC_4 (struct zs_pool*,unsigned long) ;
 struct zspage* FUNC_5 (struct size_class*) ;
 int FUNC_6 (struct size_class*,struct zspage*) ;
 int FUNC_7 (struct size_class*,struct zspage*) ;
 size_t FUNC_8 (size_t) ;
 int FUNC_9 (struct size_class*,struct zspage*,int) ;
 scalar_t__ FUNC_10 (struct zspage*) ;
 unsigned long FUNC_11 (struct size_class*,struct zspage*,unsigned long) ;
 int FUNC_12 (unsigned long,unsigned long) ;
 int FUNC_13 (struct zspage*,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (struct size_class*,int ,int ) ;

unsigned long FUNC_18(struct zs_pool *VAR_3, size_t VAR_4, gfp_t VAR_5)
{
 unsigned long VAR_6, VAR_7;
 struct size_class *VAR_8;
 enum fullness_group VAR_9;
 struct zspage *VAR_10;

 if (FUNC_16(!VAR_4 || VAR_4 > VAR_2))
  return 0;

 VAR_6 = FUNC_3(VAR_3, VAR_5);
 if (!VAR_6)
  return 0;


 VAR_4 += VAR_1;
 VAR_8 = VAR_3->size_class[FUNC_8(VAR_4)];

 FUNC_14(&VAR_8->lock);
 VAR_10 = FUNC_5(VAR_8);
 if (FUNC_10(VAR_10)) {
  VAR_7 = FUNC_11(VAR_8, VAR_10, VAR_6);

  FUNC_6(VAR_8, VAR_10);
  FUNC_12(VAR_6, VAR_7);
  FUNC_15(&VAR_8->lock);

  return VAR_6;
 }

 FUNC_15(&VAR_8->lock);

 VAR_10 = FUNC_1(VAR_3, VAR_8, VAR_5);
 if (!VAR_10) {
  FUNC_4(VAR_3, VAR_6);
  return 0;
 }

 FUNC_14(&VAR_8->lock);
 VAR_7 = FUNC_11(VAR_8, VAR_10, VAR_6);
 VAR_9 = FUNC_7(VAR_8, VAR_10);
 FUNC_9(VAR_8, VAR_10, VAR_9);
 FUNC_13(VAR_10, VAR_8->index, VAR_9);
 FUNC_12(VAR_6, VAR_7);
 FUNC_2(VAR_8->pages_per_zspage,
    &VAR_3->pages_allocated);
 FUNC_17(VAR_8, VAR_0, VAR_8->objs_per_zspage);


 FUNC_0(VAR_3, VAR_10);
 FUNC_15(&VAR_8->lock);

 return VAR_6;
}
