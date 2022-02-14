
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gl_texture_object {scalar_t__ MinFilter; int Dimensions; void* Complete; TYPE_1__** Image; } ;
struct TYPE_2__ {scalar_t__ Format; scalar_t__ Border; int Width2; int Height2; int Data; } ;
typedef int GLuint ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;

void FUNC_1( struct gl_texture_object *VAR_5 )
{
   VAR_5->Complete = VAR_3;


   if (!VAR_5->Image[0] || !VAR_5->Image[0]->Data) {
      VAR_5->Complete = VAR_0;
      return;
   }

   if (VAR_5->MinFilter!=VAR_2 && VAR_5->MinFilter!=VAR_1) {



      int VAR_6;


      for (VAR_6=1; VAR_6<VAR_4; VAR_6++) {
         if (VAR_5->Image[VAR_6]) {
            if (!VAR_5->Image[VAR_6]->Data) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_5->Image[VAR_6]->Format != VAR_5->Image[0]->Format) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_5->Image[VAR_6]->Border != VAR_5->Image[0]->Border) {
               VAR_5->Complete = VAR_0;
               return;
            }
         }
      }


      if (VAR_5->Dimensions==1) {

         GLuint VAR_7 = VAR_5->Image[0]->Width2;
         for (VAR_6=1; VAR_6<VAR_4; VAR_6++) {
            if (VAR_7>1) {
               VAR_7 /= 2;
            }
            if (!VAR_5->Image[VAR_6]) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (!VAR_5->Image[VAR_6]->Data) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_5->Image[VAR_6]->Format != VAR_5->Image[0]->Format) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_5->Image[VAR_6]->Border != VAR_5->Image[0]->Border) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_5->Image[VAR_6]->Width2 != VAR_7 ) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_7==1) {
               return;
            }
         }
      }
      else if (VAR_5->Dimensions==2) {

         GLuint VAR_8 = VAR_5->Image[0]->Width2;
         GLuint VAR_9 = VAR_5->Image[0]->Height2;
         for (VAR_6=1; VAR_6<VAR_4; VAR_6++) {
            if (VAR_8>1) {
               VAR_8 /= 2;
            }
            if (VAR_9>1) {
               VAR_9 /= 2;
            }
            if (!VAR_5->Image[VAR_6]) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_5->Image[VAR_6]->Width2 != VAR_8) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_5->Image[VAR_6]->Height2 != VAR_9) {
               VAR_5->Complete = VAR_0;
               return;
            }
            if (VAR_8==1 && VAR_9==1) {
               return;
            }
         }
      }
      else {

         FUNC_0(((void*)0), "Bug in gl_test_texture_object_completeness\n");
      }
   }
}
