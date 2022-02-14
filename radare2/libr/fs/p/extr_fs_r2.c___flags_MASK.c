
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RList ;
typedef int RFSRoot ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*,float) ;
 char* FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static RList *FUNC_5(RFSRoot *VAR_0, const char *VAR_1) {
 const char *VAR_2 = ((void*)0);
 if (!FUNC_4 (VAR_1, "/flags/", 7)) {
  VAR_2 = VAR_1 + 7;
 }
 char *VAR_3 = VAR_2
  ? FUNC_2 ("fq@F:%s", VAR_2)
  : FUNC_3 ("fsq");
 RList *VAR_4 = FUNC_1 (VAR_0, VAR_3, VAR_2? 'f': 'd');
 FUNC_0 (VAR_3);
 return VAR_4;
}
