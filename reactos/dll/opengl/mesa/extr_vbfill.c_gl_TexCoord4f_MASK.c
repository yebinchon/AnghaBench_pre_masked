
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int TexCoord2f; } ;
struct TYPE_9__ {int TexCoord2f; } ;
struct TYPE_11__ {void** TexCoord; } ;
struct TYPE_12__ {TYPE_3__ API; TYPE_2__ Exec; TYPE_1__* VB; TYPE_4__ Current; } ;
struct TYPE_8__ {int TexCoordSize; } ;
typedef void* GLfloat ;
typedef TYPE_5__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;

void FUNC_1( GLcontext *VAR_1, GLfloat VAR_2, GLfloat VAR_3, GLfloat VAR_4, GLfloat VAR_5)
{
   VAR_1->Current.TexCoord[0] = VAR_2;
   VAR_1->Current.TexCoord[1] = VAR_3;
   VAR_1->Current.TexCoord[2] = VAR_4;
   VAR_1->Current.TexCoord[3] = VAR_5;
   if (VAR_1->VB->TexCoordSize==2) {

      VAR_1->VB->TexCoordSize = 4;
      FUNC_0( VAR_1 );
      VAR_1->Exec.TexCoord2f = VAR_1->API.TexCoord2f = VAR_0;
   }
}
