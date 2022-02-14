
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ColorMask; } ;
struct TYPE_6__ {TYPE_1__ Color; } ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int *,int *,int *,int *) ;

void FUNC_2( GLcontext *VAR_1,
                         GLuint VAR_2, GLint VAR_3, GLint VAR_4,
                         GLubyte VAR_5[], GLubyte VAR_6[],
                         GLubyte VAR_7[], GLubyte VAR_8[] )
{
   GLubyte VAR_9[VAR_0], VAR_10[VAR_0], VAR_11[VAR_0], VAR_12[VAR_0];

   FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4, VAR_9, VAR_10, VAR_11, VAR_12 );

   if ((VAR_1->Color.ColorMask & 8) == 0) {

      FUNC_0( VAR_5, VAR_9, VAR_2 );
   }
   if ((VAR_1->Color.ColorMask & 4) == 0) {

      FUNC_0( VAR_6, VAR_10, VAR_2 );
   }
   if ((VAR_1->Color.ColorMask & 2) == 0) {

      FUNC_0( VAR_7, VAR_11, VAR_2 );
   }
   if ((VAR_1->Color.ColorMask & 1) == 0) {

      FUNC_0( VAR_8, VAR_12, VAR_2 );
   }
}
