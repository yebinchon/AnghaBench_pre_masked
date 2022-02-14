
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * v; } ;
struct TYPE_7__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ ref_t ;
struct TYPE_8__ {struct TYPE_8__* next; int v; scalar_t__ is_const; int name; } ;
typedef TYPE_3__ dynamic_var_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static BOOL FUNC_1(dynamic_var_t *VAR_4, const WCHAR *VAR_5, ref_t *VAR_6)
{
    while(VAR_4) {
        if(!FUNC_0(VAR_4->name, VAR_5)) {
            VAR_6->type = VAR_4->is_const ? VAR_1 : VAR_2;
            VAR_6->u.v = &VAR_4->v;
            return VAR_3;
        }

        VAR_4 = VAR_4->next;
    }

    return VAR_0;
}
