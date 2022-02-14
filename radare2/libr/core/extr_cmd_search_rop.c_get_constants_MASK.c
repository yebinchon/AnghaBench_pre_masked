
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RList ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,void*) ;
 int * FUNC_2 (int (*) (char*)) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,int *,int ) ;

__attribute__((used)) static RList* FUNC_6(const char *VAR_0) {
 RList *VAR_1;
 char *VAR_2, *VAR_3;
 if (!VAR_0) {
  return ((void*)0);
 }

 VAR_3 = FUNC_3 (VAR_0);
 VAR_1 = FUNC_2 (FUNC_0);
 VAR_2 = FUNC_4 (VAR_3, ",");
 while (VAR_2) {
  if (FUNC_5 (VAR_2, ((void*)0), 0)) {
   FUNC_1 (VAR_1, (void*)FUNC_3 (VAR_2));
  }
  VAR_2 = FUNC_4 (((void*)0), ",");
 }
 FUNC_0 (VAR_3);
 return VAR_1;
}
