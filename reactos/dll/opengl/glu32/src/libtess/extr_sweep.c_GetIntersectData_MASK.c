
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__* coords; void* data; } ;
typedef int GLfloat ;
typedef TYPE_1__ GLUvertex ;
typedef int GLUtesselator ;


 int FUNC_0 (int *,TYPE_1__*,void**,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2( GLUtesselator *VAR_1, GLUvertex *VAR_2,
       GLUvertex *VAR_3, GLUvertex *VAR_4,
       GLUvertex *VAR_5, GLUvertex *VAR_6 )





{
  void *VAR_7[4];
  GLfloat VAR_8[4];

  VAR_7[0] = VAR_3->data;
  VAR_7[1] = VAR_4->data;
  VAR_7[2] = VAR_5->data;
  VAR_7[3] = VAR_6->data;

  VAR_2->coords[0] = VAR_2->coords[1] = VAR_2->coords[2] = 0;
  FUNC_1( VAR_2, VAR_3, VAR_4, &VAR_8[0] );
  FUNC_1( VAR_2, VAR_5, VAR_6, &VAR_8[2] );

  FUNC_0( VAR_1, VAR_2, VAR_7, VAR_8, VAR_0 );
}
