
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line; int file; int size; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,void*,char*,...) ;

void FUNC_5(void *VAR_1, char *VAR_2, int VAR_3)
{
   int VAR_4;

   if (VAR_1 == ((void*)0)) return;

   VAR_4 = FUNC_1(VAR_1);

   if (VAR_4 >= 0)
      FUNC_3(VAR_4, VAR_2, VAR_3);
   else {

      VAR_4 = FUNC_2(VAR_1);
      FUNC_0(0);
      if (VAR_4 >= 0)
         FUNC_4("Attempted to free %d-byte block %p at %s:%d previously freed/realloced at %s:%d",
                       VAR_0[VAR_4].size, VAR_1,
                       VAR_2, VAR_3,
                       VAR_0[VAR_4].file, VAR_0[VAR_4].line);
      else
         FUNC_4("Attempted to free unknown block %p at %s:%d", VAR_1, VAR_2,VAR_3);
   }
}
