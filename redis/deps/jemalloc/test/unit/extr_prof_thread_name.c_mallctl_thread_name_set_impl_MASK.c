
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_name ;


 int FUNC_0 (int ,int ,char*,char const*,int) ;
 int FUNC_1 (char*,int *,int *,void*,int) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, const char *VAR_1,
    int VAR_2) {
 FUNC_0(FUNC_1("thread.prof.name", ((void*)0), ((void*)0),
     (void *)&VAR_0, sizeof(VAR_0)), 0,
     "%s():%d: Unexpected mallctl failure reading thread.prof.name",
     VAR_1, VAR_2);
 FUNC_2(VAR_0, VAR_1, VAR_2);
}
