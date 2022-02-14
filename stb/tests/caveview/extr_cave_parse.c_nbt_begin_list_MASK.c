
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_3__ {unsigned char* cur; int nesting; } ;
typedef TYPE_1__ nbt ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char*) ;

__attribute__((used)) static int FUNC_2(nbt *VAR_0, unsigned char VAR_1)
{
   uint32 VAR_2;
   unsigned char *VAR_3;

   VAR_3 = VAR_0->cur + 3 + (VAR_0->cur[1]*256 + VAR_0->cur[2]);
   if (VAR_3[0] != VAR_1)
      return -1;
   VAR_0->cur = VAR_3;
   VAR_2 = FUNC_1(VAR_0->cur+1);
   FUNC_0(VAR_0->cur[0] == VAR_1);

   ++VAR_0->nesting;
   VAR_0->cur += 5;
   return (int) VAR_2;
}
