
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t stb_uint ;
struct TYPE_2__ {int total_bytes; int valid; int size; int start; int fsize; int pending_literals; size_t hashmask; int window; int ** chash; int * buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int *,int,int*,int **,size_t) ;
 TYPE_1__ VAR_0 ;

void FUNC_5(char *VAR_1, int VAR_2)
{
   stb_uint VAR_3;




   VAR_0.total_bytes += VAR_2;

   while (VAR_2) {

      if (VAR_0.valid < VAR_0.size) {
         int VAR_4 = VAR_0.size - VAR_0.valid;
         if (VAR_2 < VAR_4) VAR_4 = VAR_2;
         FUNC_1(VAR_0.buffer + VAR_0.valid, VAR_1, VAR_4);
         VAR_2 -= VAR_4;
         VAR_1 += VAR_4;
         VAR_0.valid += VAR_4;
      }
      if (VAR_0.valid < VAR_0.size)
         return;





      if (VAR_0.start + VAR_0.fsize < VAR_0.valid) {
         int VAR_5 = (VAR_0.valid - VAR_0.fsize) - VAR_0.start;
         int VAR_6;
         FUNC_0(VAR_5 > 0);
         VAR_6 = FUNC_4(VAR_0.buffer, VAR_0.buffer + VAR_0.start, VAR_0.buffer + VAR_0.valid,
                                VAR_5, &VAR_0.pending_literals, VAR_0.chash, VAR_0.hashmask);
         VAR_0.start += VAR_6;
      }

      FUNC_0(VAR_0.start + VAR_0.fsize >= VAR_0.valid);




      {
         int VAR_7 = VAR_0.window;
         FUNC_0(VAR_0.start >= VAR_7);
         FUNC_0(VAR_0.valid >= VAR_7);



         if (VAR_0.start - VAR_0.pending_literals < VAR_7) {
            FUNC_3(VAR_0.buffer + VAR_0.start - VAR_0.pending_literals, VAR_0.pending_literals);
            VAR_0.pending_literals = 0;
         }


         FUNC_2(VAR_0.buffer, VAR_0.buffer + VAR_7, VAR_0.valid - VAR_7);
         VAR_0.start -= VAR_7;
         VAR_0.valid -= VAR_7;

         for (VAR_3=0; VAR_3 <= VAR_0.hashmask; ++VAR_3)
            if (VAR_0.chash[VAR_3] < VAR_0.buffer + VAR_7)
               VAR_0.chash[VAR_3] = ((void*)0);
            else
               VAR_0.chash[VAR_3] -= VAR_7;
      }

   }
}
