
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,long,int ) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (char**,size_t*,int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(FILE *VAR_1) {
 int VAR_2 = 0;
 int VAR_3 = 0;
 long VAR_4 = FUNC_2(VAR_1);
 char *VAR_5 = ((void*)0);
 size_t VAR_6 = 0;
 while ((FUNC_3(&VAR_5, &VAR_6, VAR_1)) != -1) {
  VAR_3++;
  FUNC_5(VAR_5);
  if (*VAR_5) {
   if (FUNC_4(VAR_5, "{") == 0) {
    VAR_2 = VAR_3;
   }
   break;
  }
 }
 FUNC_0(VAR_5);
 if (VAR_2 == 0) {
  FUNC_1(VAR_1, VAR_4, VAR_0);
 }
 return VAR_2;
}
