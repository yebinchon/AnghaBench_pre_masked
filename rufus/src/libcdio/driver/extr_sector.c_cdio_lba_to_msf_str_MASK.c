
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ f; scalar_t__ s; scalar_t__ m; } ;
typedef TYPE_1__ msf_t ;
typedef scalar_t__ lba_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 char* FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char*) ;

char *
FUNC_3 (lba_t VAR_1)
{

  if (VAR_0 == VAR_1) {
    return FUNC_2("*INVALID");
  } else {
    msf_t VAR_2;
    VAR_2.m = VAR_2.s = VAR_2.f = 0;
    FUNC_0 (VAR_1, &VAR_2);
    return FUNC_1(&VAR_2);
  }
}
