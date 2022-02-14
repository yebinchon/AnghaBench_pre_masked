
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char const*) ;

__attribute__((used)) static void FUNC_1(char *VAR_1, unsigned long VAR_2, const char* const* VAR_3, size_t VAR_4) {
 const char *VAR_5 = VAR_2 >= VAR_4 || VAR_3[VAR_2] ? VAR_3[VAR_2] : "unknown";
 FUNC_0 (VAR_1, VAR_0, "%s", VAR_5);
}
