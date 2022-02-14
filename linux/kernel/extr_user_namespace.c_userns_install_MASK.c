
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct nsproxy {int dummy; } ;
struct ns_common {int dummy; } ;
struct cred {int user_ns; } ;
struct TYPE_5__ {TYPE_1__* fs; } ;
struct TYPE_4__ {int users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cred*) ;
 TYPE_2__* VAR_4 ;
 struct user_namespace* FUNC_1 () ;
 int FUNC_2 (struct user_namespace*) ;
 int FUNC_3 (struct user_namespace*,int ) ;
 struct cred* FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct cred*,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 struct user_namespace* FUNC_8 (struct ns_common*) ;

__attribute__((used)) static int FUNC_9(struct nsproxy *VAR_5, struct ns_common *VAR_6)
{
 struct user_namespace *VAR_7 = FUNC_8(VAR_6);
 struct cred *VAR_8;




 if (VAR_7 == FUNC_1())
  return -VAR_1;


 if (!FUNC_7(VAR_4))
  return -VAR_1;

 if (VAR_4->fs->users != 1)
  return -VAR_1;

 if (!FUNC_3(VAR_7, VAR_0))
  return -VAR_3;

 VAR_8 = FUNC_4();
 if (!VAR_8)
  return -VAR_2;

 FUNC_5(VAR_8->user_ns);
 FUNC_6(VAR_8, FUNC_2(VAR_7));

 return FUNC_0(VAR_8);
}
