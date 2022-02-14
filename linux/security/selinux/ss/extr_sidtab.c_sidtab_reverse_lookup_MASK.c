
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sidtab_convert_params {int (* func ) (struct context*,struct context*,int ) ;struct sidtab* target; int args; } ;
struct sidtab {size_t count; int lock; struct sidtab_convert_params* convert; int * roots; } ;
struct context {int str; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct context*,struct context*) ;
 int FUNC_1 (struct context*,struct context*) ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (char*,int ) ;
 struct context* FUNC_4 (struct sidtab*,size_t,int) ;
 int FUNC_5 (int ,size_t*,size_t,size_t,struct context*,size_t*) ;
 size_t FUNC_6 (size_t) ;
 int FUNC_7 (struct sidtab*,size_t) ;
 int FUNC_8 (struct sidtab*,struct context*,size_t*) ;
 size_t FUNC_9 (size_t*) ;
 int FUNC_10 (size_t*,size_t) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct context*,struct context*,int ) ;

__attribute__((used)) static int FUNC_14(struct sidtab *VAR_3, struct context *VAR_4,
     u32 *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 struct sidtab_convert_params *VAR_11;
 struct context *VAR_12, *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_8(VAR_3, VAR_4, VAR_5);
 if (VAR_14 == 0)
  return 0;


 VAR_7 = FUNC_9(&VAR_3->count);
 VAR_9 = FUNC_6(VAR_7);

 VAR_10 = 0;
 VAR_14 = FUNC_5(VAR_3->roots[VAR_9], &VAR_10, VAR_7, VAR_9,
     VAR_4, VAR_5);
 if (VAR_14 == 0) {
  FUNC_7(VAR_3, *VAR_5);
  return 0;
 }


 FUNC_11(&VAR_3->lock, VAR_6);

 VAR_11 = VAR_3->convert;
 VAR_8 = VAR_3->count;
 VAR_9 = FUNC_6(VAR_8);


 while (VAR_7 < VAR_8) {
  if (FUNC_0(FUNC_4(VAR_3, VAR_7, 0), VAR_4)) {
   FUNC_7(VAR_3, VAR_7);
   *VAR_5 = VAR_7;
   VAR_14 = 0;
   goto out_unlock;
  }
  ++VAR_7;
 }


 VAR_14 = -VAR_1;
 if (VAR_7 >= VAR_2)
  goto out_unlock;


 VAR_14 = -VAR_0;
 VAR_12 = FUNC_4(VAR_3, VAR_7, 1);
 if (!VAR_12)
  goto out_unlock;

 VAR_14 = FUNC_1(VAR_12, VAR_4);
 if (VAR_14)
  goto out_unlock;





 if (VAR_11) {
  VAR_14 = -VAR_0;
  VAR_13 = FUNC_4(VAR_11->target, VAR_7, 1);
  if (!VAR_13) {
   FUNC_2(VAR_12);
   goto out_unlock;
  }

  VAR_14 = VAR_11->func(VAR_4, VAR_13, VAR_11->args);
  if (VAR_14) {
   FUNC_2(VAR_12);
   goto out_unlock;
  }


  VAR_11->target->count = VAR_7 + 1;
 }

 if (VAR_4->len)
  FUNC_3("SELinux:  Context %s is not valid (left unmapped).\n",
   VAR_4->str);

 FUNC_7(VAR_3, VAR_7);
 *VAR_5 = VAR_7;


 FUNC_10(&VAR_3->count, VAR_7 + 1);

 VAR_14 = 0;
out_unlock:
 FUNC_12(&VAR_3->lock, VAR_6);
 return VAR_14;
}
