
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* (* cb ) (char const*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(int VAR_1, const char *VAR_2) {
 char *VAR_3 = VAR_0[VAR_1].cb (VAR_2);
 if (VAR_3) {
  FUNC_1 ("%s", VAR_3);
  FUNC_0 (VAR_3);
  return 0;
 }
 return 1;
}
