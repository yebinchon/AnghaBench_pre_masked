
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* cur; } ;
typedef TYPE_1__ nbt ;


 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_1__*,unsigned char,int*) ;

__attribute__((used)) static void *FUNC_2(nbt *VAR_0, unsigned char VAR_1, int *VAR_2)
{
   FUNC_0(VAR_0->cur[0] == VAR_1);
   VAR_0->cur += 3 + (VAR_0->cur[1]*256+VAR_0->cur[2]);
   return FUNC_1(VAR_0, VAR_1, VAR_2);
}
