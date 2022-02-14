
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int type_t ;
struct TYPE_4__ {scalar_t__ is_const; int cval; } ;
typedef TYPE_1__ expr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int ,int ,TYPE_1__*,int *,int ) ;

__attribute__((used)) static type_t *FUNC_2(type_t *VAR_2, expr_t *VAR_3)
{
    type_t *VAR_4;

    if (!VAR_3)
        return VAR_2;



    VAR_4 = FUNC_1(((void*)0), ((void*)0), VAR_0, VAR_3->is_const ? VAR_3->cval : 0,
            VAR_3->is_const ? ((void*)0) : VAR_3, ((void*)0), VAR_1);

    return FUNC_0(VAR_2, VAR_4);
}
