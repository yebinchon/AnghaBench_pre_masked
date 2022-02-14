
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ stop; } ;
typedef TYPE_1__ StopList ;


 scalar_t__ FUNC_0 (char**,scalar_t__,scalar_t__,int,int ) ;
 int VAR_0 ;

bool
FUNC_1(StopList *VAR_1, char *VAR_2)
{
 return (VAR_1->stop && VAR_1->len > 0 &&
   FUNC_0(&VAR_2, VAR_1->stop, VAR_1->len,
     sizeof(char *), VAR_0)) ? 1 : 0;
}
