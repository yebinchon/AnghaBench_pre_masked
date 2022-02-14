
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int pid; int name; } ;
typedef TYPE_1__ pidinfo_t ;
typedef int pid_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,int ,char*,char*,int) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(pid_t VAR_2, pidinfo_t *VAR_3)
{
char VAR_4[VAR_0 + 1];
char VAR_5[VAR_0 + 1];
ssize_t VAR_6;

FUNC_2(VAR_4, VAR_0, "%s/%i/exe", VAR_1, VAR_2);

VAR_6=FUNC_1(VAR_4, VAR_5, VAR_0);
if (VAR_6 != -1)
    VAR_5[VAR_6] = 0;
else
    return 0;

VAR_3[0].pid = VAR_2;
FUNC_3(VAR_3[0].name, FUNC_0(VAR_5));
return 1;
}
