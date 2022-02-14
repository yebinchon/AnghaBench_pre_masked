
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* NearFar ) (TYPE_2__*,double,double) ;} ;
struct TYPE_7__ {TYPE_1__ Driver; } ;
typedef double GLfloat ;
typedef double GLdouble ;
typedef TYPE_2__ GLcontext ;


 double FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,double*) ;
 int FUNC_2 (TYPE_2__*,double,double) ;

void FUNC_3( GLcontext *VAR_0,
               GLdouble VAR_1, GLdouble VAR_2,
               GLdouble VAR_3, GLdouble VAR_4,
               GLdouble VAR_5, GLdouble VAR_6 )
{
   GLfloat VAR_7, VAR_8, VAR_9;
   GLfloat VAR_10, VAR_11, VAR_12;
   GLfloat VAR_13[16];

   VAR_7 = 2.0 / (VAR_2-VAR_1);
   VAR_8 = 2.0 / (VAR_4-VAR_3);
   VAR_9 = -2.0 / (VAR_6-VAR_5);
   VAR_10 = -(VAR_2+VAR_1) / (VAR_2-VAR_1);
   VAR_11 = -(VAR_4+VAR_3) / (VAR_4-VAR_3);
   VAR_12 = -(VAR_6+VAR_5) / (VAR_6-VAR_5);


   VAR_13[0*4+0] = VAR_7; VAR_13[1*4+0] = 0.0F; VAR_13[2*4+0] = 0.0F; VAR_13[3*4+0] = VAR_10;
   VAR_13[0*4+1] = 0.0F; VAR_13[1*4+1] = VAR_8; VAR_13[2*4+1] = 0.0F; VAR_13[3*4+1] = VAR_11;
   VAR_13[0*4+2] = 0.0F; VAR_13[1*4+2] = 0.0F; VAR_13[2*4+2] = VAR_9; VAR_13[3*4+2] = VAR_12;
   VAR_13[0*4+3] = 0.0F; VAR_13[1*4+3] = 0.0F; VAR_13[2*4+3] = 0.0F; VAR_13[3*4+3] = 1.0F;


   FUNC_1( VAR_0, VAR_13 );

   if (VAR_0->Driver.NearFar) {
      (*VAR_0->Driver.NearFar)( VAR_0, VAR_5, VAR_6 );
   }
}
