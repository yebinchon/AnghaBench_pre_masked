
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* TriangleFunc ) (TYPE_2__*,int ,int ,int ,int ) ;} ;
struct TYPE_7__ {TYPE_1__ Driver; } ;
typedef int GLuint ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_0,
                  GLuint VAR_1, GLuint VAR_2, GLuint VAR_3, GLuint VAR_4, GLuint VAR_5 )
{
   (*VAR_0->Driver.TriangleFunc)( VAR_0, VAR_1, VAR_2, VAR_4, VAR_5 );
   (*VAR_0->Driver.TriangleFunc)( VAR_0, VAR_2, VAR_3, VAR_4, VAR_5 );
}
