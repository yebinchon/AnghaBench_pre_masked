
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int (* Vertex2f ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_13__ {TYPE_1__ Exec; } ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;

void FUNC_8( GLcontext *VAR_2, GLfloat VAR_3, GLfloat VAR_4, GLfloat VAR_5, GLfloat VAR_6 )
{






   if (FUNC_0(VAR_2)) {
      FUNC_3( VAR_2, VAR_0, "glRect" );
      return;
   }
   FUNC_1( VAR_2, VAR_1 );
   (*VAR_2->Exec.Vertex2f)( VAR_2, VAR_3, VAR_4 );
   (*VAR_2->Exec.Vertex2f)( VAR_2, VAR_5, VAR_4 );
   (*VAR_2->Exec.Vertex2f)( VAR_2, VAR_5, VAR_6 );
   (*VAR_2->Exec.Vertex2f)( VAR_2, VAR_3, VAR_6 );
   FUNC_2( VAR_2 );
}
