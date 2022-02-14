
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int log; } ;
typedef TYPE_1__ RCore ;


 char* FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_4 (RCore *VAR_0, int VAR_1, const char *VAR_2) {
 if (*VAR_2 == ':') {
  char *VAR_3 = FUNC_0 (VAR_0->log, VAR_2);
  if (VAR_3) {
   FUNC_2 ("%s\n", VAR_3);
   FUNC_3 (VAR_0, VAR_3, 0);
   FUNC_1 (VAR_3);
  }
 }
 return 0;
}
