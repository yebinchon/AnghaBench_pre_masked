
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_func {int dummy; } ;
struct tracepoint {int funcs; int key; int (* unregfunc ) () ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tracepoint_func*) ;
 int FUNC_1 (struct tracepoint_func*) ;
 int FUNC_2 (int) ;
 struct tracepoint_func* FUNC_3 (struct tracepoint_func**,struct tracepoint_func*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct tracepoint_func*) ;
 struct tracepoint_func* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct tracepoint_func*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_11(struct tracepoint *VAR_2,
  struct tracepoint_func *VAR_3)
{
 struct tracepoint_func *VAR_4, *VAR_5;

 VAR_5 = FUNC_6(VAR_2->funcs,
   FUNC_4(&VAR_1));
 VAR_4 = FUNC_3(&VAR_5, VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2(FUNC_1(VAR_4) != -VAR_0);
  return FUNC_1(VAR_4);
 }

 if (!VAR_5) {

  if (VAR_2->unregfunc && FUNC_8(&VAR_2->key))
   VAR_2->unregfunc();

  if (FUNC_8(&VAR_2->key))
   FUNC_9(&VAR_2->key);
 }
 FUNC_5(VAR_2->funcs, VAR_5);
 FUNC_7(VAR_4);
 return 0;
}
