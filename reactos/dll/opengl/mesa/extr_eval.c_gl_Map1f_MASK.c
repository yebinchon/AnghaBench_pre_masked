
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_25__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_24__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_23__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_22__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_21__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_20__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_19__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_18__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_17__ {int Order; scalar_t__* Points; void* Retain; scalar_t__ u2; scalar_t__ u1; } ;
struct TYPE_15__ {TYPE_6__ Map1Texture4; TYPE_5__ Map1Texture3; TYPE_4__ Map1Texture2; TYPE_3__ Map1Texture1; TYPE_2__ Map1Normal; TYPE_1__ Map1Color4; TYPE_9__ Map1Index; TYPE_8__ Map1Vertex4; TYPE_7__ Map1Vertex3; } ;
struct TYPE_16__ {TYPE_10__ EvalMap; } ;
typedef scalar_t__ GLuint ;
typedef int GLint ;
typedef scalar_t__ GLfloat ;
typedef int GLenum ;
typedef TYPE_11__ GLcontext ;
typedef void* GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_11__*) ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (TYPE_11__*,int ,char*) ;

void FUNC_4( GLcontext* VAR_5, GLenum VAR_6,
               GLfloat VAR_7, GLfloat VAR_8, GLint VAR_9,
               GLint VAR_10, const GLfloat *VAR_11, GLboolean VAR_12 )
{
   GLuint VAR_13;

   if (!VAR_11) {
      FUNC_3( VAR_5, VAR_3, "glMap1f" );
      return;
   }


   VAR_9 = FUNC_1( VAR_6 );

   if (FUNC_0(VAR_5)) {
      FUNC_3( VAR_5, VAR_1, "glMap1" );
      return;
   }

   if (VAR_7==VAR_8) {
      FUNC_3( VAR_5, VAR_2, "glMap1(u1,u2)" );
      return;
   }

   if (VAR_10<1 || VAR_10>VAR_4) {
      FUNC_3( VAR_5, VAR_2, "glMap1(order)" );
      return;
   }

   VAR_13 = FUNC_1( VAR_6 );
   if (VAR_13==0) {
      FUNC_3( VAR_5, VAR_0, "glMap1(target)" );
   }

   if (VAR_9 < VAR_13) {
      FUNC_3( VAR_5, VAR_2, "glMap1(stride)" );
      return;
   }

   switch (VAR_6) {
      case 129:
         VAR_5->EvalMap.Map1Vertex3.Order = VAR_10;
  VAR_5->EvalMap.Map1Vertex3.u1 = VAR_7;
  VAR_5->EvalMap.Map1Vertex3.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Vertex3.Points
             && !VAR_5->EvalMap.Map1Vertex3.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Vertex3.Points );
  }
  VAR_5->EvalMap.Map1Vertex3.Points = (GLfloat *) VAR_11;
         VAR_5->EvalMap.Map1Vertex3.Retain = VAR_12;
  break;
      case 128:
         VAR_5->EvalMap.Map1Vertex4.Order = VAR_10;
  VAR_5->EvalMap.Map1Vertex4.u1 = VAR_7;
  VAR_5->EvalMap.Map1Vertex4.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Vertex4.Points
             && !VAR_5->EvalMap.Map1Vertex4.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Vertex4.Points );
  }
  VAR_5->EvalMap.Map1Vertex4.Points = (GLfloat *) VAR_11;
  VAR_5->EvalMap.Map1Vertex4.Retain = VAR_12;
  break;
      case 135:
         VAR_5->EvalMap.Map1Index.Order = VAR_10;
  VAR_5->EvalMap.Map1Index.u1 = VAR_7;
  VAR_5->EvalMap.Map1Index.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Index.Points
             && !VAR_5->EvalMap.Map1Index.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Index.Points );
  }
  VAR_5->EvalMap.Map1Index.Points = (GLfloat *) VAR_11;
  VAR_5->EvalMap.Map1Index.Retain = VAR_12;
  break;
      case 136:
         VAR_5->EvalMap.Map1Color4.Order = VAR_10;
  VAR_5->EvalMap.Map1Color4.u1 = VAR_7;
  VAR_5->EvalMap.Map1Color4.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Color4.Points
             && !VAR_5->EvalMap.Map1Color4.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Color4.Points );
  }
  VAR_5->EvalMap.Map1Color4.Points = (GLfloat *) VAR_11;
  VAR_5->EvalMap.Map1Color4.Retain = VAR_12;
  break;
      case 134:
         VAR_5->EvalMap.Map1Normal.Order = VAR_10;
  VAR_5->EvalMap.Map1Normal.u1 = VAR_7;
  VAR_5->EvalMap.Map1Normal.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Normal.Points
             && !VAR_5->EvalMap.Map1Normal.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Normal.Points );
  }
  VAR_5->EvalMap.Map1Normal.Points = (GLfloat *) VAR_11;
  VAR_5->EvalMap.Map1Normal.Retain = VAR_12;
  break;
      case 133:
         VAR_5->EvalMap.Map1Texture1.Order = VAR_10;
  VAR_5->EvalMap.Map1Texture1.u1 = VAR_7;
  VAR_5->EvalMap.Map1Texture1.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Texture1.Points
             && !VAR_5->EvalMap.Map1Texture1.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Texture1.Points );
  }
  VAR_5->EvalMap.Map1Texture1.Points = (GLfloat *) VAR_11;
  VAR_5->EvalMap.Map1Texture1.Retain = VAR_12;
  break;
      case 132:
         VAR_5->EvalMap.Map1Texture2.Order = VAR_10;
  VAR_5->EvalMap.Map1Texture2.u1 = VAR_7;
  VAR_5->EvalMap.Map1Texture2.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Texture2.Points
             && !VAR_5->EvalMap.Map1Texture2.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Texture2.Points );
  }
  VAR_5->EvalMap.Map1Texture2.Points = (GLfloat *) VAR_11;
  VAR_5->EvalMap.Map1Texture2.Retain = VAR_12;
  break;
      case 131:
         VAR_5->EvalMap.Map1Texture3.Order = VAR_10;
  VAR_5->EvalMap.Map1Texture3.u1 = VAR_7;
  VAR_5->EvalMap.Map1Texture3.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Texture3.Points
             && !VAR_5->EvalMap.Map1Texture3.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Texture3.Points );
  }
  VAR_5->EvalMap.Map1Texture3.Points = (GLfloat *) VAR_11;
  VAR_5->EvalMap.Map1Texture3.Retain = VAR_12;
  break;
      case 130:
         VAR_5->EvalMap.Map1Texture4.Order = VAR_10;
  VAR_5->EvalMap.Map1Texture4.u1 = VAR_7;
  VAR_5->EvalMap.Map1Texture4.u2 = VAR_8;
  if (VAR_5->EvalMap.Map1Texture4.Points
             && !VAR_5->EvalMap.Map1Texture4.Retain) {
     FUNC_2( VAR_5->EvalMap.Map1Texture4.Points );
  }
  VAR_5->EvalMap.Map1Texture4.Points = (GLfloat *) VAR_11;
  VAR_5->EvalMap.Map1Texture4.Retain = VAR_12;
  break;
      default:
         FUNC_3( VAR_5, VAR_0, "glMap1(target)" );
   }
}
