
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_name_old ;


 int FUNC_0 (int ,int ,char*,char const*,int) ;
 int FUNC_1 (char const*,char const*,char*,char const*,int) ;
 int FUNC_2 (char*,void*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, const char *VAR_1,
    int VAR_2) {
 const char *VAR_3;
 size_t VAR_4;

 VAR_4 = sizeof(VAR_3);
 FUNC_0(FUNC_2("thread.prof.name", (void *)&VAR_3, &VAR_4,
     ((void*)0), 0), 0,
     "%s():%d: Unexpected mallctl failure reading thread.prof.name",
     VAR_1, VAR_2);
 FUNC_1(VAR_3, VAR_0,
     "%s():%d: Unexpected thread.prof.name value", VAR_1, VAR_2);
}
