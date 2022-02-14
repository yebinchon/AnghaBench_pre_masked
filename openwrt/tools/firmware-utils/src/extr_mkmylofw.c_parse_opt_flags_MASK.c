
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (char,char*) ;
 scalar_t__ FUNC_3 (char*,int *) ;

int
FUNC_4(char VAR_1, char *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_2)) {
  goto err_out;
 }

 if (FUNC_3(VAR_2, &VAR_0.flags) != 0) {
  FUNC_1(0,"invalid firmware flags: %s", VAR_2);
  goto err_out;
 }

 FUNC_0(1, "firmware flags set to %X bytes", VAR_0.flags);

 return 0;

err_out:
 return -1;
}
