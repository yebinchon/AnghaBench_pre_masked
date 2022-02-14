
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ ClearIndex; } ;
struct TYPE_10__ {int (* ClearIndex ) (TYPE_4__*,scalar_t__) ;} ;
struct TYPE_12__ {TYPE_3__ Color; TYPE_2__ Driver; TYPE_1__* Visual; } ;
struct TYPE_9__ {int RGBAflag; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLfloat ;
typedef TYPE_4__ GLcontext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;

void FUNC_3( GLcontext *VAR_1, GLfloat VAR_2 )
{
   if (FUNC_0(VAR_1)) {
      FUNC_1( VAR_1, VAR_0, "glClearIndex" );
      return;
   }
   VAR_1->Color.ClearIndex = (GLuint) VAR_2;
   if (!VAR_1->Visual->RGBAflag) {

      (*VAR_1->Driver.ClearIndex)( VAR_1, VAR_1->Color.ClearIndex );
   }
}
