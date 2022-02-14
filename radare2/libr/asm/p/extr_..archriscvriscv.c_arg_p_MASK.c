
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2 (char *VAR_0, unsigned long VAR_1, const char* const* VAR_2, size_t VAR_3) {
 const char *VAR_4 = VAR_1 >= VAR_3 || VAR_2[VAR_1] ? VAR_2[VAR_1] : "unknown";
 FUNC_0 (VAR_0+FUNC_1 (VAR_0), "%s", VAR_4);
}
