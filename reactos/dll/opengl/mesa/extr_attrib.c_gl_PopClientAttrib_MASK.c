
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct gl_pixelstore_attrib {int dummy; } ;
struct gl_attrib_node {int kind; scalar_t__ data; struct gl_attrib_node* next; } ;
struct gl_array_attrib {int dummy; } ;
struct TYPE_6__ {size_t ClientAttribStackDepth; int NewState; int Array; int Unpack; int Pack; struct gl_attrib_node** ClientAttribStack; } ;
typedef TYPE_1__ GLcontext ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

void FUNC_5( GLcontext *VAR_3 )
{
   struct gl_attrib_node *VAR_4, *VAR_5;

   if (FUNC_0(VAR_3)) {
      FUNC_3( VAR_3, VAR_0, "glPopClientAttrib" );
      return;
   }

   if (VAR_3->ClientAttribStackDepth==0) {
      FUNC_3( VAR_3, VAR_1, "glPopClientAttrib" );
      return;
   }

   VAR_3->ClientAttribStackDepth--;
   VAR_4 = VAR_3->ClientAttribStack[VAR_3->ClientAttribStackDepth];

   while (VAR_4) {
      switch (VAR_4->kind) {
         case 130:
            FUNC_1( &VAR_3->Pack, VAR_4->data,
                    sizeof(struct gl_pixelstore_attrib) );
            break;
         case 129:
            FUNC_1( &VAR_3->Unpack, VAR_4->data,
                    sizeof(struct gl_pixelstore_attrib) );
            break;
         case 128:
            FUNC_1( &VAR_3->Array, VAR_4->data,
      sizeof(struct gl_array_attrib) );
            break;
         default:
            FUNC_4( VAR_3, "Bad attrib flag in PopClientAttrib");
            break;
      }

      VAR_5 = VAR_4->next;
      FUNC_2( (void *) VAR_4->data );
      FUNC_2( (void *) VAR_4 );
      VAR_4 = VAR_5;
   }

   VAR_3->NewState = VAR_2;
}
