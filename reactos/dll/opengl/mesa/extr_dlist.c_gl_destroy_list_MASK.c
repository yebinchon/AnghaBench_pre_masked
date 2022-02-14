
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct gl_image {int dummy; } ;
struct TYPE_9__ {TYPE_1__* Shared; } ;
struct TYPE_8__ {int opcode; scalar_t__ next; struct TYPE_8__* data; int e; } ;
struct TYPE_7__ {int DisplayList; } ;
typedef TYPE_2__ Node ;
typedef int GLuint ;
typedef int GLfloat ;
typedef TYPE_3__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;
 int FUNC_4 (struct gl_image*) ;

void FUNC_5( GLcontext *VAR_3, GLuint VAR_4 )
{
   Node *VAR_5, *VAR_6;
   GLboolean VAR_7;

   VAR_6 = (Node *) FUNC_0(VAR_3->Shared->DisplayList, VAR_4);
   VAR_5 = VAR_6;

   VAR_7 = VAR_6 ? VAR_0 : VAR_1;
   while (!VAR_7) {
      switch (VAR_5[0].opcode) {

  case 134:
     FUNC_3( VAR_3, VAR_5[1].e, (GLfloat *) VAR_5[6].data );
     VAR_5 += VAR_2[VAR_5[0].opcode];
     break;
  case 133:
     FUNC_3( VAR_3, VAR_5[1].e, (GLfloat *) VAR_5[10].data );
     VAR_5 += VAR_2[VAR_5[0].opcode];
     break;
  case 136:
     FUNC_2( VAR_5[5].data );
     VAR_5 += VAR_2[VAR_5[0].opcode];
     break;
  case 140:
     FUNC_4( (struct gl_image *) VAR_5[7].data );
     VAR_5 += VAR_2[VAR_5[0].opcode];
     break;
         case 138:
            FUNC_4( (struct gl_image *) VAR_5[3].data );
            VAR_5 += VAR_2[VAR_5[0].opcode];
            break;
         case 139:
            FUNC_4( (struct gl_image *) VAR_5[3].data );
            VAR_5 += VAR_2[VAR_5[0].opcode];
            break;
         case 132:
            FUNC_2( VAR_5[1].data );
     VAR_5 += VAR_2[VAR_5[0].opcode];
            break;
  case 131:
            FUNC_4( (struct gl_image *) VAR_5[8].data );
            VAR_5 += VAR_2[VAR_5[0].opcode];
     break;
  case 130:
            FUNC_4( (struct gl_image *) VAR_5[9].data );
            VAR_5 += VAR_2[VAR_5[0].opcode];
     break;
         case 129:
            {
               struct gl_image *VAR_8;
               VAR_8 = (struct gl_image *) VAR_5[7].data;
               FUNC_4( VAR_8 );
            }
            break;
         case 128:
            {
               struct gl_image *VAR_9;
               VAR_9 = (struct gl_image *) VAR_5[9].data;
               FUNC_4( VAR_9 );
            }
            break;
  case 137:
     VAR_5 = (Node *) VAR_5[1].next;
     FUNC_2( VAR_6 );
     VAR_6 = VAR_5;
     break;
  case 135:
     FUNC_2( VAR_6 );
     VAR_7 = VAR_1;
     break;
  default:

     VAR_5 += VAR_2[VAR_5[0].opcode];
     break;
      }
   }

   FUNC_1(VAR_3->Shared->DisplayList, VAR_4);
}
