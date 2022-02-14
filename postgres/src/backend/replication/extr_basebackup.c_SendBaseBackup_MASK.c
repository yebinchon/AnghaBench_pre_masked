
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* label; } ;
typedef TYPE_1__ basebackup_options ;
typedef int activitymsg ;
struct TYPE_7__ {int options; } ;
typedef TYPE_2__ BaseBackupCmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 scalar_t__ VAR_1 ;

void
FUNC_5(BaseBackupCmd *VAR_2)
{
 basebackup_options VAR_3;

 FUNC_1(VAR_2->options, &VAR_3);

 FUNC_0(VAR_0);

 if (VAR_1)
 {
  char VAR_4[50];

  FUNC_4(VAR_4, sizeof(VAR_4), "sending backup \"%s\"",
     VAR_3.label);
  FUNC_3(VAR_4, 0);
 }

 FUNC_2(&VAR_3);
}
