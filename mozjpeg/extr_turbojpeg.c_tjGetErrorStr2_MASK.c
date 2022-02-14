
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* errStr; scalar_t__ isInstanceError; } ;
typedef TYPE_1__ tjinstance ;
typedef scalar_t__ tjhandle ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;

char *FUNC_0(tjhandle VAR_2)
{
  tjinstance *VAR_3 = (tjinstance *)VAR_2;

  if (VAR_3 && VAR_3->isInstanceError) {
    VAR_3->isInstanceError = VAR_0;
    return VAR_3->errStr;
  } else
    return VAR_1;
}
