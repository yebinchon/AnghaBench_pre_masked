
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uval ;
struct TYPE_6__ {scalar_t__ dont_care; int length; int fastpath; scalar_t__* input; scalar_t__ fallback; size_t input_size; scalar_t__ depth; scalar_t__ inherited_storage; scalar_t__ splittable; int has_sign; int replace_fallback_with_codepoint; } ;
typedef TYPE_1__ table ;
struct TYPE_7__ {size_t overhead; scalar_t__ trim_end; scalar_t__ special; scalar_t__ indirect; int aligned; scalar_t__ trim_start; } ;
typedef TYPE_2__ mode_info ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__**,scalar_t__*,int,int ,int,scalar_t__*,int,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (char*,char*,scalar_t__*,int,int ,int *) ;
 int FUNC_3 (char*,char*,scalar_t__*,int) ;
 int FUNC_4 (char*,size_t) ;
 size_t FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 size_t VAR_3 ;

table FUNC_11(table *VAR_4, int VAR_5, char *VAR_6)
{
   size_t VAR_7;
   int VAR_8;
   uval VAR_9;
   mode_info VAR_10 = VAR_2[VAR_5 % VAR_0];
   int VAR_11 = 8 << (VAR_5 / VAR_0);
   table VAR_12;
   uval *VAR_13 = ((void*)0);
   uval *VAR_14 = ((void*)0);
   uval *VAR_15 = ((void*)0);
   uval *VAR_16 = ((void*)0);
   VAR_12.dont_care = VAR_1;
   if (VAR_6)
      FUNC_4("// clusters of %d\n", VAR_11);
   for (VAR_8=0; VAR_8 < VAR_4->length; VAR_8 += VAR_11) {
      uval VAR_17;
      int VAR_18 = (VAR_8 < VAR_4->fastpath);
      if (VAR_10.special) {
         int VAR_19 = VAR_11-1;
         int VAR_20 = 0;
         uval VAR_21;

         for(;;) {
            VAR_21 = VAR_4->input[VAR_8 + VAR_19];
            if (VAR_21 != VAR_4->dont_care || VAR_19 == 0)
               break;
            --VAR_19;
         }

         if (VAR_21 == VAR_4->dont_care && !VAR_18) {

            FUNC_9(VAR_14, VAR_12.dont_care);
            continue;
         } else {
            uval VAR_22, VAR_23;
            if (VAR_10.trim_end && !VAR_18) {
               while (VAR_19 >= 0) {
                  if (VAR_4->input[VAR_8 + VAR_19] == VAR_21 || VAR_4->input[VAR_8 + VAR_19] == VAR_4->dont_care)
                     --VAR_19;
                  else
                     break;
               }
            }

            if (VAR_10.trim_start && !VAR_18) {
               while (VAR_20 < VAR_19) {
                  if (VAR_4->input[VAR_8 + VAR_20] == VAR_21 || VAR_4->input[VAR_8 + VAR_20] == VAR_4->dont_care)
                     ++VAR_20;
                  else
                     break;
               }
            }




            VAR_22 = FUNC_1(&VAR_13, &VAR_4->input[VAR_8+VAR_20], VAR_19-VAR_20+1, VAR_10.aligned, VAR_18, &VAR_4->input[VAR_4->length], VAR_8+VAR_20, VAR_4->replace_fallback_with_codepoint);


            if (!VAR_10.trim_end) {
               if (VAR_19 == 0)
                  VAR_22 = VAR_21;
               else
                  VAR_22 = VAR_22 | 0x80000000;
            } else {
               FUNC_0(VAR_19 < VAR_11 && VAR_19 >= -1);
               if (!VAR_18) FUNC_0(VAR_19 < VAR_11-1);
               FUNC_0(VAR_19 < VAR_11 && VAR_19+1 >= 0);
               if (!VAR_18) FUNC_0(VAR_19+1 < VAR_11);

               if (VAR_10.trim_start)
                  VAR_23 = VAR_20*256 + (VAR_19+1);
               else
                  VAR_23 = VAR_19+1;

               FUNC_0(VAR_22 < 65536);
               VAR_22 = VAR_22 + (VAR_23 << 16);
            }

            VAR_17 = VAR_22;

            FUNC_9(VAR_16, VAR_21);
         }
      } else if (VAR_10.trim_end) {
         int VAR_24 = VAR_11-1;
         int VAR_25 = 0;
         uval VAR_26, VAR_27;

         while (VAR_24 >= 0 && !VAR_18)
            if (VAR_4->input[VAR_8 + VAR_24] == VAR_4->fallback || VAR_4->input[VAR_8 + VAR_24] == VAR_4->dont_care)
               --VAR_24;
            else
               break;

         if (VAR_10.trim_start && !VAR_18) {
            while (VAR_25 < VAR_24) {
               if (VAR_4->input[VAR_8 + VAR_25] == VAR_4->fallback || VAR_4->input[VAR_8 + VAR_25] == VAR_4->dont_care)
                  ++VAR_25;
               else
                  break;
            }
         }


         ++VAR_24;

         if (VAR_24 == 0 && VAR_11 == 256)
            VAR_25 = VAR_24 = 1;


         VAR_26 = FUNC_1(&VAR_13, &VAR_4->input[VAR_8+VAR_25], VAR_24 - VAR_25, VAR_10.aligned, VAR_18, &VAR_4->input[VAR_4->length], VAR_8+VAR_25, VAR_4->replace_fallback_with_codepoint);

         FUNC_0(VAR_24 <= VAR_11 && VAR_24 >= 0);
         if (VAR_11 == 256)
            FUNC_0(VAR_24-1 < 256 && VAR_24-1 >= 0);
         else
            FUNC_0(VAR_24 < 256 && VAR_24 >= 0);
         if (VAR_11 == 256)
            --VAR_24;

         if (VAR_10.trim_start)
            VAR_27 = VAR_25*256 + VAR_24;
         else
            VAR_27 = VAR_24;

         FUNC_0(VAR_26 < 65536);
         VAR_26 = VAR_26 + (VAR_27 << 16);

         VAR_17 = VAR_26;
      } else {
         VAR_17 = FUNC_1(&VAR_13, &VAR_4->input[VAR_8], VAR_11, VAR_10.aligned, VAR_18, &VAR_4->input[VAR_4->length], VAR_8, VAR_4->replace_fallback_with_codepoint);
      }

      if (VAR_10.indirect) {
         int VAR_28;
         for (VAR_28=0; VAR_28 < FUNC_8(VAR_15); ++VAR_28)
            if (VAR_15[VAR_28] == VAR_17)
               break;
         if (VAR_28 == FUNC_8(VAR_15))
            FUNC_9(VAR_15, VAR_17);
         FUNC_9(VAR_14, VAR_28);
      } else {
         FUNC_9(VAR_14, VAR_17);
      }
   }


   VAR_7 = VAR_10.overhead * VAR_3;
   VAR_7 += 150;
   if (VAR_6)
      VAR_7 = 0;

   if (VAR_4->has_sign) {

      uval VAR_29;
      for (VAR_8=0; VAR_8 < FUNC_8(VAR_13); ++VAR_8)
         if (VAR_13[VAR_8] & 0x80000000)
            VAR_29 = FUNC_10(VAR_29, VAR_13[VAR_8]);
         else
            VAR_9 = FUNC_10(VAR_9, VAR_13[VAR_8]);
      VAR_9 = FUNC_10(VAR_9, VAR_29) << 1;
   } else {
      VAR_9 = 0;
      for (VAR_8=0; VAR_8 < FUNC_8(VAR_13); ++VAR_8)
         if (VAR_13[VAR_8] > VAR_9 && VAR_13[VAR_8] != VAR_4->dont_care)
            VAR_9 = VAR_13[VAR_8];
   }
   VAR_7 += FUNC_8(VAR_13) * (VAR_4->splittable ? FUNC_5(VAR_9) : FUNC_6(VAR_9));
   if (VAR_6) {
      if (VAR_4->splittable)
         FUNC_3(VAR_6, "", VAR_13, FUNC_8(VAR_13));
      else
         FUNC_2(VAR_6, "", VAR_13, FUNC_8(VAR_13), VAR_4->has_sign, ((void*)0));
   }

   VAR_9 = 0;
   for (VAR_8=0; VAR_8 < FUNC_8(VAR_16); ++VAR_8)
      if (VAR_16[VAR_8] > VAR_9)
         VAR_9 = VAR_16[VAR_8];
   VAR_7 += FUNC_8(VAR_16) * FUNC_6(VAR_9);
   if (VAR_6)
      FUNC_2(VAR_6, "_default", VAR_16, FUNC_8(VAR_16), 0, ((void*)0));

   VAR_9 = 0;
   for (VAR_8=0; VAR_8 < FUNC_8(VAR_15); ++VAR_8)
      if (VAR_15[VAR_8] > VAR_9)
         VAR_9 = VAR_15[VAR_8];
   VAR_7 += FUNC_8(VAR_15) * FUNC_5(VAR_9);

   if (VAR_6 && FUNC_8(VAR_15)) {
      if (VAR_10.trim_end)
         FUNC_3(VAR_6, "_index", VAR_15, FUNC_8(VAR_15));
      else {
         FUNC_0(0);
         FUNC_2(VAR_6, "_index", VAR_15, FUNC_8(VAR_15), 0, ((void*)0));
      }
      VAR_10.trim_end = VAR_10.special = 0;
   }

   if (VAR_6)
      FUNC_4("// above tables should be %d bytes\n", VAR_7);

   VAR_9 = 0;
   for (VAR_8=0; VAR_8 < FUNC_8(VAR_14); ++VAR_8)
      if (VAR_14[VAR_8] > VAR_9 && VAR_14[VAR_8] != VAR_4->dont_care)
         VAR_9 = VAR_14[VAR_8];
   VAR_12.splittable = VAR_10.trim_end;
   VAR_12.input_size = VAR_12.splittable ? FUNC_5(VAR_9) : FUNC_6(VAR_9);
   VAR_12.input = VAR_14;
   VAR_12.length = FUNC_8(VAR_14);
   VAR_12.inherited_storage = VAR_4->inherited_storage + VAR_7;
   VAR_12.fastpath = 0;
   VAR_12.depth = VAR_4->depth+1;
   FUNC_7(VAR_15);
   FUNC_7(VAR_13);
   FUNC_7(VAR_16);

   return VAR_12;
}
