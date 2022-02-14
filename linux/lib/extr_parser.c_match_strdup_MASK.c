
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ from; scalar_t__ to; } ;
typedef TYPE_1__ substring_t ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__,scalar_t__,int ) ;

char *FUNC_1(const substring_t *VAR_1)
{
 return FUNC_0(VAR_1->from, VAR_1->to - VAR_1->from, VAR_0);
}
