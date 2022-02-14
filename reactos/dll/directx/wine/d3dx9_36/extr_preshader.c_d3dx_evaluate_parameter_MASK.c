
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct d3dx_parameter {int bytes; int type; } ;
struct TYPE_3__ {scalar_t__* tables; int * table_sizes; } ;
struct TYPE_4__ {TYPE_1__ regs; int inputs; } ;
struct d3dx_param_eval {TYPE_2__ pres; int param_type; int version_counter; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (char*,struct d3dx_param_eval*,struct d3dx_parameter const*,void*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int FUNC_3 (size_t,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int *,int *,int ,int ,int ) ;
 int FUNC_8 (unsigned int*,int ,float*,int ) ;

HRESULT FUNC_9(struct d3dx_param_eval *VAR_5, const struct d3dx_parameter *VAR_6,
        void *VAR_7)
{
    HRESULT VAR_8;
    unsigned int VAR_9;
    unsigned int VAR_10, VAR_11, VAR_12;
    float *VAR_13;

    FUNC_1("peval %p, param %p, param_value %p.\n", VAR_5, VAR_6, VAR_7);

    if (FUNC_4(&VAR_5->pres.inputs, VAR_4))
    {
        FUNC_7(&VAR_5->pres.regs, &VAR_5->pres.inputs,
                FUNC_6(VAR_5->version_counter),
                ((void*)0), ((void*)0), VAR_5->param_type, VAR_2, VAR_2);

        if (FUNC_0(VAR_8 = FUNC_2(&VAR_5->pres)))
            return VAR_8;
    }

    VAR_12 = FUNC_3(VAR_3, VAR_5->pres.regs.table_sizes[VAR_3]);
    VAR_11 = VAR_6->bytes / sizeof(unsigned int);
    VAR_10 = FUNC_5(VAR_12, VAR_11);
    VAR_13 = (float *)VAR_5->pres.regs.tables[VAR_3];
    for (VAR_9 = 0; VAR_9 < VAR_10; ++VAR_9)
        FUNC_8((unsigned int *)VAR_7 + VAR_9, VAR_6->type, VAR_13 + VAR_9, VAR_0);
    return VAR_1;
}
