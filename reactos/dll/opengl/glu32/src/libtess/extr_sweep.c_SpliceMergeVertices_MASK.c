
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {void* data; } ;
struct TYPE_11__ {TYPE_9__* Org; } ;
struct TYPE_10__ {int env; } ;
typedef double GLfloat ;
typedef TYPE_1__ GLUtesselator ;
typedef TYPE_2__ GLUhalfEdge ;


 int FUNC_0 (TYPE_1__*,TYPE_9__*,void**,double*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3( GLUtesselator *VAR_1, GLUhalfEdge *VAR_2,
     GLUhalfEdge *VAR_3 )




{
  void *VAR_4[4] = { ((void*)0), ((void*)0), ((void*)0), ((void*)0) };
  GLfloat VAR_5[4] = { 0.5, 0.5, 0.0, 0.0 };

  VAR_4[0] = VAR_2->Org->data;
  VAR_4[1] = VAR_3->Org->data;
  FUNC_0( VAR_1, VAR_2->Org, VAR_4, VAR_5, VAR_0 );
  if ( !FUNC_1( VAR_2, VAR_3 ) ) FUNC_2(VAR_1->env,1);
}
