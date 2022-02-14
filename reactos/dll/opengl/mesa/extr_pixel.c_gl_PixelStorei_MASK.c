
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int RowLength; int SkipPixels; int SkipRows; int Alignment; void* LsbFirst; void* SwapBytes; } ;
struct TYPE_8__ {int RowLength; int SkipPixels; int SkipRows; int Alignment; void* LsbFirst; void* SwapBytes; } ;
struct TYPE_10__ {TYPE_2__ Unpack; TYPE_1__ Pack; } ;
typedef int GLint ;
typedef int GLenum ;
typedef TYPE_3__ GLcontext ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 void* VAR_4 ;






 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3( GLcontext *VAR_5, GLenum VAR_6, GLint VAR_7 )
{


   if (FUNC_0(VAR_5)) {
      FUNC_1( VAR_5, VAR_2, "glPixelStore" );
      return;
   }

   switch (VAR_6) {
      case 134:
         VAR_5->Pack.SwapBytes = VAR_7 ? VAR_4 : VAR_0;
  break;
      case 138:
         VAR_5->Pack.LsbFirst = VAR_7 ? VAR_4 : VAR_0;
  break;
      case 137:
  if (VAR_7<0) {
     FUNC_1( VAR_5, VAR_3, "glPixelStore(param)" );
  }
  else {
     VAR_5->Pack.RowLength = VAR_7;
  }
  break;
      case 136:
  if (VAR_7<0) {
     FUNC_1( VAR_5, VAR_3, "glPixelStore(param)" );
  }
  else {
     VAR_5->Pack.SkipPixels = VAR_7;
  }
  break;
      case 135:
  if (VAR_7<0) {
     FUNC_1( VAR_5, VAR_3, "glPixelStore(param)" );
  }
  else {
     VAR_5->Pack.SkipRows = VAR_7;
  }
  break;
      case 139:
         if (VAR_7==1 || VAR_7==2 || VAR_7==4 || VAR_7==8) {
     VAR_5->Pack.Alignment = VAR_7;
  }
  else {
     FUNC_1( VAR_5, VAR_3, "glPixelStore(param)" );
  }
  break;
      case 128:
  VAR_5->Unpack.SwapBytes = VAR_7 ? VAR_4 : VAR_0;
         break;
      case 132:
  VAR_5->Unpack.LsbFirst = VAR_7 ? VAR_4 : VAR_0;
  break;
      case 131:
  if (VAR_7<0) {
     FUNC_1( VAR_5, VAR_3, "glPixelStore(param)" );
  }
  else {
     VAR_5->Unpack.RowLength = VAR_7;
  }
  break;
      case 130:
  if (VAR_7<0) {
     FUNC_1( VAR_5, VAR_3, "glPixelStore(param)" );
  }
  else {
     VAR_5->Unpack.SkipPixels = VAR_7;
  }
  break;
      case 129:
  if (VAR_7<0) {
     FUNC_1( VAR_5, VAR_3, "glPixelStore(param)" );
  }
  else {
     VAR_5->Unpack.SkipRows = VAR_7;
  }
  break;
      case 133:
         if (VAR_7==1 || VAR_7==2 || VAR_7==4 || VAR_7==8) {
     VAR_5->Unpack.Alignment = VAR_7;
  }
  else {
     FUNC_1( VAR_5, VAR_3, "glPixelStore" );
  }
  break;
      default:
  FUNC_1( VAR_5, VAR_1, "glPixelStore" );
   }
   FUNC_2( VAR_5 );
}
