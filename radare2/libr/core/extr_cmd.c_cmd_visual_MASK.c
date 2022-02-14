
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ http_up; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char const*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const char *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 if (VAR_2->http_up) {
  return 0;
 }
 if (!FUNC_0 ()) {
  return 0;
 }
 return FUNC_1 ((RCore *)VAR_0, VAR_1);
}
