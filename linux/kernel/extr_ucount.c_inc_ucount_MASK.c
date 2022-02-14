
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {struct ucounts* ucounts; int * ucount_max; } ;
struct ucounts {int * ucount; struct user_namespace* ns; } ;
typedef int kuid_t ;
typedef enum ucount_type { ____Placeholder_ucount_type } ucount_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 struct ucounts* FUNC_3 (struct user_namespace*,int ) ;
 int FUNC_4 (struct ucounts*) ;

struct ucounts *FUNC_5(struct user_namespace *VAR_0, kuid_t VAR_1,
      enum ucount_type VAR_2)
{
 struct ucounts *VAR_3, *VAR_4, *VAR_5;
 struct user_namespace *VAR_6;
 VAR_3 = FUNC_3(VAR_0, VAR_1);
 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_6->ucounts) {
  int VAR_7;
  VAR_6 = VAR_4->ns;
  VAR_7 = FUNC_0(VAR_6->ucount_max[VAR_2]);
  if (!FUNC_2(&VAR_4->ucount[VAR_2], VAR_7))
   goto fail;
 }
 return VAR_3;
fail:
 VAR_5 = VAR_4;
 for (VAR_4 = VAR_3; VAR_4 != VAR_5; VAR_4 = VAR_4->ns->ucounts)
  FUNC_1(&VAR_4->ucount[VAR_2]);

 FUNC_4(VAR_3);
 return ((void*)0);
}
