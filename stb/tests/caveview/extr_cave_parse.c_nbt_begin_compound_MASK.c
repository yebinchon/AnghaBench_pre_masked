
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* cur; int nesting; } ;
typedef TYPE_1__ nbt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(nbt *VAR_1)
{
   FUNC_0(*VAR_1->cur == VAR_0);

   VAR_1->cur += 3 + (VAR_1->cur[1]*256 + VAR_1->cur[2]);
   ++VAR_1->nesting;
}
