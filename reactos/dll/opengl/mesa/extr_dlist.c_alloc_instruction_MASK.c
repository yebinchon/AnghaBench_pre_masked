
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ CurrentPos; TYPE_1__* CurrentBlock; } ;
struct TYPE_6__ {size_t opcode; struct TYPE_6__* next; } ;
typedef size_t OpCode ;
typedef TYPE_1__ Node ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLint ;
typedef TYPE_2__ GLcontext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static Node *FUNC_3( GLcontext *VAR_4, OpCode VAR_5, GLint VAR_6 )
{
   Node *VAR_7, *VAR_8;
   GLuint VAR_9 = VAR_2[VAR_5];

   FUNC_0( VAR_9 == VAR_6+1 );

   if (VAR_4->CurrentPos + VAR_9 + 2 > VAR_0) {

      VAR_7 = VAR_4->CurrentBlock + VAR_4->CurrentPos;
      VAR_7[0].opcode = VAR_3;
      VAR_8 = (Node *) FUNC_2( sizeof(Node) * VAR_0 );
      if (!VAR_8) {
         FUNC_1( VAR_4, VAR_1, "Building display list" );
         return ((void*)0);
      }
      VAR_7[1].next = (Node *) VAR_8;
      VAR_4->CurrentBlock = VAR_8;
      VAR_4->CurrentPos = 0;
   }

   VAR_7 = VAR_4->CurrentBlock + VAR_4->CurrentPos;
   VAR_4->CurrentPos += VAR_9;

   VAR_7[0].opcode = VAR_5;

   return VAR_7;
}
