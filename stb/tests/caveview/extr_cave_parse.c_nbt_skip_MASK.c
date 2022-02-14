
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* cur; } ;
typedef TYPE_1__ nbt ;


 unsigned char VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char) ;

__attribute__((used)) static void FUNC_1(nbt *VAR_1)
{
   unsigned char VAR_2 = *VAR_1->cur++;
   if (VAR_2 == VAR_0)
      return;

   VAR_1->cur += (VAR_1->cur[0]*256 + VAR_1->cur[1]) + 2;
   FUNC_0(VAR_1, VAR_2);
}
