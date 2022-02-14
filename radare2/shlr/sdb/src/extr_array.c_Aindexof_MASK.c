
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,int ) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_1, int VAR_2) {
 int VAR_3 = 0;
 const char *VAR_4, *VAR_5 = VAR_1;
 for (VAR_3 = 0; ; VAR_3++) {
  if (VAR_3 == VAR_2) {
   return VAR_5;
  }
  if (!(VAR_4 = FUNC_0 (VAR_5, VAR_0))) {
   break;
  }
  VAR_5 = VAR_4 + 1;
 }
 return ((void*)0);
}
