
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct vertex_buffer {size_t Start; size_t Count; int * Bindex; int * Normal; int * Eye; int * Findex; int MonoMaterial; int ** Bcolor; int ** Fcolor; scalar_t__ MonoNormal; } ;
struct TYPE_11__ {scalar_t__ TwoSide; } ;
struct TYPE_12__ {TYPE_2__ Model; scalar_t__ Fast; } ;
struct TYPE_13__ {TYPE_3__ Light; TYPE_1__* Visual; struct vertex_buffer* VB; } ;
struct TYPE_10__ {scalar_t__ RGBAflag; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef TYPE_4__ GLcontext ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_4__*,int,int,int *,int *,int **) ;
 int FUNC_2 (TYPE_4__*,int,int,int *,int **) ;
 int FUNC_3 (TYPE_4__*,int,int,int *,int *,int *) ;
 int FUNC_4 (TYPE_4__*,size_t) ;

__attribute__((used)) static void FUNC_5( GLcontext *VAR_0 )
{
   struct vertex_buffer *VAR_1 = VAR_0->VB;

   if (VAR_0->Visual->RGBAflag) {
      if (!VAR_1->MonoMaterial) {

         GLuint VAR_2;
         for (VAR_2=VAR_1->Start; VAR_2<VAR_1->Count; VAR_2++) {
            FUNC_4( VAR_0, VAR_2 );
            FUNC_1( VAR_0, 0, 1, &VAR_1->Eye[VAR_2],
                                     &VAR_1->Normal[VAR_2], &VAR_1->Fcolor[VAR_2]);
            if (VAR_0->Light.Model.TwoSide) {
               FUNC_1( VAR_0, 1, 1, &VAR_1->Eye[VAR_2],
                                        &VAR_1->Normal[VAR_2], &VAR_1->Bcolor[VAR_2]);
            }
         }



         FUNC_4( VAR_0, VAR_1->Count );
      }
      else {
         if (VAR_0->Light.Fast) {
            if (VAR_1->MonoNormal) {

               GLubyte VAR_3[1][4];
               GLuint VAR_4;
               FUNC_2( VAR_0, 0,
                                             1,
                                             VAR_1->Normal + VAR_1->Start,
                                             VAR_3 );
               for (VAR_4=VAR_1->Start; VAR_4<VAR_1->Count; VAR_4++) {
                  FUNC_0( VAR_1->Fcolor[VAR_4], VAR_3[0] );
               }
               if (VAR_0->Light.Model.TwoSide) {
                  FUNC_2( VAR_0, 1,
                                                1,
                                                VAR_1->Normal + VAR_1->Start,
                                                VAR_3 );
                  for (VAR_4=VAR_1->Start; VAR_4<VAR_1->Count; VAR_4++) {
                     FUNC_0( VAR_1->Bcolor[VAR_4], VAR_3[0] );
                  }
               }

            }
            else {

               FUNC_2( VAR_0, 0,
                                             VAR_1->Count - VAR_1->Start,
                                             VAR_1->Normal + VAR_1->Start,
                                             VAR_1->Fcolor + VAR_1->Start );
               if (VAR_0->Light.Model.TwoSide) {
                  FUNC_2( VAR_0, 1,
                                                VAR_1->Count - VAR_1->Start,
                                                VAR_1->Normal + VAR_1->Start,
                                                VAR_1->Bcolor + VAR_1->Start );
               }
            }
         }
         else {

            FUNC_1( VAR_0, 0,
                                     VAR_1->Count - VAR_1->Start,
                                     VAR_1->Eye + VAR_1->Start,
                                     VAR_1->Normal + VAR_1->Start,
                                     VAR_1->Fcolor + VAR_1->Start );
            if (VAR_0->Light.Model.TwoSide) {
               FUNC_1( VAR_0, 1,
                                        VAR_1->Count - VAR_1->Start,
                                        VAR_1->Eye + VAR_1->Start,
                                        VAR_1->Normal + VAR_1->Start,
                                        VAR_1->Bcolor + VAR_1->Start );
            }
         }
      }
   }
   else {

      if (!VAR_1->MonoMaterial) {

         GLuint VAR_5;



         for (VAR_5=VAR_1->Start; VAR_5<VAR_1->Count; VAR_5++) {
            FUNC_4( VAR_0, VAR_5 );
            FUNC_3( VAR_0, 0, 1, &VAR_1->Eye[VAR_5],
                                     &VAR_1->Normal[VAR_5], &VAR_1->Findex[VAR_5] );
            if (VAR_0->Light.Model.TwoSide) {
               FUNC_3( VAR_0, 1, 1, &VAR_1->Eye[VAR_5],
                                        &VAR_1->Normal[VAR_5], &VAR_1->Bindex[VAR_5] );
            }
         }



         FUNC_4( VAR_0, VAR_1->Count );
      }
      else {
         FUNC_3( VAR_0, 0,
                                  VAR_1->Count - VAR_1->Start,
                                  VAR_1->Eye + VAR_1->Start,
                                  VAR_1->Normal + VAR_1->Start,
                                  VAR_1->Findex + VAR_1->Start );
         if (VAR_0->Light.Model.TwoSide) {
            FUNC_3( VAR_0, 1,
                                     VAR_1->Count - VAR_1->Start,
                                     VAR_1->Eye + VAR_1->Start,
                                     VAR_1->Normal + VAR_1->Start,
                                     VAR_1->Bindex + VAR_1->Start );
         }
      }
   }
}
