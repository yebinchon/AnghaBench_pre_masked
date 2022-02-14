
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* assembler; int config; } ;
struct TYPE_9__ {int bits; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static int FUNC_8(RCore *VAR_0, const char *VAR_1) {
 const char *VAR_2 = FUNC_6 (VAR_0->config, "dbg.malloc");
 if (VAR_2 && !FUNC_7 ("glibc", VAR_2)) {







  FUNC_5 ("glibc not supported for this platform\n");
 } else {



  FUNC_5 ("MALLOC algorithm not supported\n");
  return 0;

 }
 return 1;
}
