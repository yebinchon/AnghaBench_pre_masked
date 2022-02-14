
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct ucounts {scalar_t__ count; int node; int uid; struct user_namespace* ns; } ;
struct hlist_head {int dummy; } ;
typedef int kuid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ucounts* FUNC_0 (struct user_namespace*,int ,struct hlist_head*) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 int FUNC_2 (struct ucounts*) ;
 struct ucounts* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct hlist_head* FUNC_6 (struct user_namespace*,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct ucounts *FUNC_7(struct user_namespace *VAR_3, kuid_t VAR_4)
{
 struct hlist_head *VAR_5 = FUNC_6(VAR_3, VAR_4);
 struct ucounts *VAR_6, *VAR_7;

 FUNC_4(&VAR_2);
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_5(&VAR_2);

  VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0);
  if (!VAR_7)
   return ((void*)0);

  VAR_7->ns = VAR_3;
  VAR_7->uid = VAR_4;
  VAR_7->count = 0;

  FUNC_4(&VAR_2);
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
  if (VAR_6) {
   FUNC_2(VAR_7);
  } else {
   FUNC_1(&VAR_7->node, VAR_5);
   VAR_6 = VAR_7;
  }
 }
 if (VAR_6->count == VAR_1)
  VAR_6 = ((void*)0);
 else
  VAR_6->count += 1;
 FUNC_5(&VAR_2);
 return VAR_6;
}
