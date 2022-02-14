
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* cmdfilter; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static bool FUNC_3(RCore *VAR_0, const char *VAR_1) {
 if (!FUNC_2 (VAR_1)) {
  return 0;
 }
 VAR_0->cmdfilter = "ec ";
 bool VAR_2 = FUNC_1 (VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_0 ();
 }
 VAR_0->cmdfilter = ((void*)0);
 return VAR_2;
}
