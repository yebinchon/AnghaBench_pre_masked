
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore*)VAR_0;
 int VAR_3 = 1;
 switch (*VAR_1) {
 case '?':
  FUNC_0 (VAR_2);
  break;
 default:
  VAR_3 = FUNC_1 (VAR_2, "env %s", VAR_1);
 }
 return VAR_3;
}
