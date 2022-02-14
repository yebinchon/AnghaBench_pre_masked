
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int length; int depth; int input; scalar_t__ splittable; } ;
typedef TYPE_1__ table ;
struct TYPE_11__ {size_t path; } ;
typedef TYPE_2__ result ;


 int FUNC_0 (char*,char*,int ,int,int ,int *) ;
 int FUNC_1 (char*,char*,int ,int) ;
 TYPE_1__ FUNC_2 (TYPE_1__*,int,char*) ;
 TYPE_2__ FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;

void FUNC_8(table *VAR_0, char *VAR_1)
{
   int VAR_2[3] = { 85, -1 };
   int VAR_3[8];
   int VAR_4 = 0;
   int VAR_5;
   result VAR_6;
   size_t VAR_7;
   table VAR_8;


   int VAR_9 = VAR_0->length;
   int VAR_10 = 0xffff;
   int VAR_11 = FUNC_7(VAR_0, 2);
   int VAR_12 = VAR_0->length - VAR_11;
   if (VAR_12 >= VAR_10) {
      VAR_0->length = VAR_11;
      while (VAR_11 > 0x10000) {
         VAR_11 = FUNC_7(VAR_0, 0);
         VAR_12 = VAR_0->length - VAR_11;
         if (VAR_12 < 0x10000)
            break;
         VAR_12 = VAR_9 - VAR_11;
         if (VAR_12 < VAR_10)
            break;
         VAR_10 *= 2;
      }
   }

   VAR_0->depth = 1;



   VAR_5 = FUNC_4(VAR_0, VAR_2);




   VAR_6 = FUNC_3(VAR_0, 0, VAR_5);

   VAR_7 = VAR_6.path;




   while (VAR_7) {
      VAR_3[VAR_4++] = (VAR_7 & 127) - 1;
      VAR_7 >>= 7;
   }

   FUNC_5("// modes: %d\n", VAR_6.path);
   VAR_8 = *VAR_0;
   while (VAR_4 > 0) {
      char VAR_13[256];
      FUNC_6(VAR_13, "%s_%d", VAR_1, VAR_4+1);
      --VAR_4;
      VAR_8 = FUNC_2(&VAR_8, VAR_3[VAR_4], VAR_13);
   }

   if (VAR_8.splittable)
      FUNC_1(VAR_1, "_1", VAR_8.input, VAR_8.length);
   else
      FUNC_0(VAR_1, "_1", VAR_8.input, VAR_8.length, 0, ((void*)0));
}
