
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lastFTPCmdResultLL; } ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void
FUNC_5(const int VAR_2, const char **const VAR_3, const CommandPtr VAR_4, const ArgvInfoPtr VAR_5)
{
 char VAR_6[256];
 int VAR_7;

 FUNC_0(VAR_1);
 (void) FUNC_4(VAR_6, "SITE");
 for (VAR_7=1; VAR_7<VAR_2; VAR_7++) {
  (void) FUNC_3(VAR_6, " ");
  (void) FUNC_3(VAR_6, VAR_3[VAR_7]);
 }
 (void) FUNC_1(&VAR_0, "%s", VAR_6);
 FUNC_2(&VAR_0.lastFTPCmdResultLL);
}
