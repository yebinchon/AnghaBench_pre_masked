
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netconfig_vars {int nc_configs; scalar_t__ flag; int valid; } ;
struct TYPE_2__ {int ref; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (struct netconfig_vars*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__ VAR_5 ;

void *
FUNC_3()
{
    struct netconfig_vars *VAR_6;

    if ((VAR_6 = (struct netconfig_vars *)FUNC_2(sizeof
  (struct netconfig_vars))) == ((void*)0)) {
  return(((void*)0));
    }





    VAR_5.ref++;
    if ((VAR_4 != ((void*)0)) || (VAR_4 = FUNC_0(VAR_2, "r")) != ((void*)0)) {
  VAR_6->valid = VAR_1;
  VAR_6->flag = 0;
  VAR_6->nc_configs = VAR_5.head;
  return ((void *)VAR_6);
    }
    VAR_5.ref--;
    VAR_3 = VAR_0;
    FUNC_1(VAR_6);
    return (((void*)0));
}
