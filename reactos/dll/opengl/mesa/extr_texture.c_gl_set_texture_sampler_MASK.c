
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_texture_object {scalar_t__ MinFilter; scalar_t__ MagFilter; float MinMagThresh; int Dimensions; int * SampleFunc; TYPE_1__** Image; int WrapT; int WrapS; int Complete; } ;
struct TYPE_2__ {int Format; int Border; } ;
typedef int GLboolean ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;

void FUNC_2( struct gl_texture_object *VAR_15 )
{
   if (!VAR_15->Complete) {
      VAR_15->SampleFunc = ((void*)0);
   }
   else {
      GLboolean VAR_16 = (VAR_15->MinFilter != VAR_15->MagFilter);

      if (VAR_16) {

         if (VAR_15->MagFilter==VAR_0
             && (VAR_15->MinFilter==VAR_3 ||
                 VAR_15->MinFilter==VAR_1)) {
            VAR_15->MinMagThresh = 0.5F;
         }
         else {
            VAR_15->MinMagThresh = 0.0F;
         }
      }

      switch (VAR_15->Dimensions) {
         case 1:
            if (VAR_16) {
               VAR_15->SampleFunc = VAR_9;
            }
            else if (VAR_15->MinFilter==VAR_0) {
               VAR_15->SampleFunc = VAR_11;
            }
            else {
               FUNC_0(VAR_15->MinFilter==VAR_2);
               VAR_15->SampleFunc = VAR_13;
            }
            break;
         case 2:
            if (VAR_16) {
               VAR_15->SampleFunc = VAR_10;
            }
            else if (VAR_15->MinFilter==VAR_0) {
               VAR_15->SampleFunc = VAR_12;
            }
            else {
               FUNC_0(VAR_15->MinFilter==VAR_2);
               if (VAR_15->WrapS==VAR_4 && VAR_15->WrapT==VAR_4
                   && VAR_15->Image[0]->Border==0 && VAR_15->Image[0]->Format==VAR_5) {
                  VAR_15->SampleFunc = VAR_7;
               }
               else if (VAR_15->WrapS==VAR_4 && VAR_15->WrapT==VAR_4
                   && VAR_15->Image[0]->Border==0 && VAR_15->Image[0]->Format==VAR_6) {
                  VAR_15->SampleFunc = VAR_8;
               }
               else
                  VAR_15->SampleFunc = VAR_14;
            }
            break;
         default:
            FUNC_1(((void*)0), "invalid dimensions in gl_set_texture_sampler");
      }
   }
}
