
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; } ;
struct uts_namespace {int user_ns; int name; TYPE_1__ ns; struct ucounts* ucounts; } ;
struct user_namespace {int dummy; } ;
struct ucounts {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uts_namespace* FUNC_0 (int) ;
 struct uts_namespace* FUNC_1 () ;
 int FUNC_2 (struct ucounts*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct user_namespace*) ;
 struct ucounts* FUNC_5 (struct user_namespace*) ;
 int FUNC_6 (int ,struct uts_namespace*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct uts_namespace *FUNC_10(struct user_namespace *VAR_5,
       struct uts_namespace *VAR_6)
{
 struct uts_namespace *VAR_7;
 struct ucounts *VAR_8;
 int VAR_9;

 VAR_9 = -VAR_1;
 VAR_8 = FUNC_5(VAR_5);
 if (!VAR_8)
  goto fail;

 VAR_9 = -VAR_0;
 VAR_7 = FUNC_1();
 if (!VAR_7)
  goto fail_dec;

 VAR_9 = FUNC_8(&VAR_7->ns);
 if (VAR_9)
  goto fail_free;

 VAR_7->ucounts = VAR_8;
 VAR_7->ns.ops = &VAR_4;

 FUNC_3(&VAR_3);
 FUNC_7(&VAR_7->name, &VAR_6->name, sizeof(VAR_7->name));
 VAR_7->user_ns = FUNC_4(VAR_5);
 FUNC_9(&VAR_3);
 return VAR_7;

fail_free:
 FUNC_6(VAR_2, VAR_7);
fail_dec:
 FUNC_2(VAR_8);
fail:
 return FUNC_0(VAR_9);
}
