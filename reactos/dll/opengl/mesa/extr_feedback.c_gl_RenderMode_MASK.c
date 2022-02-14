
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int Count; int BufferSize; } ;
struct TYPE_9__ {int Hits; int BufferSize; int NameStackDepth; int BufferCount; int HitFlag; } ;
struct TYPE_11__ {int RenderMode; int NewState; TYPE_2__ Feedback; TYPE_1__ Select; } ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;



 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*) ;

GLint FUNC_4( GLcontext *VAR_3, GLenum VAR_4 )
{
   GLint VAR_5;

   if (FUNC_0(VAR_3)) {
      FUNC_1( VAR_3, VAR_1, "glRenderMode" );
   }

   switch (VAR_3->RenderMode) {
      case 129:
  VAR_5 = 0;
  break;
      case 128:
  if (VAR_3->Select.HitFlag) {
     FUNC_3( VAR_3 );
  }
  if (VAR_3->Select.BufferCount > VAR_3->Select.BufferSize) {




     VAR_5 = -1;
  }
  else {
     VAR_5 = VAR_3->Select.Hits;
  }
  VAR_3->Select.BufferCount = 0;
  VAR_3->Select.Hits = 0;
  VAR_3->Select.NameStackDepth = 0;
  break;
      case 130:
  if (VAR_3->Feedback.Count > VAR_3->Feedback.BufferSize) {

     VAR_5 = -1;
  }
  else {
     VAR_5 = VAR_3->Feedback.Count;
  }
  VAR_3->Feedback.Count = 0;
  break;
      default:
  FUNC_1( VAR_3, VAR_0, "glRenderMode" );
  return 0;
   }

   switch (VAR_4) {
      case 129:
         break;
      case 128:
  if (VAR_3->Select.BufferSize==0) {

     FUNC_1( VAR_3, VAR_1, "glRenderMode" );
  }
  break;
      case 130:
  if (VAR_3->Feedback.BufferSize==0) {

     FUNC_1( VAR_3, VAR_1, "glRenderMode" );
  }
  break;
      default:
  FUNC_1( VAR_3, VAR_0, "glRenderMode" );
  return 0;
   }

   VAR_3->RenderMode = VAR_4;
   VAR_3->NewState |= VAR_2;

   return VAR_5;
}
