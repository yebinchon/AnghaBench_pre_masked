
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
struct TYPE_4__ {int str; } ;
typedef TYPE_1__ StringInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,unsigned int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,unsigned int,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(jsdisp_t *VAR_2, unsigned VAR_3, jsval_t *VAR_4)
{
    StringInstance *VAR_5 = FUNC_4(VAR_2);
    jsstr_t *VAR_6;

    VAR_6 = FUNC_2(VAR_5->str, VAR_3, 1);
    if(!VAR_6)
        return VAR_0;

    FUNC_0("%p[%u] = %s\n", VAR_5, VAR_3, FUNC_1(VAR_6));

    *VAR_4 = FUNC_3(VAR_6);
    return VAR_1;
}
