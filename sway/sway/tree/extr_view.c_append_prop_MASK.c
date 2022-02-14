
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pango_markup; } ;


 TYPE_1__* VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static size_t FUNC_4(char *VAR_1, const char *VAR_2) {
 if (!VAR_2) {
  return 0;
 }


 if (VAR_0->pango_markup) {
  char *VAR_3 = FUNC_0(VAR_2);
  FUNC_2(VAR_1, VAR_3);
  size_t VAR_4 = FUNC_3(VAR_3);
  FUNC_1(VAR_3);
  return VAR_4;
 } else {
  FUNC_2(VAR_1, VAR_2);
  return FUNC_3(VAR_2);
 }
}
