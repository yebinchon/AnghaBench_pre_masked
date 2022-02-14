
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static __inline char* FUNC_3(const char* VAR_1) {
 static char VAR_2[512];
 char* VAR_3;
 VAR_2[0] = 0;
 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_2, VAR_3);
  FUNC_0(VAR_3);
 }
 return VAR_2;
}
