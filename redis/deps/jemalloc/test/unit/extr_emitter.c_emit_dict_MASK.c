
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int emitter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*,int ,int*) ;
 int FUNC_5 (int *,char*,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(emitter_t *VAR_3) {
 bool VAR_4 = 0;
 bool VAR_5 = 1;
 int VAR_6 = 123;
 const char *VAR_7 = "a string";

 FUNC_0(VAR_3);
 FUNC_1(VAR_3, "foo", "This is the foo table:");
 FUNC_4(VAR_3, "abc", "ABC", VAR_0, &VAR_4);
 FUNC_4(VAR_3, "def", "DEF", VAR_0, &VAR_5);
 FUNC_5(VAR_3, "ghi", "GHI", VAR_1, &VAR_6,
     "note_key1", VAR_2, &VAR_7);
 FUNC_5(VAR_3, "jkl", "JKL", VAR_2, &VAR_7,
     "note_key2", VAR_0, &VAR_4);
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
