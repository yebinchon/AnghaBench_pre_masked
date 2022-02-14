
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Visual; } ;
typedef int GLvisual ;
typedef TYPE_1__ GLframebuffer ;


 scalar_t__ FUNC_0 (int,int) ;

GLframebuffer *FUNC_1( GLvisual *VAR_0 )
{
   GLframebuffer *VAR_1;

   VAR_1 = (GLframebuffer *) FUNC_0( 1, sizeof(GLframebuffer) );
   if (!VAR_1) {
      return ((void*)0);
   }

   VAR_1->Visual = VAR_0;

   return VAR_1;
}
