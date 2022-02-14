
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gl_api_table {int dummy; } ;
struct TYPE_3__ {struct gl_api_table const Exec; int API; } ;
typedef TYPE_1__ GLcontext ;


 int FUNC_0 (int *,struct gl_api_table const*,int) ;

void FUNC_1( GLcontext *VAR_0, const struct gl_api_table *VAR_1 )
{
   if (VAR_1) {
      FUNC_0( &VAR_0->API, VAR_1, sizeof(struct gl_api_table) );
   }
   else {
      FUNC_0( &VAR_0->API, &VAR_0->Exec, sizeof(struct gl_api_table) );
   }
}
