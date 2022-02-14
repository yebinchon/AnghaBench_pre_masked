
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Index; } ;
struct TYPE_7__ {TYPE_2__* VB; TYPE_1__ Current; } ;
struct TYPE_6__ {int MonoColor; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLint ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;

void FUNC_0( GLcontext *VAR_1, GLint VAR_2 )
{
   VAR_1->Current.Index = (GLuint) VAR_2;
   VAR_1->VB->MonoColor = VAR_0;
}
