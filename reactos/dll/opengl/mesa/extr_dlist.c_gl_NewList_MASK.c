
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Save; int API; void* ExecuteFlag; void* CompileFlag; scalar_t__ CurrentPos; int * CurrentBlock; int * CurrentListPtr; scalar_t__ CurrentListNum; } ;
typedef int Node ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLenum ;
typedef TYPE_1__ GLcontext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3( GLcontext *VAR_8, GLuint VAR_9, GLenum VAR_10 )
{
   if (FUNC_0(VAR_8)) {
      FUNC_1( VAR_8, VAR_5, "glNewList" );
      return;
   }
   if (VAR_9==0) {
      FUNC_1( VAR_8, VAR_6, "glNewList" );
      return;
   }
   if (VAR_10!=VAR_1 && VAR_10!=VAR_2) {
      FUNC_1( VAR_8, VAR_4, "glNewList" );
      return;
   }
   if (VAR_8->CurrentListPtr) {

      FUNC_1( VAR_8, VAR_5, "glNewList" );
      return;
   }


   VAR_8->CurrentListNum = VAR_9;
   VAR_8->CurrentListPtr = VAR_8->CurrentBlock = (Node *) FUNC_2( sizeof(Node) * VAR_0 );
   VAR_8->CurrentPos = 0;

   VAR_8->CompileFlag = VAR_7;
   if (VAR_10==VAR_1) {
      VAR_8->ExecuteFlag = VAR_3;
   }
   else {

      VAR_8->ExecuteFlag = VAR_7;
   }

   VAR_8->API = VAR_8->Save;
}
