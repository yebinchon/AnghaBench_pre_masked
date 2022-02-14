
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {void* Vertex3fv; int Vertex4f; void* Vertex3f; void* Vertex2f; } ;
struct TYPE_13__ {void* Vertex3fv; int Vertex4f; void* Vertex3f; void* Vertex2f; } ;
struct TYPE_12__ {scalar_t__ Enabled; } ;
struct TYPE_10__ {scalar_t__ Enabled; } ;
struct TYPE_15__ {scalar_t__ RenderMode; TYPE_6__ Exec; TYPE_5__ API; int CompileFlag; TYPE_4__ Light; TYPE_3__* VB; TYPE_2__ Texture; scalar_t__ NeedNormals; TYPE_1__* Visual; } ;
struct TYPE_11__ {int TexCoordSize; } ;
struct TYPE_9__ {scalar_t__ RGBAflag; } ;
typedef TYPE_7__ GLcontext ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

void FUNC_0( GLcontext *VAR_27 )
{
   if (VAR_27->RenderMode==VAR_0) {
      VAR_27->Exec.Vertex4f = VAR_26;
      VAR_27->Exec.Vertex3f = VAR_12;
      VAR_27->Exec.Vertex2f = VAR_4;
      VAR_27->Exec.Vertex3fv = VAR_20;
   }
   else {
      VAR_27->Exec.Vertex4f = VAR_25;
      if (VAR_27->Visual->RGBAflag) {
         if (VAR_27->NeedNormals) {

            if (VAR_27->Texture.Enabled) {
               if (VAR_27->VB->TexCoordSize==2) {
                  VAR_27->Exec.Vertex2f = VAR_7;
                  VAR_27->Exec.Vertex3f = VAR_15;
                  VAR_27->Exec.Vertex3fv = VAR_23;
               }
               else {
                  VAR_27->Exec.Vertex2f = VAR_8;
                  VAR_27->Exec.Vertex3f = VAR_16;
                  VAR_27->Exec.Vertex3fv = VAR_24;
               }
            }
            else {
               VAR_27->Exec.Vertex2f = VAR_6;
               VAR_27->Exec.Vertex3f = VAR_14;
               VAR_27->Exec.Vertex3fv = VAR_22;
            }
         }
         else {

            if (VAR_27->Texture.Enabled) {
               if (VAR_27->VB->TexCoordSize==2) {
                  VAR_27->Exec.Vertex2f = VAR_2;
                  VAR_27->Exec.Vertex3f = VAR_10;
                  VAR_27->Exec.Vertex3fv = VAR_18;
               }
               else {
                  VAR_27->Exec.Vertex2f = VAR_3;
                  VAR_27->Exec.Vertex3f = VAR_11;
                  VAR_27->Exec.Vertex3fv = VAR_19;
               }
            }
            else {
               VAR_27->Exec.Vertex2f = VAR_1;
               VAR_27->Exec.Vertex3f = VAR_9;
               VAR_27->Exec.Vertex3fv = VAR_17;
            }
         }
      }
      else {

         if (VAR_27->Light.Enabled) {
            VAR_27->Exec.Vertex2f = VAR_6;
            VAR_27->Exec.Vertex3f = VAR_14;
            VAR_27->Exec.Vertex3fv = VAR_22;
         }
         else {
            VAR_27->Exec.Vertex2f = VAR_5;
            VAR_27->Exec.Vertex3f = VAR_13;
            VAR_27->Exec.Vertex3fv = VAR_21;
         }
      }
   }

   if (!VAR_27->CompileFlag) {
      VAR_27->API.Vertex2f = VAR_27->Exec.Vertex2f;
      VAR_27->API.Vertex3f = VAR_27->Exec.Vertex3f;
      VAR_27->API.Vertex4f = VAR_27->Exec.Vertex4f;
      VAR_27->API.Vertex3fv = VAR_27->Exec.Vertex3fv;
   }
}
