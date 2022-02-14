
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int line; int file; int size; } ;
struct TYPE_3__ {void* p; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(void *VAR_3)
{
   int VAR_4;

   if (VAR_3 == ((void*)0)) return;

   VAR_4 = FUNC_0(VAR_3);

   if (VAR_4 >= 0) return;

   for (VAR_4=0; VAR_4 < VAR_1; ++VAR_4)
      if (VAR_2[VAR_4].p == VAR_3)
         FUNC_2("Internal error: pointer %p was allocated, but hash search failed", VAR_3);


   VAR_4 = FUNC_1(VAR_3);
   if (VAR_4 >= 0)
      FUNC_2("Checked %d-byte block %p previously freed/realloced at %s:%d",
                    VAR_0[VAR_4].size, VAR_3,
                    VAR_0[VAR_4].file, VAR_0[VAR_4].line);
   FUNC_2("Checked unknown block %p");
}
