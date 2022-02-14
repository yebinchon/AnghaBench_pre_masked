
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,char const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 char *VAR_3 = FUNC_2 (VAR_2->io, VAR_1);
 if (VAR_3) {
  int VAR_4 = FUNC_0 (VAR_3);
  FUNC_1 (VAR_3);
  return VAR_4;
 }
 return 0;
}
