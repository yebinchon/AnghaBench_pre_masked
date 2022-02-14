
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uts_namespace {int user_ns; } ;
struct nsproxy {struct uts_namespace* uts_ns; } ;
struct ns_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct uts_namespace*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct uts_namespace*) ;
 struct uts_namespace* FUNC_4 (struct ns_common*) ;

__attribute__((used)) static int FUNC_5(struct nsproxy *VAR_2, struct ns_common *VAR_3)
{
 struct uts_namespace *VAR_4 = FUNC_4(VAR_3);

 if (!FUNC_2(VAR_4->user_ns, VAR_0) ||
     !FUNC_2(FUNC_0(), VAR_0))
  return -VAR_1;

 FUNC_1(VAR_4);
 FUNC_3(VAR_2->uts_ns);
 VAR_2->uts_ns = VAR_4;
 return 0;
}
