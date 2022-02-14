
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int ,int *,int *) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char*,int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(void)
{
 VAR_0 = FUNC_0("hwpoison", ((void*)0));






 FUNC_1("corrupt-pfn", 0200, VAR_0, ((void*)0),
       &VAR_7);

 FUNC_1("unpoison-pfn", 0200, VAR_0, ((void*)0),
       &VAR_8);

 FUNC_2("corrupt-filter-enable", 0600, VAR_0,
      &VAR_3);

 FUNC_2("corrupt-filter-dev-major", 0600, VAR_0,
      &VAR_1);

 FUNC_2("corrupt-filter-dev-minor", 0600, VAR_0,
      &VAR_2);

 FUNC_3("corrupt-filter-flags-mask", 0600, VAR_0,
      &VAR_4);

 FUNC_3("corrupt-filter-flags-value", 0600, VAR_0,
      &VAR_5);






 return 0;
}
