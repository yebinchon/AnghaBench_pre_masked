
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RIODesc ;
typedef int RIO ;
typedef int RBuffer ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *,char*,int,int,int *) ;
 int VAR_0 ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static RIODesc *FUNC_5(RIO *VAR_1, const char *VAR_2, int VAR_3, int VAR_4) {
 RIODesc *VAR_5 = ((void*)0);
 char *VAR_6 = FUNC_3 (VAR_2);
 char *VAR_7 = FUNC_4 (VAR_6, "://") + 3;
 char *VAR_8 = FUNC_4 (VAR_7, "//");
 if (VAR_8) {
  *VAR_8 = 0;
  VAR_8 += 2;
 }

 RBuffer *VAR_9 = FUNC_0 (VAR_7, VAR_8);
 if (VAR_9) {
  VAR_5 = FUNC_2 (VAR_1, &VAR_0, VAR_8, VAR_3, VAR_4, VAR_9);
 }
 FUNC_1 (VAR_6);
 return VAR_5;
}
