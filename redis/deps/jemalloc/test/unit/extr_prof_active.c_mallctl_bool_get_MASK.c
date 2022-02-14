
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int old ;


 int FUNC_0 (int,int,char*,char const*,int,char const*) ;
 int FUNC_1 (int ,int ,char*,char const*,int,char const*) ;
 int FUNC_2 (char const*,void*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, bool VAR_1, const char *VAR_2, int VAR_3) {
 bool VAR_4;
 size_t VAR_5;

 VAR_5 = sizeof(VAR_4);
 FUNC_1(FUNC_2(VAR_0, (void *)&VAR_4, &VAR_5, ((void*)0), 0), 0,
     "%s():%d: Unexpected mallctl failure reading %s", VAR_2, VAR_3, VAR_0);
 FUNC_0(VAR_4, VAR_1, "%s():%d: Unexpected %s value", VAR_2, VAR_3,
     VAR_0);
}
