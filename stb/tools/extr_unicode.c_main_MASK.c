
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uval ;
struct TYPE_5__ {int fastpath; int* input; int length; int replace_fallback_with_codepoint; int input_size; scalar_t__ splittable; scalar_t__ has_sign; scalar_t__ inherited_storage; scalar_t__ fallback; int dont_care; scalar_t__ depth; } ;
typedef TYPE_1__ table ;
struct TYPE_6__ {int lo; int hi; } ;
typedef TYPE_2__ char_range ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 TYPE_2__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (int,int) ;
 char** FUNC_6 (char*,int*) ;
 int FUNC_7 (char*,int *,int) ;
 int* VAR_1 ;

int FUNC_8(int VAR_2, char **VAR_3)
{
   table VAR_4;
   uval VAR_5=0;
   int VAR_6,VAR_7=0;
   char **VAR_8 = FUNC_6("../../data/UnicodeData.txt", &VAR_7);
   FUNC_0(VAR_8);
   for (VAR_6=0; VAR_6 < VAR_7; ++VAR_6) {
      if (VAR_8[VAR_6][0] == '#' || VAR_8[VAR_6][0] == '\n' || VAR_8[VAR_6][0] == 0)
         ;
      else {
         char_range VAR_9 = FUNC_1(VAR_8[VAR_6]);
         char *VAR_10 = FUNC_4(VAR_8[VAR_6], 13);
         uval VAR_11, VAR_12;
         if (*VAR_10 == ';' || *VAR_10 == '\n' || *VAR_10 == 0)
            VAR_12 = 0;
         else {
            VAR_12 = FUNC_7(VAR_10, ((void*)0), 16);
            if (VAR_12 < 65536) {
               VAR_5 = FUNC_5(VAR_12, VAR_5);
               for (VAR_11=VAR_9.lo; VAR_11 <= VAR_9.hi; ++VAR_11) {
                  VAR_1[VAR_11] = VAR_12;

               }
            }
         }
      }
   }

   VAR_4.depth = 0;
   VAR_4.dont_care = VAR_0;
   VAR_4.fallback = 0;
   VAR_4.fastpath = 256;
   VAR_4.inherited_storage = 0;
   VAR_4.has_sign = 0;
   VAR_4.splittable = 0;
   VAR_4.input = VAR_1;
   VAR_4.input_size = FUNC_3(VAR_5);
   VAR_4.length = 0x110000;
   VAR_4.replace_fallback_with_codepoint = 1;

   FUNC_2(&VAR_4, "stbu_upppercase");
   return 0;
}
