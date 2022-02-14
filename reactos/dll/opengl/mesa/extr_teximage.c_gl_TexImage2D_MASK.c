
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct gl_texture_image {int dummy; } ;
struct gl_image {scalar_t__ RefCount; } ;
struct TYPE_19__ {void* Dirty; struct gl_texture_image** Image; } ;
struct TYPE_17__ {TYPE_2__* Proxy2D; TYPE_7__* Current2D; void* AnyDirty; } ;
struct TYPE_15__ {int (* TexImage ) (TYPE_4__*,scalar_t__,TYPE_7__*,size_t,size_t,struct gl_texture_image*) ;} ;
struct TYPE_18__ {TYPE_3__ Texture; TYPE_1__ Driver; int NewState; } ;
struct TYPE_16__ {TYPE_12__** Image; } ;
struct TYPE_14__ {size_t Format; size_t Border; void* Height; void* Width; } ;
typedef void* GLsizei ;
typedef size_t GLint ;
typedef scalar_t__ GLenum ;
typedef TYPE_4__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 size_t VAR_5 ;
 int FUNC_1 (TYPE_12__*,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (struct gl_image*) ;
 int FUNC_4 (struct gl_texture_image*) ;
 struct gl_texture_image* FUNC_5 (TYPE_4__*,struct gl_image*,size_t,size_t) ;
 struct gl_texture_image* FUNC_6 (TYPE_4__*,size_t,void*,void*,int,size_t) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,TYPE_7__*,size_t,size_t,struct gl_texture_image*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,scalar_t__,size_t,size_t,scalar_t__,scalar_t__,void*,void*,size_t) ;

void FUNC_9( GLcontext *VAR_7,
                    GLenum VAR_8, GLint VAR_9, GLint VAR_10,
                    GLsizei VAR_11, GLsizei VAR_12, GLint VAR_13,
                    GLenum VAR_14, GLenum VAR_15,
                    struct gl_image *VAR_16 )
{
   if (FUNC_0(VAR_7)) {
      FUNC_2( VAR_7, VAR_1, "glTexImage2D" );
      return;
   }

   if (VAR_8==VAR_3) {
      struct gl_texture_image *VAR_17;
      if (FUNC_8( VAR_7, VAR_8, VAR_9, VAR_10,
                                  VAR_14, VAR_15, VAR_11, VAR_12, VAR_13 )) {

         return;
      }


      if (VAR_7->Texture.Current2D->Image[VAR_9]) {
         FUNC_4( VAR_7->Texture.Current2D->Image[VAR_9] );
      }


      if (VAR_16) {
         VAR_17 = FUNC_5(VAR_7, VAR_16, VAR_10, VAR_13);
      }
      else {
         VAR_17 = FUNC_6(VAR_7, VAR_10,
                                      VAR_11, VAR_12, 1, VAR_13);
      }


      VAR_7->Texture.Current2D->Image[VAR_9] = VAR_17;
      VAR_7->Texture.Current2D->Dirty = VAR_4;
      VAR_7->Texture.AnyDirty = VAR_4;
      VAR_7->NewState |= VAR_6;


      if (VAR_16 && VAR_16->RefCount==0) {

         FUNC_3(VAR_16);
      }


      if (VAR_7->Driver.TexImage) {
         (*VAR_7->Driver.TexImage)( VAR_7, VAR_3,
                                  VAR_7->Texture.Current2D,
                                  VAR_9, VAR_10, VAR_17 );
      }
   }
   else if (VAR_8==VAR_2) {

      if (FUNC_8( VAR_7, VAR_8, VAR_9, VAR_10,
                                  VAR_14, VAR_15, VAR_11, VAR_12, VAR_13 )) {
         if (VAR_9>=0 && VAR_9<VAR_5) {
            FUNC_1( VAR_7->Texture.Proxy2D->Image[VAR_9], 0,
                    sizeof(struct gl_texture_image) );
         }
      }
      else {
         VAR_7->Texture.Proxy2D->Image[VAR_9]->Format = VAR_10;
         VAR_7->Texture.Proxy2D->Image[VAR_9]->Border = VAR_13;
         VAR_7->Texture.Proxy2D->Image[VAR_9]->Width = VAR_11;
         VAR_7->Texture.Proxy2D->Image[VAR_9]->Height = VAR_12;
      }
      if (VAR_16 && VAR_16->RefCount==0) {

         FUNC_3(VAR_16);
      }
   }
   else {
      FUNC_2( VAR_7, VAR_0, "glTexImage2D(target)" );
      return;
   }
}
