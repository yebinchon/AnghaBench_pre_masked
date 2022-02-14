
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*,int) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static bool FUNC_5 (const char *VAR_0) {
 FUNC_0 (VAR_0 && *VAR_0, 0);
 if (FUNC_1 (VAR_0, "file://")) {
  VAR_0 += FUNC_2 ("file://");
 }
 const char * VAR_1 = (!FUNC_3 (VAR_0, "nocache://", 10))
  ? ((void*)0) : FUNC_4 (VAR_0, "://");
 return (!VAR_1 || (VAR_1 - VAR_0) > 10);
}
