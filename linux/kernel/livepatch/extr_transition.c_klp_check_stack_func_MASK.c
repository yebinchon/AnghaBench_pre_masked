
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_ops {int func_stack; } ;
struct klp_func {unsigned long new_size; unsigned long old_size; scalar_t__ new_func; scalar_t__ old_func; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct klp_ops* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 struct klp_func* FUNC_2 (struct klp_func*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct klp_func *VAR_4, unsigned long *VAR_5,
    unsigned int VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 struct klp_ops *VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_9 = VAR_5[VAR_11];

  if (VAR_2 == VAR_1) {




   VAR_7 = (unsigned long)VAR_4->new_func;
   VAR_8 = VAR_4->new_size;
  } else {




   VAR_10 = FUNC_0(VAR_4->old_func);

   if (FUNC_1(&VAR_10->func_stack)) {

    VAR_7 = (unsigned long)VAR_4->old_func;
    VAR_8 = VAR_4->old_size;
   } else {

    struct klp_func *VAR_12;

    VAR_12 = FUNC_2(VAR_4, VAR_3);
    VAR_7 = (unsigned long)VAR_12->new_func;
    VAR_8 = VAR_12->new_size;
   }
  }

  if (VAR_9 >= VAR_7 && VAR_9 < VAR_7 + VAR_8)
   return -VAR_0;
 }

 return 0;
}
