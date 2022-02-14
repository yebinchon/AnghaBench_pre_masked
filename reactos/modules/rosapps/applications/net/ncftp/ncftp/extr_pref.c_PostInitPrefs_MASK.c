
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dataPortMode; } ;
struct TYPE_4__ {char* defaultAnonPassword; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

void
FUNC_1(void)
{
 if (VAR_2.defaultAnonPassword[0] == '\0') {
  FUNC_0(&VAR_2);
  VAR_3++;
 }
 if (VAR_1 >= 0)
  VAR_0.dataPortMode = VAR_1;
}
