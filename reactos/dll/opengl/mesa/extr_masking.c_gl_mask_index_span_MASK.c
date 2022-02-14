
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t IndexMask; } ;
struct TYPE_6__ {TYPE_1__ Color; } ;
typedef size_t GLuint ;
typedef int GLint ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t,int ,int ,size_t*) ;

void FUNC_1( GLcontext *VAR_1,
                         GLuint VAR_2, GLint VAR_3, GLint VAR_4, GLuint VAR_5[] )
{
   GLuint VAR_6;
   GLuint VAR_7[VAR_0];
   GLuint VAR_8, VAR_9;

   FUNC_0( VAR_1, VAR_2, VAR_3, VAR_4, VAR_7 );

   VAR_8 = VAR_1->Color.IndexMask;
   VAR_9 = ~VAR_8;

   for (VAR_6=0;VAR_6<VAR_2;VAR_6++) {
      VAR_5[VAR_6] = (VAR_5[VAR_6] & VAR_8) | (VAR_7[VAR_6] & VAR_9);
   }
}
