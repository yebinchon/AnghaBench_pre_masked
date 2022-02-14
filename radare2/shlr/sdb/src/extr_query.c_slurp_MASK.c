
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 long FUNC_2 (int,int ,int ) ;
 char* FUNC_3 (long) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int,char*,long) ;

__attribute__((used)) static char *FUNC_6(const char *VAR_3) {
 int VAR_4, VAR_5;
 char *VAR_6;
 long VAR_7;
 if (!VAR_3 || !*VAR_3)
  return ((void*)0);
 VAR_5 = FUNC_4 (VAR_3, VAR_0);
 if (VAR_5 == -1) {
  return ((void*)0);
 }
 VAR_7 = FUNC_2 (VAR_5, 0, VAR_1);
 if (VAR_7 < 0){
  FUNC_0 (VAR_5);
  return ((void*)0);
 }
 FUNC_2 (VAR_5, 0, VAR_2);
 VAR_6 = FUNC_3 (VAR_7 + 1);
 if (!VAR_6) {
  FUNC_0 (VAR_5);
  return ((void*)0);
 }
 VAR_4 = FUNC_5 (VAR_5, VAR_6, VAR_7);
 if (VAR_4 != VAR_7) {
  FUNC_1 (VAR_6);
  VAR_6 = ((void*)0);
 } else {
  VAR_6[VAR_7] = 0;
 }
 FUNC_0 (VAR_5);
 return VAR_6;
}
