
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zErrMsg; } ;
struct TYPE_5__ {TYPE_1__ base; int interp; int zTableName; } ;
typedef TYPE_2__ echo_vtab ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int,char*,char*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(echo_vtab *VAR_1, const char *VAR_2){
  const char *VAR_3;
  char VAR_4[128];
  VAR_4[127] = '\0';
  FUNC_2(127, VAR_4, "echo_module_fail(%s,%s)", VAR_2, VAR_1->zTableName);
  VAR_3 = FUNC_0(VAR_1->interp, VAR_4, VAR_0);
  if( VAR_3 ){
    VAR_1->base.zErrMsg = FUNC_1("echo-vtab-error: %s", VAR_3);
  }
  return (VAR_3!=0);
}
