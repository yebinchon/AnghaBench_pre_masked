
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* (* system ) (int ,char*) ;int io; } ;
struct TYPE_5__ {int anal; TYPE_1__ iob; } ;
typedef TYPE_2__ RDebug ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (int ,char*) ;

__attribute__((used)) static char *FUNC_6(RDebug *VAR_0) {
 FUNC_3 ();
 char *VAR_1 = VAR_0->iob.system (VAR_0->iob.io, "drp");
 if (VAR_1) {
  return VAR_1;
 }
 const char *VAR_2 = FUNC_1 ();
 if (VAR_2 && *VAR_2) {
  char *VAR_3 = FUNC_4 (VAR_2);
  FUNC_2 ();
  return VAR_3;
 }
 return FUNC_0 (VAR_0->anal);
}
