
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * Normal; } ;
struct TYPE_7__ {TYPE_1__* VB; TYPE_2__ Current; } ;
struct TYPE_5__ {int MonoNormal; } ;
typedef int GLfloat ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;

void FUNC_0( GLcontext *VAR_1, const GLfloat *VAR_2 )
{
   VAR_1->Current.Normal[0] = VAR_2[0];
   VAR_1->Current.Normal[1] = VAR_2[1];
   VAR_1->Current.Normal[2] = VAR_2[2];
   VAR_1->VB->MonoNormal = VAR_0;
}
