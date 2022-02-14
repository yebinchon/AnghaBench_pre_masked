
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int line; int file; int size; } ;
struct TYPE_3__ {size_t size; char* file; int line; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,size_t,char*,int) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,void*,char*,...) ;
 int FUNC_6 (void*,size_t,char*,int) ;

void FUNC_7(void *VAR_2, void *VAR_3, size_t VAR_4, char *VAR_5, int VAR_6)
{
   int VAR_7;
   if (VAR_2 == ((void*)0)) { FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6); return; }
   if (VAR_3 == ((void*)0)) return;

   VAR_7 = FUNC_2(VAR_2);
   if (VAR_7 == -1) {


      VAR_7 = FUNC_3(VAR_2);
      FUNC_0(0);
      if (VAR_7 >= 0)
         FUNC_5("Attempted to realloc %d-byte block %p at %s:%d previously freed/realloced at %s:%d",
                       VAR_0[VAR_7].size, VAR_2,
                       VAR_5, VAR_6,
                       VAR_0[VAR_7].file, VAR_0[VAR_7].line);
      else
         FUNC_5("Attempted to realloc unknown block %p at %s:%d", VAR_2, VAR_5,VAR_6);
   } else {
      if (VAR_3 == VAR_2) {
         VAR_1[VAR_7].size = VAR_4;
         VAR_1[VAR_7].file = VAR_5;
         VAR_1[VAR_7].line = VAR_6;
      } else {
         FUNC_4(VAR_7, VAR_5, VAR_6);
         FUNC_1(VAR_3,VAR_4,VAR_5,VAR_6);
      }
   }
}
