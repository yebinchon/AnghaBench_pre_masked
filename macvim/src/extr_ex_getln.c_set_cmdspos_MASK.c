
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmdfirstc; scalar_t__ cmdindent; scalar_t__ cmdspos; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_0()
{
    if (VAR_1.cmdfirstc != VAR_0)
 VAR_1.cmdspos = 1 + VAR_1.cmdindent;
    else
 VAR_1.cmdspos = 0 + VAR_1.cmdindent;
}
