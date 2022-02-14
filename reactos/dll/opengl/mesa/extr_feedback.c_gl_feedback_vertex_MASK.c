
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Mask; } ;
struct TYPE_6__ {TYPE_1__ Feedback; } ;
typedef int const GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int const) ;

void FUNC_1( GLcontext *VAR_5,
                         GLfloat VAR_6, GLfloat VAR_7, GLfloat VAR_8, GLfloat VAR_9,
    const GLfloat VAR_10[4], GLfloat VAR_11,
    const GLfloat VAR_12[4] )
{
   FUNC_0( VAR_5, VAR_6 );
   FUNC_0( VAR_5, VAR_7 );
   if (VAR_5->Feedback.Mask & VAR_0) {
      FUNC_0( VAR_5, VAR_8 );
   }
   if (VAR_5->Feedback.Mask & VAR_1) {
      FUNC_0( VAR_5, VAR_9 );
   }
   if (VAR_5->Feedback.Mask & VAR_3) {
      FUNC_0( VAR_5, VAR_11 );
   }
   if (VAR_5->Feedback.Mask & VAR_2) {
      FUNC_0( VAR_5, VAR_10[0] );
      FUNC_0( VAR_5, VAR_10[1] );
      FUNC_0( VAR_5, VAR_10[2] );
      FUNC_0( VAR_5, VAR_10[3] );
   }
   if (VAR_5->Feedback.Mask & VAR_4) {
      FUNC_0( VAR_5, VAR_12[0] );
      FUNC_0( VAR_5, VAR_12[1] );
      FUNC_0( VAR_5, VAR_12[2] );
      FUNC_0( VAR_5, VAR_12[3] );
   }
}
