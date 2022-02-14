
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int const*,int ,int) ;
 char* FUNC_3 (char*,int *) ;
 char* FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char*,char*,char*,int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool FUNC_8(const char *VAR_0) {
 char *VAR_1 = FUNC_4 ("%s.tmp", VAR_0);
 char *VAR_2 = FUNC_3 (VAR_1, ((void*)0));

 VAR_2 = FUNC_5 (VAR_2, "rdata", "text", 0);
 VAR_2 = FUNC_5 (VAR_2, "rodata", "text", 0);
 VAR_2 = FUNC_5 (VAR_2, "get_pc_thunk.bx", "__getesp__", 1);

 const char *VAR_3[] = {".cstring", "size", "___main", "section", "__alloca", "zero", "cfi"};
 size_t VAR_4;
 for (VAR_4 = 0; VAR_4 < 7; VAR_4++) {
  FUNC_6 (VAR_2, VAR_3[VAR_4]);
 }

 FUNC_1 (VAR_1);
 VAR_1 = FUNC_4 ("%s.s", VAR_0);
 if (!FUNC_2 (VAR_1, (const ut8*) VAR_2, FUNC_7 (VAR_2), 1)) {
  FUNC_0 ("Error while opening %s.s\n", VAR_0);
  goto fail;
 }

 FUNC_1 (VAR_2);
 FUNC_1 (VAR_1);
 return 1;

fail:
 FUNC_1 (VAR_2);
 FUNC_1 (VAR_1);
 return 0;
}
