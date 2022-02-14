
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,char*,int) ;
 scalar_t__ FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8 = VAR_0;
 char VAR_9[VAR_2];


 VAR_4 = FUNC_2(VAR_3, "memcg_test_0");
 VAR_5 = FUNC_2(VAR_3, "memcg_test_0/memcg_test_1");
 if (!VAR_4 || !VAR_5)
  goto cleanup_free;

 if (FUNC_0(VAR_4))
  goto cleanup_free;

 if (FUNC_5(VAR_4, "cgroup.subtree_control", "+memory"))
  goto cleanup_parent;

 if (FUNC_0(VAR_5))
  goto cleanup_parent;

 if (FUNC_4(VAR_5, "cgroup.controllers", "memory"))
  goto cleanup_child;


 VAR_6 = FUNC_2(VAR_3, "memcg_test_1");
 VAR_7 = FUNC_2(VAR_3, "memcg_test_1/memcg_test_1");
 if (!VAR_6 || !VAR_7)
  goto cleanup_free2;

 if (FUNC_0(VAR_6))
  goto cleanup_free2;

 if (FUNC_0(VAR_7))
  goto cleanup_parent2;

 if (FUNC_3(VAR_7, "cgroup.controllers", VAR_9, sizeof(VAR_9)))
  goto cleanup_all;

 if (!FUNC_4(VAR_7, "cgroup.controllers", "memory"))
  goto cleanup_all;

 VAR_8 = VAR_1;

cleanup_all:
 FUNC_1(VAR_7);
cleanup_parent2:
 FUNC_1(VAR_6);
cleanup_free2:
 FUNC_6(VAR_6);
 FUNC_6(VAR_7);
cleanup_child:
 FUNC_1(VAR_5);
cleanup_parent:
 FUNC_1(VAR_4);
cleanup_free:
 FUNC_6(VAR_4);
 FUNC_6(VAR_5);

 return VAR_8;
}
