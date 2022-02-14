
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_5__ {char* desc; } ;
struct TYPE_4__ {char* name; char* args; char* desc; } ;
typedef int RCore ;
typedef TYPE_1__ RCmdJavaCmd ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char const**) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_3 (RCore * VAR_3, const char * VAR_4) {
 ut32 VAR_5 = 0;
 const char **VAR_6 = (const char**)FUNC_1 (sizeof(char *) * VAR_0*4);
 VAR_6[0] = "Usage:";
 VAR_6[1] = "java [cmd] [arg..] ";
 VAR_6[2] = VAR_2.desc;
 for (VAR_5 = 0; VAR_5 <VAR_0; VAR_5++) {
  RCmdJavaCmd *VAR_7 = &VAR_1[VAR_5];
  VAR_6[3+(VAR_5*3)+0] = VAR_7->name;
  VAR_6[3+(VAR_5*3)+1] = VAR_7->args;
  VAR_6[3+(VAR_5*3)+2] = VAR_7->desc;
 }
 VAR_6[3+(VAR_5*3)] = ((void*)0);
 FUNC_2 (VAR_3, VAR_6);
 FUNC_0 (VAR_6);
 return 1;
}
