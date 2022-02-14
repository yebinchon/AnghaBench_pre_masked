
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ verbose; } ;
typedef TYPE_1__ RAnal ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*) ;
 char* FUNC_3 (char*,char const*,int ) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(RAnal *VAR_0, const char *VAR_1) {
 if (!FUNC_2 (VAR_0, VAR_1)) {
  return FUNC_4 (VAR_1);
 }

 char *VAR_2 = ((void*)0);
 if (VAR_0->verbose) {
  FUNC_0 ("Warning: class name %s already taken!\n", VAR_1);
 }
 int VAR_3 = 1;

 do {
  FUNC_1 (VAR_2);
  VAR_2 = FUNC_3 ("%s.%d", VAR_1, VAR_3++);
  if (!VAR_2) {
   return ((void*)0);
  }
 } while (FUNC_2 (VAR_0, VAR_2));

 return VAR_2;
}
