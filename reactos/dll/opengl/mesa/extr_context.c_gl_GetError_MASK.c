
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ErrorValue; } ;
typedef int GLenum ;
typedef TYPE_1__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;

GLenum FUNC_2( GLcontext *VAR_2 )
{
   GLenum VAR_3;

   if (FUNC_0(VAR_2)) {
      FUNC_1( VAR_2, VAR_0, "glGetError" );
      return VAR_0;
   }

   VAR_3 = VAR_2->ErrorValue;
   VAR_2->ErrorValue = VAR_1;
   return VAR_3;
}
