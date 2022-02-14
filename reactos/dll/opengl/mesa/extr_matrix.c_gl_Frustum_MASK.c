
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* NearFar ) (TYPE_2__*,double,double) ;} ;
struct TYPE_8__ {double** NearFarStack; size_t ProjectionStackDepth; TYPE_1__ Driver; } ;
typedef double GLfloat ;
typedef double GLdouble ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 double FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,double*) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*,double,double) ;

void FUNC_4( GLcontext *VAR_1,
                 GLdouble VAR_2, GLdouble VAR_3,
    GLdouble VAR_4, GLdouble VAR_5,
   GLdouble VAR_6, GLdouble VAR_7 )
{
   GLfloat VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
   GLfloat VAR_14[16];

   if (VAR_6<=0.0 || VAR_7<=0.0) {
      FUNC_2( VAR_1, VAR_0, "glFrustum(near or far)" );
   }

   VAR_8 = (2.0*VAR_6) / (VAR_3-VAR_2);
   VAR_9 = (2.0*VAR_6) / (VAR_5-VAR_4);
   VAR_10 = (VAR_3+VAR_2) / (VAR_3-VAR_2);
   VAR_11 = (VAR_5+VAR_4) / (VAR_5-VAR_4);
   VAR_12 = -(VAR_7+VAR_6) / ( VAR_7-VAR_6);
   VAR_13 = -(2.0*VAR_7*VAR_6) / (VAR_7-VAR_6);


   VAR_14[0*4+0] = VAR_8; VAR_14[1*4+0] = 0.0F; VAR_14[2*4+0] = VAR_10; VAR_14[3*4+0] = 0.0F;
   VAR_14[0*4+1] = 0.0F; VAR_14[1*4+1] = VAR_9; VAR_14[2*4+1] = VAR_11; VAR_14[3*4+1] = 0.0F;
   VAR_14[0*4+2] = 0.0F; VAR_14[1*4+2] = 0.0F; VAR_14[2*4+2] = VAR_12; VAR_14[3*4+2] = VAR_13;
   VAR_14[0*4+3] = 0.0F; VAR_14[1*4+3] = 0.0F; VAR_14[2*4+3] = -1.0F; VAR_14[3*4+3] = 0.0F;


   FUNC_1( VAR_1, VAR_14 );






   VAR_1->NearFarStack[VAR_1->ProjectionStackDepth][0] = VAR_6;
   VAR_1->NearFarStack[VAR_1->ProjectionStackDepth][1] = VAR_7;

   if (VAR_1->Driver.NearFar) {
      (*VAR_1->Driver.NearFar)( VAR_1, VAR_6, VAR_7 );
   }
}
