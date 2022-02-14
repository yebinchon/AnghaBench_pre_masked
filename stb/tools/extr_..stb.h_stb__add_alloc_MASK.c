
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int stb_uint32 ;
struct TYPE_2__ {size_t size; int line; char* file; int * p; } ;


 int * VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void *VAR_5, size_t VAR_6, char *VAR_7, int VAR_8)
{
   stb_uint32 VAR_9;
   int VAR_10;
   if (VAR_1 >= VAR_2)
      FUNC_1();
   VAR_9 = FUNC_2(VAR_5);
   VAR_10 = VAR_9 & VAR_3;
   if (VAR_4[VAR_10].p > VAR_0) {
      int VAR_11 = FUNC_3(VAR_9)|1;
      do {
         VAR_10 = (VAR_10+VAR_11) & VAR_3;
      } while (VAR_4[VAR_10].p > VAR_0);
   }
   FUNC_0(VAR_4[VAR_10].p == ((void*)0) || VAR_4[VAR_10].p == VAR_0);
   VAR_4[VAR_10].p = VAR_5;
   VAR_4[VAR_10].size = VAR_6;
   VAR_4[VAR_10].line = VAR_8;
   VAR_4[VAR_10].file = VAR_7;
   ++VAR_1;
}
