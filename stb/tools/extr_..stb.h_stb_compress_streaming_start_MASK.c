
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int stb_uint ;
typedef int stb_uchar ;
struct TYPE_2__ {int size; int hashmask; int window; int fsize; int length_id; scalar_t__ total_bytes; scalar_t__ pending_literals; scalar_t__ start; scalar_t__ valid; int ** chash; int * buffer; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_6(void)
{
   stb_uint VAR_4;
   VAR_3.size = VAR_2 * 3;
   VAR_3.buffer = (stb_uchar*)FUNC_1(VAR_3.size);
   if (!VAR_3.buffer) return 0;

   VAR_3.chash = (stb_uchar**)FUNC_1(sizeof(*VAR_3.chash) * VAR_0);
   if (!VAR_3.chash) {
      FUNC_0(VAR_3.buffer);
      return 0;
   }

   for (VAR_4=0; VAR_4 < VAR_0; ++VAR_4)
      VAR_3.chash[VAR_4] = ((void*)0);

   VAR_3.hashmask = VAR_0-1;

   VAR_3.valid = 0;
   VAR_3.start = 0;
   VAR_3.window = VAR_2;
   VAR_3.fsize = VAR_2;
   VAR_3.pending_literals = 0;
   VAR_3.total_bytes = 0;


   FUNC_2(0x57); FUNC_2(0xbc); FUNC_3(0);

   FUNC_4(0);

   VAR_3.length_id = (int) FUNC_5();
   FUNC_4(0);

   FUNC_4(VAR_2);

   VAR_1 = 1;

   return 1;
}
