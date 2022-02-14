
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_pool {struct size_class** size_class; int migration_wait; int name; } ;
struct size_class {int size; int index; int pages_per_zspage; int objs_per_zspage; int * fullness_list; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct size_class*,int,int) ;
 scalar_t__ FUNC_2 (struct zs_pool*) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (struct zs_pool*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int ) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct zs_pool*) ;
 int FUNC_10 (struct zs_pool*,char const*) ;
 scalar_t__ FUNC_11 (struct zs_pool*) ;
 int FUNC_12 (struct zs_pool*) ;

struct zs_pool *FUNC_13(const char *VAR_10)
{
 int VAR_11;
 struct zs_pool *VAR_12;
 struct size_class *VAR_13 = ((void*)0);

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);

 FUNC_4(VAR_12);

 VAR_12->name = FUNC_6(VAR_10, VAR_0);
 if (!VAR_12->name)
  goto err;





 if (FUNC_2(VAR_12))
  goto err;





 for (VAR_11 = VAR_7 - 1; VAR_11 >= 0; VAR_11--) {
  int VAR_14;
  int VAR_15;
  int VAR_16;
  struct size_class *VAR_17;
  int VAR_18 = 0;

  VAR_14 = VAR_6 + VAR_11 * VAR_8;
  if (VAR_14 > VAR_5)
   VAR_14 = VAR_5;
  VAR_15 = FUNC_3(VAR_14);
  VAR_16 = VAR_15 * VAR_2 / VAR_14;







  if (VAR_15 != 1 && VAR_16 != 1 &&
    !VAR_9) {
   VAR_9 = VAR_14;
   VAR_9 -= (VAR_4 - 1);
  }
  if (VAR_13) {
   if (FUNC_1(VAR_13, VAR_15, VAR_16)) {
    VAR_12->size_class[VAR_11] = VAR_13;
    continue;
   }
  }

  VAR_17 = FUNC_7(sizeof(struct size_class), VAR_0);
  if (!VAR_17)
   goto err;

  VAR_17->size = VAR_14;
  VAR_17->index = VAR_11;
  VAR_17->pages_per_zspage = VAR_15;
  VAR_17->objs_per_zspage = VAR_16;
  FUNC_8(&VAR_17->lock);
  VAR_12->size_class[VAR_11] = VAR_17;
  for (VAR_18 = VAR_3; VAR_18 < VAR_1;
       VAR_18++)
   FUNC_0(&VAR_17->fullness_list[VAR_18]);

  VAR_13 = VAR_17;
 }


 FUNC_10(VAR_12, VAR_10);

 if (FUNC_11(VAR_12))
  goto err;







 FUNC_12(VAR_12);

 return VAR_12;

err:
 FUNC_9(VAR_12);
 return ((void*)0);
}
