
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void** Image; } ;
struct TYPE_5__ {TYPE_3__* Proxy2D; TYPE_3__* Proxy1D; } ;
struct TYPE_6__ {TYPE_1__ Texture; } ;
typedef size_t GLint ;
typedef TYPE_2__ GLcontext ;
typedef scalar_t__ GLboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int *,int ,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,TYPE_3__*) ;

__attribute__((used)) static GLboolean FUNC_4( GLcontext *VAR_3 )
{
   GLboolean VAR_4;
   GLint VAR_5;

   VAR_3->Texture.Proxy1D = FUNC_1(((void*)0), 0, 1);
   if (!VAR_3->Texture.Proxy1D) {
      return VAR_0;
   }

   VAR_3->Texture.Proxy2D = FUNC_1(((void*)0), 0, 2);
   if (!VAR_3->Texture.Proxy2D) {
      FUNC_3(((void*)0), VAR_3->Texture.Proxy1D);
      return VAR_0;
   }

   VAR_4 = VAR_0;
   for (VAR_5=0;VAR_5<VAR_2;VAR_5++) {
      VAR_3->Texture.Proxy1D->Image[VAR_5] = FUNC_0();
      VAR_3->Texture.Proxy2D->Image[VAR_5] = FUNC_0();
      if (!VAR_3->Texture.Proxy1D->Image[VAR_5]
          || !VAR_3->Texture.Proxy2D->Image[VAR_5]) {
         VAR_4 = VAR_1;
      }
   }
   if (VAR_4) {
      for (VAR_5=0;VAR_5<VAR_2;VAR_5++) {
         if (VAR_3->Texture.Proxy1D->Image[VAR_5]) {
            FUNC_2(VAR_3->Texture.Proxy1D->Image[VAR_5]);
         }
         if (VAR_3->Texture.Proxy2D->Image[VAR_5]) {
            FUNC_2(VAR_3->Texture.Proxy2D->Image[VAR_5]);
         }
      }
      FUNC_3(((void*)0), VAR_3->Texture.Proxy1D);
      FUNC_3(((void*)0), VAR_3->Texture.Proxy2D);
      return VAR_0;
   }
   else {
      return VAR_1;
   }
}
